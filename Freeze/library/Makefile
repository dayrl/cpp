# **********************************************************************
#
# Copyright (c) 2003-2016 ZeroC, Inc. All rights reserved.
#
# **********************************************************************

top_srcdir	= ../..

CLIENT		= client
SERVER		= server
COLLOCATED	= collocated

TARGETS		= $(CLIENT) $(SERVER) $(COLLOCATED)

SLICE_OBJS	= Library.o

COBJS		= $(SLICE_OBJS) \
		  Client.o \
		  Grammar.o \
		  Parser.o \
		  RunParser.o \
		  Scanner.o

SOBJS		= $(SLICE_OBJS) \
		  BookFactory.o \
		  LibraryI.o \
		  LibraryTypes.o \
		  Server.o

COLOBJS		= $(SLICE_OBJS) \
		  BookFactory.o \
		  Collocated.o \
		  Grammar.o \
		  LibraryI.o \
		  LibraryTypes.o \
		  Parser.o \
		  RunParser.o \
		  Scanner.o

OBJS		= $(COBJS) \
		  $(SOBJS) \
		  $(COLOBJS)

all:: LibraryTypes.cpp LibraryTypes.h

include $(top_srcdir)/make/Make.rules

CPPFLAGS	:= -I. $(CPPFLAGS) $(READLINE_FLAGS)
SLICE2CPPFLAGS	:= --ice $(SLICE2CPPFLAGS)

$(CLIENT): $(COBJS)
	rm -f $@
	$(CXX) $(LDFLAGS) $(LDEXEFLAGS) -o $@ $(COBJS) $(LIBS) $(READLINE_LIBS)

$(SERVER): $(SOBJS)
	rm -f $@
	$(CXX) $(LDFLAGS) $(LDEXEFLAGS) -o $@ $(SOBJS) $(DB_RPATH_LINK) -lFreeze $(LIBS)

$(COLLOCATED): $(COLOBJS)
	rm -f $@
	$(CXX) $(LDFLAGS) $(LDEXEFLAGS) -o $@ $(COLOBJS) $(DB_RPATH_LINK) -lFreeze $(LIBS) $(READLINE_LIBS)

# The slice2freeze rules are structured like this to avoid issues with
# parallel make.
LibraryTypes.h: LibraryTypes.cpp
LibraryTypes.cpp: Library.ice
	rm -f LibraryTypes.h LibraryTypes.cpp
	$(SLICE2FREEZE) --ice -I. -I$(slicedir) --dict StringIsbnSeqDict,string,Ice::StringSeq LibraryTypes $(slicedir)/Ice/BuiltinSequences.ice Library.ice

clean::
	-rm -rf db/*
	-rm -f LibraryTypes.h LibraryTypes.cpp
