%{

// **********************************************************************
//
// Copyright (c) 2003-2016 ZeroC, Inc. All rights reserved.
//
// **********************************************************************

#include <IceUtil/PushDisableWarnings.h>
#include <Parser.h>
#include <Grammar.h>

#if defined(_MSC_VER)
#if defined(ICE_64)
//
// '=' : conversion from 'size_t' to 'int', possible loss of data
// The result of fread() is a size_t and gets inserted into an int
//
#   pragma warning( disable : 4267)
#endif
//
// 'initializing' : conversion from '__int64' to 'int', possible loss of data
// Puts a pointer-difference into an int
//
#   pragma warning( disable : 4244)
//
// conditional expression is constant
//
#   pragma warning( disable : 4127)
#endif

using namespace std;

#ifdef _MSC_VER
#   ifdef yywrap
#      undef yywrap
#      define yywrap() 1
#   endif
#   define YY_NO_UNISTD_H
#endif

#ifdef __SUNPRO_CC
#   ifdef yywrap
#      undef yywrap
#      define yywrap() 1
#   endif
#   ifdef ICE_64
#       pragma error_messages(off,truncwarn)
#   endif
#endif

#define YY_INPUT(buf, result, maxSize) parser->getInput(buf, result, maxSize)

%}

WS	[ \t\v\f\r]
NL	[\n]

%option noyywrap
%option always-interactive

%%

"//" {
    // C++-style comment
    int c;
    do
    {
	c = yyinput();
    }
    while(c != '\n' && c != EOF);
}

"/*" {
    // C-style comment
    while(true)
    {
	int c = yyinput();
	if(c == '*')
	{
	    int next = yyinput();
	    if(next == '/')
	    {
		break;
	    }
	    else
	    {
		unput(next);
	    }
	}
	else if(c == EOF)
	{
	    parser->warning("EOF in comment");
	    break;
	}
    }
}

"help" {
    return TOK_HELP;
}

"quit"|"exit" {
    return TOK_EXIT;
}

"add" {
    return TOK_ADD_BOOK;
}

"isbn" {
    return TOK_FIND_ISBN;
}

"authors" {
    return TOK_FIND_AUTHORS;
}

"next" {
    return TOK_NEXT_FOUND_BOOK;
}

"current" {
    return TOK_PRINT_CURRENT;
}

"rent" {
    return TOK_RENT_BOOK;
}

"return" {
    return TOK_RETURN_BOOK;
}

"remove" {
    return TOK_REMOVE_CURRENT;
}

"size" {
    return TOK_SET_EVICTOR_SIZE;
}

"shutdown" {
    return TOK_SHUTDOWN;
}

{WS}*(\\{WS}*{NL})? {
    size_t len = strlen(yytext);
    for(size_t i = 0; i < len; ++i)
    {
	if(yytext[i] == '\\')
	{
	    parser->continueLine();
	}
    }
}

{NL}|; {
    return ';';
}

\" {
    // "..."-type strings
    string s;
    while(true)
    {
	int c = yyinput();
	if(c == '"')
	{
	    break;
	}
	else if(c == EOF)
	{
	    parser->warning("EOF in string");
	    break;
	}
	else if(c == '\\')
	{
	    int next = yyinput();
	    switch(next)
	    {
		case '\\':
		case '"':
		{
		    s += next;
		    break;
		}

		case 'n':
		{
		    s += '\n';
		    break;
		}

		case 'r':
		{
		    s += '\r';
		    break;
		}

		case 't':
		{
		    s += '\t';
		    break;
		}

		case 'v':
		{
		    s += '\v';
		    break;
		}

		case 'f':
		{
		    s += '\f';
		    break;
		}

		default:
		{
		    s += c;
		    unput(next);
		}
	    }
	}
	else
	{
	    s += c;
	}
    }
    yylvalp->clear();
    yylvalp->push_back(s);
    return TOK_STRING;
}

\' {
    // '...'-type strings
    string s;
    while(true)
    {
	int c = yyinput();
	if(c == '\'')
	{
	    break;
	}
	else if(c == EOF)
	{
	    parser->warning("EOF in string");
	    break;
	}
	else
	{
	    s += c;
	}
    }
    yylvalp->clear();
    yylvalp->push_back(s);
    return TOK_STRING;
}

. {
    // Simple strings
    string s;
    s += yytext[0];
    while(true)
    {
	int c = yyinput();
	if(c == EOF)
	{
	    break;
	}
	else if(isspace(c) || c == ';')
	{
	    unput(c);
	    break;
	}

	s += c;
    }
    yylvalp->clear();
    yylvalp->push_back(s);
    return TOK_STRING;
}

%%

#include <IceUtil/PopDisableWarnings.h>
