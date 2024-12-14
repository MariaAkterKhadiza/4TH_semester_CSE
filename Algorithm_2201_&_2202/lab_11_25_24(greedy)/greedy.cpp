#include<bits\stdc++.h>
using namespace std;

struct Item{

   int profit,weight;
    

};
//comparator function
bool compare(Item a,Item b)
{
    return (a.profit/a.weight) > (b.profit/b.weight);
}
double Knapsack(int capacity, const vector<Item>& items)
{
    sort(items.begin(),items.end(),compare);

    double totalprofit = 0.0;

    for(auto& item:items)
    {
        if(item.weight <= capacity){
            totalprofit += item.profit;
            capacity -= item.weight;
        }
        else{
            double fraction = (double)capacity/item.weight;
            totalprofit += item.profit*fraction;
            break;
        }
    }
    return totalprofit;
}

int main()
{
    vector<Item> v;
    int n;
    cout<<"enter no. of items: ";
    cin>>n;
    int m;
    cout<<"enter capacity: ";
    cin>>m;
    for(int i=1; i<=n; i++)
    {
        Item a;
        cout<<"Enter item" <<i<<"profit";
        cin>>a.profit;
        cout<<"Enter item" << i <<"weight";
        cin>>a.weight;
        v.push_back(a);

    }


    double res = Knapsack(m,v);
    return 0;
    

}