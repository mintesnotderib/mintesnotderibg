#include<time.h>
#include<stdio.h>

int main()
{
struct timespec ts;
ts.tv_sec=5;//sleep for 5 second
ts.tv_nsec=500000000;// sleep to 500 million nano seconds which equal to 0.5 sec
if(nanosleep(&ts ,NULL)<0)
{
perror("nanosleep");
return 1;
}
printf("slept for 5.5 seconds\n");// 5sec + 0.5 sec =5.5 second
return 0;
}

