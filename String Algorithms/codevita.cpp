#include<bits/stdc++.h>
using namespace std;
struct Item{
	int v;
	int cc;
};
bool compare(Item a,Item b)
{
	return a.cc>b.cc;
}
bool compare2(int a,int b)
{
	return a > b;
}
void dfs(vector<vector<int>>&edges,int sv,int n,bool *visited,vector<int>&vertices)
{
	visited[sv]=true;
	for(int i=1;i<=n;i++)
	{
		if(!visited[i] && edges[sv][i]!=-1 )
		{
			cout<<sv<<"/"<<i<<endl;
			dfs(edges,i,n,visited,vertices);
		}
	}
}
int main()
{
	int n,m;
	cin >> n >> m;
	vector<int>vertices(n+1);
	vector<pair<int,int>>edgelist(m);
	int counter=0;
	while(counter<m)
	{
		int v1,v2;
		cin >> v1 >> v2;
		vertices[v1]++;
		vertices[v2]++;
		edgelist[counter].first=v1;
		edgelist[counter].second=v2;
		counter++;
	}
    Item arr[n+1];
    for(int i=1;i<=n;i++)
    {
    	arr[i].v=i;
    	arr[i].cc=vertices[i];
	}
	arr[0].v=0;
	arr[0].cc=-INT_MAX;
	
	sort(arr+1,arr+n,compare);
	
	int weights[n];
	for(int i=0;i<n;i++)
	{
		cin >> weights[i];
	}
	sort(weights,weights+n,compare2);
	for(int i=1;i<=n;i++)
	{
		arr[i].cc=weights[i-1];
	}
	for(int i=1;i<=n;i++)
	{
		vertices[arr[i].v]=arr[i].cc;
	}
	long long ans=0;
	
	for(int i=0;i<m;i++)
	{
		ans+=vertices[edgelist[i].first]+vertices[edgelist[i].second];
	}
	cout<<ans;
	/*for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout << edges[i][j];
		}
		cout<<endl;
	}*/
	return 0;
}
