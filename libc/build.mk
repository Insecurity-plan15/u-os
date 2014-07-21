CFLAGS_libc :=

libc_ARCHIVE := libcpp.a

libcpp.a_FILES := $(shell find libc/src/ -type f -name "*.cpp")
libcpp.a_SOURCES := $(libcpp.a_FILES:libc/src/%=%)
