// Hello World
// Evan Manuella

#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Manuella");
MODULE_DESCRIPTION("My first module");

int init_module() 
{
	printk(KERN_DEBUG "Hello world!\n");
	return 0;
}

void cleanup_module() 
{
	printk(KERN_DEBUG "Goodbye\n");
}
