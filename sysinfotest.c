#include <stdio.h>  
//#include <linux/unistd.h>     /* 包含调用 _syscallX 宏等相关信息*/  
//#include <linux/kernel.h>     /* 包含sysinfo结构体信息*/  
 #include <sys/sysinfo.h>
//_syscall1(int sysinfo, struct sysinfo* info);  
int main(int argc, char *agrv[])   
{    
struct sysinfo s_info;   
int error;    
error = sysinfo(&s_info);  
printf("code error=%d\n",error);
printf("Uptime = %ld\n  Number of processes = %d\n", s_info.uptime,  s_info.procs);  
return 0;
}

