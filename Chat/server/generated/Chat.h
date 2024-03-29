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

#ifndef __E__Program_Files__x86__ZeroC_Ice_3_6_3_Ice_3_6_3_demos_cpp_Chat_server_generated_Chat_h__
#define __E__Program_Files__x86__ZeroC_Ice_3_6_3_Ice_3_6_3_demos_cpp_Chat_server_generated_Chat_h__

#include <IceUtil/PushDisableWarnings.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/FactoryTableInit.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/StreamF.h>
#include <IceUtil/UndefSysMacros.h>

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

namespace Chat
{

class InvalidMessageException : public ::Ice::UserException
{
public:

    InvalidMessageException() {}
    explicit InvalidMessageException(const ::std::string&);
    virtual ~InvalidMessageException() throw();

    virtual ::std::string ice_name() const;
    virtual InvalidMessageException* ice_clone() const;
    virtual void ice_throw() const;

    ::std::string reason;

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    using ::Ice::UserException::__writeImpl;
    using ::Ice::UserException::__readImpl;
};

static InvalidMessageException __InvalidMessageException_init;

}

namespace Ice
{
template<>
struct StreamableTraits< ::Chat::InvalidMessageException>
{
    static const StreamHelperCategory helper = StreamHelperCategoryUserException;
};

}

#include <IceUtil/PopDisableWarnings.h>
#endif
