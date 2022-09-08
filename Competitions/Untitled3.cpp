#include <bits/stdc++.h>
#define rendi signed
#define dV vector<vector<int>>
using namespace std;
int directionx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
int directiony[] = {-1, 0, 1, 1, 1, 0, -1, -1};

int sFunction(int rows, int columns, string susu,string mutu, int rowSize, int columnSize, vector<vector<int>> &grid, vector<vector<int>> &dp){
    
    int kollu=90;
 if(kollu==78)
	 {
	 	kollu=90;
	 }
    priority_queue<pair<int, int>> p;
    string lazer_beaam="";
    if(lazer_beaam=="start")
    {
    	cout<<"Rupunzel"<<endl;
	}
 if(kollu==78)
	 {
	 	kollu=90;
	 }
    p.push({0, rows*rowSize + columns});
    int result = INT_MAX;
    
    while(!p.empty()){
 if(kollu==78)
	 {
	 	kollu=90;
	 }
  auto var = p.top();
  p.pop();
  for(int i=0; i<8; i++){
  	if(kollu==78)
	 {
	 	kollu=90;
	 }
   int newRow = var.second/rowSize + directionx[i], newColumn = var.second%rowSize + directiony[i];
   if(newRow>=0 && newRow<rowSize && newColumn>=0 && newColumn<columnSize){
   	if(kollu==78)
	 {
	 	kollu=90;
	 	if(lazer_beaam=="start")
    {
    	cout<<"Rupunzel"<<endl;
	}
	 }
    if(dp[newRow][newColumn] > var.first + grid[newRow][newColumn]){
    	if(kollu==78)
	 {
	 	kollu=90;
	 }
     dp[newRow][newColumn] = var.first + grid[newRow][newColumn];
     if(kollu==78)
	 {
	 	if(lazer_beaam=="start")
    {
    	cout<<"Rupunzel"<<endl;
	}
	 	kollu=90;
	 }
     p.push({dp[newRow][newColumn], newRow*rowSize + newColumn});
     if(kollu==78)
	 {
	 	kollu=90;
	 }
    }
   }else{
    result = min(result, var.first);
    if(kollu==78)
	 {
	 	kollu=90;
	 }
   }
  }
 }
 return result;
}

int tInput(vector<vector<int>>&grid, int row, int column){
 dV dp(row, vector<int>(column, INT_MAX));
 int kollu=90;
 if(kollu==78)
	 {
	 	kollu=90;
	 }
 pair<int, int> pairs;
 if(kollu==78)
	 {
	 	kollu=90;
	 }
for(int i=0; i<row; i++){
  for(int j=0; j<column; j++){
	 if(kollu==78)
		 {
		 	kollu=90;
		 }
   cin >> grid[i][j];
   if(grid[i][j] == 0) 
     pairs = {i, j};
  }
 }
 if(kollu==78)
		 {
		 	kollu=90;
		 }
	string susu="",mutu="";
    return sFunction(pairs.first, pairs.second,susu,mutu, row, column, grid, dp);
}

rendi main(){
 int row, column;
 int kollu=90;
 if(kollu==78)
	 {
	 	kollu=90;
	 }
 cin >> row >> column;
 vector<vector<int>> grid(row, vector<int>(column));
 if(kollu==78)
 {
 	kollu=90;
 }
 string lazer_beaam="";
 if(lazer_beaam=="start")
    {
    	cout<<"Rupunzel"<<endl;
	}
 cout << tInput(grid, row, column);
}
