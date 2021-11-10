#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbc0f22cc, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3e1d2b89, __VMLINUX_SYMBOL_STR(nf_unregister_net_hook) },
	{ 0x5a125d23, __VMLINUX_SYMBOL_STR(proc_remove) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xba660b26, __VMLINUX_SYMBOL_STR(proc_create) },
	{ 0xa58bf98, __VMLINUX_SYMBOL_STR(nf_register_net_hook) },
	{ 0x35c39f76, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xad27f361, __VMLINUX_SYMBOL_STR(__warn_printk) },
	{ 0x362ef408, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x800d7cdf, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2552DAE3FC4167D4791899A");
