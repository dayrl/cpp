// **********************************************************************
//
// Copyright (c) 2003-2016 ZeroC, Inc. All rights reserved.
//
// **********************************************************************

#include <Ice/Ice.h>
#include <Hello.h>

using namespace std;
using namespace Demo;

int
main(int argc, char* argv[])
{
    Ice::CommunicatorPtr communicator;

    try
    {
        communicator = Ice::initialize(argc, argv);
        HelloPrx hello = HelloPrx::checkedCast(communicator->stringToProxy("hello:default -h localhost -p 10000"));
        hello->sayHello();
        communicator->destroy();
    }
    catch(const Ice::Exception& ex1)
    {
        cerr << ex1 << endl;
        try
        {
            if(communicator)
            {
                communicator->destroy();
            }
        }
        catch(const Ice::Exception& ex2)
        {
            cerr << ex2 << endl;
        }
        exit(1);
    }
    return 0;
}
