#include<bits/stdc++.h>
using namespace std;
struct student
{
    int roll;
	string name;
	int marks;
};
bool comp(student p1, student p2)
{
    if(p1.marks>p2.marks)
    {
        return 1;
    }
    else if(p2.marks>p1.marks)
    {
        return 0;
    }
    else if(p2.marks==p1.marks)
    {
        if(p1.roll<p2.roll)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
	int n;
	cin>>n;
	student *arr=new student[n];
    int roll=1;
	for(int i=0; i<n; i++)
	{
		string name;
		cin>>name;
		int m1, m2, m3;
		cin>>m1>>m2>>m3;
		int total_marks=m1+m2+m3;
		arr[i]={roll, name, total_marks};
        roll+=1;
	}
	sort(arr, arr+n, comp);
	int count=1;
	for(int i=0; i<n; i++)
	{
		cout<<count<<" "<< arr[i].name<<endl;
        count+=1;
	}
}
