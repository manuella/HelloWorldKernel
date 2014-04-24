# If KERNELRELEASE is defined, we've been invoked from the kernel build system
ifneq (${KERNELRELEASE},)
	obj-m := helloWorld.o 

# Otherwise we were called directly from the command
# line; invoke the kernel build system.
else

	KERNELDIR ?= /lib/modules/$(shell uname -r)/build
	PWD  := $(shell pwd)


default:
	make -C $(KERNELDIR) M=$(PWD) modules

endif
