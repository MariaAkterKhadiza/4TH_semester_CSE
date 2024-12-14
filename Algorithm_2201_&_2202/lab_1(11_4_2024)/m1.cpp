#include<bits/stdc++.h>
using namespace std;


int main()
{      
       vector<int> v;
       //capacity
       for(int i=1; i<=15;i++)
       {
        v.push_back(i);
        //cout<<"size: "<<v.size()<<" ";
        //cout<<"capacity: "<<v.capacity() <<endl;
       }
     
      //empty
     //cout<<v.empty()<<endl;


     //element print
     for(int i=0; i<v.size(); i++)
     {
        cout<<v[i]<<" ";
        cout<<endl;
     }


     //element print
     for(int i:v) //for integer i in v
     cout<<i <<" ";
     cout<<endl;


    return 0;
}