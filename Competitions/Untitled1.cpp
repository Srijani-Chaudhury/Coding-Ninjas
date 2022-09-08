#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int findMaximumProfit(vector<int>& prices, int i, int k,
					bool buy, vector<vector<int> >& v)
{

	if (i >= prices.size() || k <= 0)
		return 0;

	if (v[i][buy] != -1)
		return v[i][buy];
	if (buy) {
		return v[i][buy]= max(-prices[i]+ findMaximumProfit(prices, i + 1,k, !buy, v),findMaximumProfit(prices, i + 1, k,buy, v));
	}
	else {
		return v[i][buy]= max(prices[i]+ findMaximumProfit(prices, i + 1, k - 1, !buy, v),findMaximumProfit(prices, i + 1, k,buy, v));
	}
}

int maxProfit(vector<int>& prices)
{

	int n = prices.size();
	vector<vector<int> > v(n, vector<int>(2, -1));
	return findMaximumProfit(prices, 0, 1, 1, v);
}


int main()
{
	
	int n;
	cin >>n;
	vector<int>prices(n);
	for(int i=0;i<n;i++)
	{
		cin >> prices[i];
	}
	int ans = maxProfit(prices);
	cout << ans << endl;

	return 0;
}

