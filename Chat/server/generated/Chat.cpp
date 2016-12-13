// **********************************************************************
//
// Copyright (c) 2003-2016 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.6.3
//
// <auto-generated>
//
// Generated from file `Chat.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <Chat.h>
#include <IceUtil/PushDisableWarnings.h>
#include <Ice/BasicStream.h>
#include <Ice/LocalException.h>
#include <IceUtil/Iterator.h>
#include <IceUtil/PopDisableWarnings.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 306
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 3
#       error Ice patch level mismatch!
#   endif
#endif

namespace
{

const ::IceInternal::DefaultUserExceptionFactoryInit< ::Chat::InvalidMessageException> __Chat__InvalidMessageException_init("::Chat::InvalidMessageException");

}

Chat::InvalidMessageException::InvalidMessageException(const ::std::string& __ice_reason) :
    ::Ice::UserException(),
    reason(__ice_reason)
{
}

Chat::InvalidMessageException::~InvalidMessageException() throw()
{
}

::std::string
Chat::InvalidMessageException::ice_name() const
{
    return "Chat::InvalidMessageException";
}

Chat::InvalidMessageException*
Chat::InvalidMessageException::ice_clone() const
{
    return new InvalidMessageException(*this);
}

void
Chat::InvalidMessageException::ice_throw() const
{
    throw *this;
}

void
Chat::InvalidMessageException::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice("::Chat::InvalidMessageException", -1, true);
    __os->write(reason);
    __os->endWriteSlice();
}

void
Chat::InvalidMessageException::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(reason);
    __is->endReadSlice();
}

namespace Ice
{
}
