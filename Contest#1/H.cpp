#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,d,m,count=0,sum=0;
    int j=0;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)cin>>arr[i];
    cin>>d>>m;
    for (int i=0;i<n;i++)
    {
        for (j=i ; j<(i+m) ; j++)
        {
            sum=sum+arr[j];
        }
        if (sum==d)count++;
        sum=0;
    }
    cout<<count<<endl;
}