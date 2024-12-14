#include<bits/stdc++.h>
struct job{
    int id,profit,deadline;
};

bool compare(job a,job b)
{
    return a.profit > b.profit;
}

int jobScheddling(vector<job>& jobs,int maxDeadline)
{
    sort(jobs.begin(),jobs.end(),compare);
    int totalprofit = 0;
    vector<int>slots(maxDeadline+1, -1);


    for(auto& job:jobs){
        for(int j=job.deadline; j>=1;j--){
            if(slots[j]==-1)
            {
                slots[j]=job.id;
                totalprofit+=job.profit;
                break;
            }
        }
    }
    cout<<"Selected jobs: ";
    for(int slot"slots){
        if(slot !=-1)
        cout<<slot<<" ";
    }
    cout<<endl;
    return totalprofit;
}

int main()
{

    vector<Job> v;
    int n;
    cout<<"enter no. of Jobs: ";
    cin>>n;

    int maxDeadline=-1;

    for(int i=1; i<=n; i++)
    {
        Job a;
        cout<<"Enter Job" <<i<<"ID: ";
        cin>>a.id;
        cout<<"Enter Job" << i <<"Profit";
        cin>>a.profit;
        cout<<"Enter Job" << i <<"Deadline";
        cin>>a.deadline;
        if(a.deadline>maxDeadline)
        maxDeadline=a.deadline;
        v.push_back(a);

    }

    int res=jobScheddling(v,maxDeadline);

    cout<<"Total Profit = "<<res<<endl;

    return0;

}