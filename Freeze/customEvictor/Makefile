# **********************************************************************
#
# Copyright (c) 2003-2016 ZeroC, Inc. All rights reserved.
#
# **********************************************************************

top_srcdir	= ../..

CLIENT		= client
SERVER		= server

TARGETS		= $(CLIENT) $(SERVER)

SLICE_OBJS	= Item.o \
		  ItemInfo.o

COBJS		= Item.o \
		  Client.o

SOBJS		= $(SLICE_OBJS) \
		  ItemI.o \
		  CurrentDatabase.o \
		  Database.o \
		  Evictor.o \
		  EvictorBase.o \
		  Server.o \
		  SimpleEvictor.o

OBJS		= $(COBJS) \
		  $(SOBJS)

all:: Database.cpp Database.h

include $(top_srcdir)/make/Make.rules

CPPFLAGS	:= -I. $(CPPFLAGS)

$(CLIENT): $(COBJS)
	rm -f $@
	$(CXX) $(LDFLAGS) $(LDEXEFLAGS) -o $@ $(COBJS) $(LIBS)

$(SERVER): $(SOBJS)
	rm -f $@
	$(CXX) $(LDFLAGS) $(LDEXEFLAGS) -o $@ $(SOBJS) $(DB_RPATH_LINK) -lFreeze $(LIBS)

# The slice2freeze rules are structured like this to avoid issues with
# parallel make.
Database.h: Database.cpp
Database.cpp: ItemInfo.ice
	rm -f Database.h Database.cpp
	$(SLICE2FREEZE) -I. -I$(slicedir) --dict Database,string,Warehouse::ItemInfo Database ItemInfo.ice

clean::
	-rm -rf db/__* db/items db/log* db/__Freeze
	-rm -f Database.h Database.cpp
