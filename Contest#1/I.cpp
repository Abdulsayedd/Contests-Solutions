#include <bits/stdc++.h>
using namespace std;
int main (){
    string x;cin>>x;
    long long arr[x.size()];
    for(int i=0; i<x.size(); i++)
    {
        arr[i]=x[i]-'0';
    }
    for(int i=0;i<x.size(); i++)
    {
        arr[i]=pow(arr[i] , x.size());
    }
    long long sum=0;
    for(int i=0; i<x.size(); i++)
    {
        sum+=arr[i];
    }
    string ans=to_string(sum);
    if(x==ans)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}