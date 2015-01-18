/*
kprivcheck
Checking Privledges in ToleranUX Kernel
Jukka Lappalainen / Uncle Benis, 2015
*/

#define MODULE
#define LINUX
#define ___KERNEL___

#include <linux/module.h> /* TODO: Move Source Tree to TolerUX/ */
#include <linux/kernel.h>
#include "kprivinfo.h"
#include "kpriv.h"


static int __init kprivcheck_init(void){
	printk("Initizing kprivcheck\n");
	checkPrivledge();
	return 0;
}
module_init(kprivcheck_init);

static void __exit ykprivcheck_exit(void){
	printk("kprivcheck exiting \nif the systym is not shutting down\nplease ensure the process will diversify in systemVag");
}

module_exit(kprivcheck_exit);

