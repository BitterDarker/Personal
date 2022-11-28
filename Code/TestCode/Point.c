#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>
 
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))
 
// 如何求一个数组多大
//    sizeof(xxx)
// 如何求一个数组多少个元素
// sizeof(xxx)/sizeof(xxx[0])
 
typedef struct dev_op
{
    int (*open_dev)(char*nodename,int flag);
    int (*read_dev)(int fd,void*buf,int size);
    int (*write_dev)(int fd,void*buf,int size);
}ST_DEV_OP_T;
 
 
static int  open_dev(char*nodename,int flag)
{
    int ret = 0;
    return ret;
}
 
static int  read_dev(int fd,void*buf,int size)
{
    int ret = 0;
    return ret;
}
 
static int  write_dev(int fd,void*buf,int size)
{
    int ret = 0; 
    return ret;
}
 
static  ST_DEV_OP_T* pp_mtda_array[5] = {
 
};
 
//0-8 ?
int main()
{
 
    ST_DEV_OP_T  mtd_ops[] = {
      [0].read_dev = read_dev,
      [1].write_dev = write_dev,
    };
    ST_DEV_OP_T* p_mtd = NULL;
    p_mtd  = (ST_DEV_OP_T*)mtd_ops;
    ST_DEV_OP_T** pp_mtd = &p_mtd;
    pp_mtd[0] = p_mtd;
    pp_mtd[1] = p_mtd;
    pp_mtd[2] = p_mtd;
    pp_mtd[3] = p_mtd;
    pp_mtd[4] = p_mtd;
 
    pp_mtda_array[0] = pp_mtd[0];
    printf("arrary size is %ld\n",ARRAY_SIZE(mtd_ops));
    printf("** size is %ld\n",ARRAY_SIZE(pp_mtd));
    printf("** size of %ld\n",ARRAY_SIZE(pp_mtda_array));
    //
 
    for(;;);
    return 0;
}
