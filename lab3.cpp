#include<vector>
#include<iostream>
#include<cstdlib>
#include<fstream>
#include<algorithm>
using namespace std;

int num,i;
int sum=0;
vector<int>cow(10000);
int main()
{
	ifstream inFile("file.in",ios::in);
	if(!inFile)
	{
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	inFile>>num;
	for(i=0;i<num;i++)
	{
		inFile>>cow[i];
	}
	sort(cow.begin(),cow.end());
	reverse(cow.begin(),cow.end());
	for(i=0;i<5;i++)
	{
		sum=sum+cow[i];	
	}
	cout<<sum<<endl;
	return 0;
}
