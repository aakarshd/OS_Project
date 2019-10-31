#include "types.h"
#include "stat.h"
#include "user.h"


int
main(int argc, char *argv[])
{
  int pid[3];
  int i;
  int pid_ter[5];
  //int pid_ter1[3];
  //int pid_ter2[3];
  for(i = 1;i <= 3;i++)
  {
    pid[i-1] = fork();
    if(pid[i-1] == 0)
    {
      sleep(5);
      printf(1,"(%d)is done\n",getpid());
      exit();
    }
  }

  //waitpid(pid[2],pid_ter2);
  //waitpid(pid[1],pid_ter1);
  //printf(1,"waited for (%d)\n",pid_ter2[0]);
  //printf(1,"waited for (%d)\n",pid_ter1[0]);
  //waitpid(-1,pid_ter);
  //printf(1,"waited for (%d)(%d)\n",pid_ter[0],pid_ter[1]);
  waitpid(0,pid_ter);
  printf(1,"waited for (%d)(%d)(%d)(%d)\n",pid_ter[0],pid_ter[1],pid_ter[2],pid_ter[3]);
  exit();
}
