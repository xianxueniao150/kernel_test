/*
 * nc_def.h
 */
#ifndef __NC_DEF_H
#define __NC_DEF_H
struct nc_distort {
    unsigned int old_addr;
    unsigned int new_addr;
    unsigned short old_port;
    unsigned short new_port;
};
#define procfs_name "netcco"

#endif
