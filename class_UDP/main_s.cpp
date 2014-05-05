/*************************************************************************
	> File Name: main_s.cpp
	> Author: crooked
	> Mail:812665244@qq.com 
	> Created Time: Mon 14 Apr 2014 04:58:18 PM CST
 ************************************************************************/

#include"udp_s.h"
using namespace std;
int main()
{
   Udp_s server;
   pid_t pid;
   pid=fork();
   if(pid==-1)
   {
    cout<<"fork failed"<<endl;
   }
   else if(pid==0)
  {
   while(1)
   {
   server.receive();
   server.send();
   }
  }
   else
   {
    exit(0);
   }
  return 0;
}
