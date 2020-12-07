#include "hello1.h"

void print_hello(uint n){
	uint i;
	for(i = 0; i < n; i++)
		pr_info("Hello, world!\n");
}
EXPORT_SYMBOL(print_hello);

static int __init hello1_init(void){
	pr_info("hello1 is inited\n");
	return 0;
}

static void __exit hello1_exit(void){
	pr_info("hello1 is removed\n");
}

module_init(hello1_init);
module_exit(hello1_exit);
