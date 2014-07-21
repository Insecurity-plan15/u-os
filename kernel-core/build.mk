CFLAGS_kernel-core := -I inc/kernel-core -ffreestanding -Wall -Wextra -fno-exceptions -fno-rtti

LDFLAGS_kernel-core := -T kernel.ld

kernel-core_PROGRAM := nexus

nexus_LIBRARIES := libcpp.a

nexus_FILES := $(shell find kernel-core/src -type f -name "*.cpp") $(shell find kernel-core/src -type f -name "*.s")
nexus_SOURCES := $(nexus_FILES:kernel-core/src/%=%)
