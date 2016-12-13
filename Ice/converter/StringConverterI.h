// **********************************************************************
//
// Copyright (c) 2003-2016 ZeroC, Inc. All rights reserved.
//
// **********************************************************************

#ifndef STRING_CONVERTER_I_H
#define STRING_CONVERTER_I_H

#include <IceUtil/IceUtil.h>

namespace Demo
{

//
// UTF-8 converter for LATIN-1
//
class StringConverterI : public IceUtil::StringConverter
{
public:

    StringConverterI();
    ~StringConverterI();

    virtual IceUtil::Byte* toUTF8(const char*, const char*, IceUtil::UTF8Buffer&) const;
    virtual void fromUTF8(const IceUtil::Byte*, const IceUtil::Byte*, std::string&) const;
};

}

#endif
