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
// Generated from file `ChatSession.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <ChatSession.h>
#include <IceUtil/PushDisableWarnings.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/Outgoing.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/BasicStream.h>
#include <Ice/SlicedData.h>
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

const ::std::string __Chat__ChatRoomCallback__init_name = "init";

const ::std::string __Chat__ChatRoomCallback__send_name = "send";

const ::std::string __Chat__ChatRoomCallback__join_name = "join";

const ::std::string __Chat__ChatRoomCallback__leave_name = "leave";

const ::std::string __Chat__ChatSession__setCallback_name = "setCallback";

const ::std::string __Chat__ChatSession__send_name = "send";

}
::IceProxy::Ice::Object* ::IceProxy::Chat::upCast(::IceProxy::Chat::ChatRoomCallback* p) { return p; }

void
::IceProxy::Chat::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Chat::ChatRoomCallback>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Chat::ChatRoomCallback;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::Chat::ChatRoomCallback::init(const ::Ice::StringSeq& __p_users, const ::Ice::Context* __ctx)
{
    ::IceInternal::Outgoing __og(this, __Chat__ChatRoomCallback__init_name, ::Ice::Normal, __ctx);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_users);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    __invoke(__og);
}

::Ice::AsyncResultPtr
IceProxy::Chat::ChatRoomCallback::begin_init(const ::Ice::StringSeq& __p_users, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Chat__ChatRoomCallback__init_name, __del, __cookie);
    try
    {
        __result->prepare(__Chat__ChatRoomCallback__init_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_users);
        __result->endWriteParams();
        __result->invoke();
    }
    catch(const ::Ice::Exception& __ex)
    {
        __result->abort(__ex);
    }
    return __result;
}

void
IceProxy::Chat::ChatRoomCallback::end_init(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Chat__ChatRoomCallback__init_name);
}

void
IceProxy::Chat::ChatRoomCallback::send(::Ice::Long __p_timestamp, const ::std::string& __p_name, const ::std::string& __p_message, const ::Ice::Context* __ctx)
{
    ::IceInternal::Outgoing __og(this, __Chat__ChatRoomCallback__send_name, ::Ice::Normal, __ctx);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_timestamp);
        __os->write(__p_name);
        __os->write(__p_message);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    __invoke(__og);
}

::Ice::AsyncResultPtr
IceProxy::Chat::ChatRoomCallback::begin_send(::Ice::Long __p_timestamp, const ::std::string& __p_name, const ::std::string& __p_message, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Chat__ChatRoomCallback__send_name, __del, __cookie);
    try
    {
        __result->prepare(__Chat__ChatRoomCallback__send_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_timestamp);
        __os->write(__p_name);
        __os->write(__p_message);
        __result->endWriteParams();
        __result->invoke();
    }
    catch(const ::Ice::Exception& __ex)
    {
        __result->abort(__ex);
    }
    return __result;
}

void
IceProxy::Chat::ChatRoomCallback::end_send(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Chat__ChatRoomCallback__send_name);
}

void
IceProxy::Chat::ChatRoomCallback::join(::Ice::Long __p_timestamp, const ::std::string& __p_name, const ::Ice::Context* __ctx)
{
    ::IceInternal::Outgoing __og(this, __Chat__ChatRoomCallback__join_name, ::Ice::Normal, __ctx);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_timestamp);
        __os->write(__p_name);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    __invoke(__og);
}

::Ice::AsyncResultPtr
IceProxy::Chat::ChatRoomCallback::begin_join(::Ice::Long __p_timestamp, const ::std::string& __p_name, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Chat__ChatRoomCallback__join_name, __del, __cookie);
    try
    {
        __result->prepare(__Chat__ChatRoomCallback__join_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_timestamp);
        __os->write(__p_name);
        __result->endWriteParams();
        __result->invoke();
    }
    catch(const ::Ice::Exception& __ex)
    {
        __result->abort(__ex);
    }
    return __result;
}

void
IceProxy::Chat::ChatRoomCallback::end_join(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Chat__ChatRoomCallback__join_name);
}

void
IceProxy::Chat::ChatRoomCallback::leave(::Ice::Long __p_timestamp, const ::std::string& __p_name, const ::Ice::Context* __ctx)
{
    ::IceInternal::Outgoing __og(this, __Chat__ChatRoomCallback__leave_name, ::Ice::Normal, __ctx);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_timestamp);
        __os->write(__p_name);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    __invoke(__og);
}

::Ice::AsyncResultPtr
IceProxy::Chat::ChatRoomCallback::begin_leave(::Ice::Long __p_timestamp, const ::std::string& __p_name, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Chat__ChatRoomCallback__leave_name, __del, __cookie);
    try
    {
        __result->prepare(__Chat__ChatRoomCallback__leave_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_timestamp);
        __os->write(__p_name);
        __result->endWriteParams();
        __result->invoke();
    }
    catch(const ::Ice::Exception& __ex)
    {
        __result->abort(__ex);
    }
    return __result;
}

void
IceProxy::Chat::ChatRoomCallback::end_leave(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Chat__ChatRoomCallback__leave_name);
}

const ::std::string&
IceProxy::Chat::ChatRoomCallback::ice_staticId()
{
    return ::Chat::ChatRoomCallback::ice_staticId();
}

::IceProxy::Ice::Object*
IceProxy::Chat::ChatRoomCallback::__newInstance() const
{
    return new ChatRoomCallback;
}
::IceProxy::Ice::Object* ::IceProxy::Chat::upCast(::IceProxy::Chat::ChatSession* p) { return p; }

void
::IceProxy::Chat::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Chat::ChatSession>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Chat::ChatSession;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::Chat::ChatSession::setCallback(const ::Chat::ChatRoomCallbackPrx& __p_cb, const ::Ice::Context* __ctx)
{
    ::IceInternal::Outgoing __og(this, __Chat__ChatSession__setCallback_name, ::Ice::Normal, __ctx);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_cb);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    __invoke(__og);
}

::Ice::AsyncResultPtr
IceProxy::Chat::ChatSession::begin_setCallback(const ::Chat::ChatRoomCallbackPrx& __p_cb, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Chat__ChatSession__setCallback_name, __del, __cookie);
    try
    {
        __result->prepare(__Chat__ChatSession__setCallback_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_cb);
        __result->endWriteParams();
        __result->invoke();
    }
    catch(const ::Ice::Exception& __ex)
    {
        __result->abort(__ex);
    }
    return __result;
}

void
IceProxy::Chat::ChatSession::end_setCallback(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Chat__ChatSession__setCallback_name);
}

::Ice::Long
IceProxy::Chat::ChatSession::send(const ::std::string& __p_message, const ::Ice::Context* __ctx)
{
    __checkTwowayOnly(__Chat__ChatSession__send_name);
    ::IceInternal::Outgoing __og(this, __Chat__ChatSession__send_name, ::Ice::Normal, __ctx);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_message);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    if(!__og.invoke())
    {
        try
        {
            __og.throwUserException();
        }
        catch(const ::Chat::InvalidMessageException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& __ex)
        {
            ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
            throw __uue;
        }
    }
    ::Ice::Long __ret;
    ::IceInternal::BasicStream* __is = __og.startReadParams();
    __is->read(__ret);
    __og.endReadParams();
    return __ret;
}

::Ice::AsyncResultPtr
IceProxy::Chat::ChatSession::begin_send(const ::std::string& __p_message, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__Chat__ChatSession__send_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Chat__ChatSession__send_name, __del, __cookie);
    try
    {
        __result->prepare(__Chat__ChatSession__send_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_message);
        __result->endWriteParams();
        __result->invoke();
    }
    catch(const ::Ice::Exception& __ex)
    {
        __result->abort(__ex);
    }
    return __result;
}

#ifdef ICE_CPP11

::Ice::AsyncResultPtr
IceProxy::Chat::ChatSession::__begin_send(const ::std::string& __p_message, const ::Ice::Context* __ctx, const ::IceInternal::Function<void (::Ice::Long)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception, const ::IceInternal::Function<void (bool)>& __sent)
{
    class Cpp11CB : public ::IceInternal::Cpp11FnCallbackNC
    {
    public:

        Cpp11CB(const ::std::function<void (::Ice::Long)>& responseFunc, const ::std::function<void (const ::Ice::Exception&)>& exceptionFunc, const ::std::function<void (bool)>& sentFunc) :
            ::IceInternal::Cpp11FnCallbackNC(exceptionFunc, sentFunc),
            _response(responseFunc)
        {
            CallbackBase::checkCallback(true, responseFunc || exceptionFunc != nullptr);
        }

        virtual void completed(const ::Ice::AsyncResultPtr& __result) const
        {
            ::Chat::ChatSessionPrx __proxy = ::Chat::ChatSessionPrx::uncheckedCast(__result->getProxy());
            ::Ice::Long __ret;
            try
            {
                __ret = __proxy->end_send(__result);
            }
            catch(const ::Ice::Exception& ex)
            {
                Cpp11FnCallbackNC::exception(__result, ex);
                return;
            }
            if(_response != nullptr)
            {
                _response(__ret);
            }
        }
    
    private:
        
        ::std::function<void (::Ice::Long)> _response;
    };
    return begin_send(__p_message, __ctx, new Cpp11CB(__response, __exception, __sent));
}
#endif

::Ice::Long
IceProxy::Chat::ChatSession::end_send(const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __Chat__ChatSession__send_name);
    ::Ice::Long __ret;
    if(!__result->__wait())
    {
        try
        {
            __result->__throwUserException();
        }
        catch(const ::Chat::InvalidMessageException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& __ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
        }
    }
    ::IceInternal::BasicStream* __is = __result->__startReadParams();
    __is->read(__ret);
    __result->__endReadParams();
    return __ret;
}

const ::std::string&
IceProxy::Chat::ChatSession::ice_staticId()
{
    return ::Chat::ChatSession::ice_staticId();
}

::IceProxy::Ice::Object*
IceProxy::Chat::ChatSession::__newInstance() const
{
    return new ChatSession;
}

::Ice::Object* Chat::upCast(::Chat::ChatRoomCallback* p) { return p; }

namespace
{
const ::std::string __Chat__ChatRoomCallback_ids[2] =
{
    "::Chat::ChatRoomCallback",
    "::Ice::Object"
};

}

bool
Chat::ChatRoomCallback::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Chat__ChatRoomCallback_ids, __Chat__ChatRoomCallback_ids + 2, _s);
}

::std::vector< ::std::string>
Chat::ChatRoomCallback::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Chat__ChatRoomCallback_ids[0], &__Chat__ChatRoomCallback_ids[2]);
}

const ::std::string&
Chat::ChatRoomCallback::ice_id(const ::Ice::Current&) const
{
    return __Chat__ChatRoomCallback_ids[0];
}

const ::std::string&
Chat::ChatRoomCallback::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::Chat::ChatRoomCallback";
    return typeId;
#else
    return __Chat__ChatRoomCallback_ids[0];
#endif
}

::Ice::DispatchStatus
Chat::ChatRoomCallback::___init(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::Ice::StringSeq __p_users;
    __is->read(__p_users);
    __inS.endReadParams();
    init(__p_users, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Chat::ChatRoomCallback::___send(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::Ice::Long __p_timestamp;
    ::std::string __p_name;
    ::std::string __p_message;
    __is->read(__p_timestamp);
    __is->read(__p_name);
    __is->read(__p_message);
    __inS.endReadParams();
    send(__p_timestamp, __p_name, __p_message, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Chat::ChatRoomCallback::___join(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::Ice::Long __p_timestamp;
    ::std::string __p_name;
    __is->read(__p_timestamp);
    __is->read(__p_name);
    __inS.endReadParams();
    join(__p_timestamp, __p_name, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Chat::ChatRoomCallback::___leave(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::Ice::Long __p_timestamp;
    ::std::string __p_name;
    __is->read(__p_timestamp);
    __is->read(__p_name);
    __inS.endReadParams();
    leave(__p_timestamp, __p_name, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __Chat__ChatRoomCallback_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "init",
    "join",
    "leave",
    "send"
};

}

::Ice::DispatchStatus
Chat::ChatRoomCallback::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Chat__ChatRoomCallback_all, __Chat__ChatRoomCallback_all + 8, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Chat__ChatRoomCallback_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___init(in, current);
        }
        case 5:
        {
            return ___join(in, current);
        }
        case 6:
        {
            return ___leave(in, current);
        }
        case 7:
        {
            return ___send(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Chat::ChatRoomCallback::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
Chat::ChatRoomCallback::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
Chat::__patch(ChatRoomCallbackPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Chat::ChatRoomCallbackPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Chat::ChatRoomCallback::ice_staticId(), v);
    }
}

::Ice::Object* Chat::upCast(::Chat::ChatSession* p) { return p; }

namespace
{
const ::std::string __Chat__ChatSession_ids[3] =
{
    "::Chat::ChatSession",
    "::Glacier2::Session",
    "::Ice::Object"
};

}

bool
Chat::ChatSession::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Chat__ChatSession_ids, __Chat__ChatSession_ids + 3, _s);
}

::std::vector< ::std::string>
Chat::ChatSession::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Chat__ChatSession_ids[0], &__Chat__ChatSession_ids[3]);
}

const ::std::string&
Chat::ChatSession::ice_id(const ::Ice::Current&) const
{
    return __Chat__ChatSession_ids[0];
}

const ::std::string&
Chat::ChatSession::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::Chat::ChatSession";
    return typeId;
#else
    return __Chat__ChatSession_ids[0];
#endif
}

::Ice::DispatchStatus
Chat::ChatSession::___setCallback(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::Chat::ChatRoomCallbackPrx __p_cb;
    __is->read(__p_cb);
    __inS.endReadParams();
    setCallback(__p_cb, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Chat::ChatSession::___send(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::std::string __p_message;
    __is->read(__p_message);
    __inS.endReadParams();
    try
    {
        ::Ice::Long __ret = send(__p_message, __current);
        ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
        __os->write(__ret);
        __inS.__endWriteParams(true);
        return ::Ice::DispatchOK;
    }
    catch(const ::Chat::InvalidMessageException& __ex)
    {
        __inS.__writeUserException(__ex, ::Ice::DefaultFormat);
    }
    return ::Ice::DispatchUserException;
}

namespace
{
const ::std::string __Chat__ChatSession_all[] =
{
    "destroy",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "send",
    "setCallback"
};

}

::Ice::DispatchStatus
Chat::ChatSession::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Chat__ChatSession_all, __Chat__ChatSession_all + 7, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Chat__ChatSession_all)
    {
        case 0:
        {
            return ___destroy(in, current);
        }
        case 1:
        {
            return ___ice_id(in, current);
        }
        case 2:
        {
            return ___ice_ids(in, current);
        }
        case 3:
        {
            return ___ice_isA(in, current);
        }
        case 4:
        {
            return ___ice_ping(in, current);
        }
        case 5:
        {
            return ___send(in, current);
        }
        case 6:
        {
            return ___setCallback(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Chat::ChatSession::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
Chat::ChatSession::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
Chat::__patch(ChatSessionPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Chat::ChatSessionPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Chat::ChatSession::ice_staticId(), v);
    }
}