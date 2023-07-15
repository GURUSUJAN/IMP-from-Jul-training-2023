#include"bits/stdc++.h"
using namespace std;
int arr[1000][1000],m,n;
bool vis[1000][1000];

bool bou(int a,int b)
{
    if(a>=0 && b>=0 && a<n && b<m && arr[a][b]==1 && vis[a][b]==false)
	return true;
	return false;
}

void bst(int i,int j)
{
    queue<pair<int,int> >q;
    q.push({i,j});
    vis[i][j]=true;
    while(!q.empty())
    {
        pair<int,int>pai=q.front();
        int a=pai.first;
        int b=pai.second;
        q.pop();
        if(bou(a,b+1))
        {
            q.push({a,b+1});
            vis[a][b+1]=true;
        }
        if(bou(a,b-1))
        {
            q.push({a,b-1});
            vis[a][b-1]=true;
        }
        if(bou(a+1,b))
        {
            q.push({a+1,b});
            vis[a+1][b]=true;
        }
        if(bou(a-1,b))
        {
            q.push({a-1,b});
            vis[a-1][b]=true;
        }
        if(bou(a+1,b+1))
        {
            q.push({a+1,b+1});
            vis[a+1][b+1]=true;
        }
        if(bou(a-1,b+1))
        {
            q.push({a-1,b+1});
            vis[a-1][b+1]=true;
        }
        if(bou(a-1,b-1))
        {
            q.push({a-1,b-1});
            vis[a-1][b-1]=true;
        }
        if(bou(a+1,b-1))
        {
            q.push({a+1,b-1});
            vis[a+1][b-1]=true;
        }
    }
}

int main()
{
    int c=0;
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            vis[i][j]=false;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==1 && vis[i][j]==false)
            {
                bst(i,j);
                c++;
            }
        }
    }
    cout<<c<<endl;
}
