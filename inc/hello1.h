#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/printk.h>

MODULE_AUTHOR("Kateryna Kravchenko");
MODULE_DESCRIPTION("AK2_Lab5 advanced");
MODULE_LICENSE("Dual BSD/GPL");

extern void print_hello(uint n);
