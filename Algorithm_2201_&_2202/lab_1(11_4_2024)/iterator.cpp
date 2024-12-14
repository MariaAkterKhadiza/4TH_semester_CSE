#include<bits/stdc++.h>
using namespace std;


int main()
{      
       vector<int> v;
       
       vector<int> :: iterator vi;
       for(int i=1; i<=15;i++)
       {
        v.push_back(i);
        
       }
    //    for(vi=v.begin(); vi!=v.end(); vi++)
    //    {
    //     cout<< *vi << " ";
    //    }


     
    for(auto it:v)
       cout<it;

    return 0;
}