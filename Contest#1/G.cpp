#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,m,f=0,vv=0,mm=0;
    cin>>n>>m;
    int x[n][m];
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < m ; j++)
            x[i][j]=0;

    int maxx=max(n,m);

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m; j++)
        {
            cin>>x[i][j];
        }
    }
    for(int i = 0 ; i < maxx ; i++)
    {
        for(int j = maxx ; j >maxx-i ; j--)
        {
            cout<<" ";
        }
        for(int j = i ; j < maxx; j++)
        {
            if(i>=n || j>=m)
            {
                cout<<0<<" ";
            }
            else
            {
                cout<<x[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}