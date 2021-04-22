#include<iostream>
using namespace std;
int main()
{
	int age,wait;
	cout<<"Enter your age: ";
	cin>>age;

	if(age>=18)
	{
		cout<<"\n Hey!! You have a right to vote now.";
	}
	else {
	
	wait = 18-age ;
	
	cout<<"\nYou are not eligible for Voting. \nYou need to still wait\t" <<wait<<" years more.";}
	
return 0;

}
