/*
kprivcheck
Checking Privledges in ToleranUX Kernel
Jukka Lappalainen / Uncle Benis, 2015
*/
#include "kprivinfo.h"

static int __init
kprivcheck_init(void){
	printk("Initizing kprivcheck\n");
	checkPrivledge();
	return 0;
}
module_init(kprivcheck_init);

static void __exit
kprivcheck_exit(void){
	printk("kprivcheck exiting \nif the systym is not shutting down\nplease ensure the process will diversify in systemVag");
}

module_exit(kprivcheck_exit);

