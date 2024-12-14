#include<bits/stdc++.h>
using namespace std;
int SOE(const vector<int>& t)
{
     int sum = 0;
     for(int i:t)
     {
          sum += i;
     }
       
     return sum;

}
vector<int> test()
{
    vector<int> y = {1,2,3,4,5};
    return y;
}

int main()
{      
       vector<int> v;
       vector<int> :: iterator vi;
       for(int i=0; i<=15; i++)
       {
        v.push_back(i);
       }

//cout<<"sum: "<<SOE (v)<<endl;
vector<int> t2 = test();
for(int i:t2)
  cout<<i<<endl;
    return 0;
}