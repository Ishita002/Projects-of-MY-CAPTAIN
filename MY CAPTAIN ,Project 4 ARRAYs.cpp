#include<iostream>
using namespace std;
int main()
{
	int data[5];
	cout<<"\nEnter elements : \n";
	for(int i=0;i<5;i++)
	cin>>data [i];
	cout<<"\nYou Entered:";
	for(int i=0;i<5;i++)
	cout<<endl<<*(data + i);
	return 0;
	
}
