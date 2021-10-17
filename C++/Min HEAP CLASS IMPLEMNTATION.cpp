#include<bits/stdc++.h>
using namespace std;
class heap
{
   vector<int>v;
   bool minheap;
   bool compare(int a,int b)
   {
      if(minheap)
      {
            return a<b;
      }
      else
      {
            return a>b;
      }
   }
   void heapify(int i)
   {
         int minindex=i;
         int left=2*i; 
         int right=2*i+1;
         if(left<v.size() &&v[left]<v[i])
         {
               minindex=left;
         }
         if(right<v.size() &&v[right]<v[minindex])
         {
               minindex=right;
         }
         if(minindex!=i)
         {
               swap(v[minindex],v[i]);
               heapify(minindex);
         }
         
   }
   public: 
    heap(bool type)
    {
          v.push_back(-1);
          minheap=type;
    }
    void push(int i)
    {
         v.push_back(i);
         int child=v.size()-1;
         int parent=child/2;
         while(child>1 && compare(v[child],v[parent]))
         {
               swap(v[child],v[parent]);
                child=parent;
                parent=parent/2;
         }
    }
    int top()
    {
          return v[1];
    }
    bool isempty()
    {
          return v.size()==1;
    }
    void pop()
    {
          int i=v.size()-1;
          swap(v[1],v[i]);
          v.pop_back();
          heapify(1);
    }
      
};
int main()
{
      heap p(true);
      p.push(100);
      p.push(20);
      p.push(10);
      p.push(50);
      p.push(1);
      p.push(500);
      cout<<p.top()<<endl;
      while(!p.isempty())
      {
            cout<<p.top()<<"  ";
            p.pop();
      }
      return 0;
}