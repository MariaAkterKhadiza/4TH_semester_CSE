#include <iostream>
using namespace std;
//linear
int linearseach(const vector<int> & t,int key)
{
      int idx = -1;
      for(int i:t)
       if(t[i] == key)
       {
         idx =i;
         break;
       }
       return idx;
}
// binary
int binarysearch(cont vector<int>& t, int key)
{
    int start = 0,finish = t.size() - 1;
    while(start<=finish)
    {
        int mid = (start + finish)/2;
        if(t[mid]==key)
          return mid;
        if(key<t[mid])
          finish = mid -1;
        else
         start = mid+1;
    }
    return -1;
}
// ternary
int ternarysearch(const vector<int>& t, int key)
{
    int start = 0,finit = t.size() -1;
    while(start <=finish)
    {
         int k = (finish-start)/3;
         int min1 = start+k,mid2 = finish-k;
         if(key ==t[mid1]) return mid1;
         if(key==t[mid2]) return mid2;
         if(key < t[mid1]) finish = mid-1;
         else if (key > t[mid2]) start = mid2+1;
         else{
            start = mid1 + 1;
            finish = mid2 -1;
         }
    }
   return -1;
}
int main() {
  int n;
  cout<<"Enter no. of element: ";
  cin>>n;
  vector<int> v(n);
  cout<< "Enter elemnet: "<<endl;

  v.clear();
  while(n--)
  {
    int x;
    cin >>x;
    v.push_back(x);

 int key;
 cout<<"/n Enter element: ";
 cin key;
  int ans = linearseach(v,key);
  ans == -1? cout<<"key not found";


 
linearseach(v,key) == -1? cout<<"key not found\n":
  cout<<"key found at index"<<ans<<endl;
return 0;
}
}