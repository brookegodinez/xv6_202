#include "../kernel/types.h"
#include "../kernel/stat.h"
#include "user.h"
int main(int argc, char *argv[])
{
 tickets(atoi(argv[2])); // write your own function here
 int i,k;
 const int loop=10000; // adjust this parameter depending on your system speed
 for(i=0;i<loop;i++)
 {
 asm("nop"); // to prevent the compiler from optimizing the for-loop
 for(k=0;k<loop;k++)
 {
 asm("nop");
 }
 }
 printf("%s ", argv[1]);
 sched_statistics(); // your syscall
 exit(0);
 //schedule_test prog1 10; schedule_test prog2 30; schedule_test prog3 10
}