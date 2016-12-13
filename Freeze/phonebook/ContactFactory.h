// **********************************************************************
//
// Copyright (c) 2003-2016 ZeroC, Inc. All rights reserved.
//
// **********************************************************************

#ifndef CONTACT_FACTORY_H
#define CONTACT_FACTORY_H

#include <Freeze/Freeze.h>

class ContactFactory : public Ice::ObjectFactory
{
public:

    ContactFactory();

    //
    // Operations from ObjectFactory
    //
    virtual Ice::ObjectPtr create(const std::string&);
    virtual void destroy();

    void
    setEvictor(const Freeze::EvictorPtr&);
    
    Freeze::EvictorPtr
    getEvictor() const;

private:

    Freeze::EvictorPtr _evictor;
};

typedef IceUtil::Handle<ContactFactory> ContactFactoryPtr;

#endif
