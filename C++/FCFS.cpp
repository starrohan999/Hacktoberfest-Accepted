#include<iostream>
using namespace std;
class cpusched
{
 int n,bt[20],wt[20],tat[20],twt;
 float avg_wt,avg_tat;
 public:
 void data();
 void FCFS();
 void SJF();
 void Priority();
 void RoundR();
};
void cpusched::data()
{
 cout<<"\nEnter the total no. of processes:\n";
 cin>>n;
 for(int i=1;i<=n;i++)
 {
 cout<<"\nEnter the burst time for process P"<<i<<":\n";
 cin>>bt[i];
 }
}
void cpusched::FCFS()
{
 twt=0;
 for(int i=1;i<=n;i++)
 {
 cout<<"\nBurst time for process P"<<i<<" is :\n"<<bt[i];
 }
 wt[1]=0;
 for(int i=2;i<=n;i++)
 {
 wt[i]=wt[i-1]+bt[i-1];
 }
 for(int i=1;i<=n;i++)
 {
 twt+=wt[i];
 avg_wt=twt/n;
 
 }
 cout<<"\n Total waiting time is:\n"<<twt<<"\n Average waiting is:\n"<<avg_wt<<endl;
}
 int main()
{
 cpusched C;
 C.data();
 C.FCFS();
}

