# **********************************************************************
#
# Copyright (c) 2003-2016 ZeroC, Inc. All rights reserved.
#
# **********************************************************************

top_srcdir	= ..

include $(top_srcdir)/make/Make.rules

SUBDIRS		= casino phonebook bench library backup transform customEvictor

.PHONY: $(EVERYTHING) $(SUBDIRS)

all:: $(SUBDIRS)

$(SUBDIRS):
	@echo "making all in $@"
	@$(MAKE) all --directory=$@

$(EVERYTHING_EXCEPT_ALL)::
	@for subdir in $(SUBDIRS); \
	do \
	    echo "making $@ in $$subdir"; \
	    ( cd $$subdir && $(MAKE) $@ ) || exit 1; \
	done
