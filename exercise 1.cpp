#include <iostream>
#include <string>
using namespace std;
int main()
{
	string Name;
	short Year;
	cout<<"Enter name : ";
	cin >> Name;
	cout<<"Enter Year of Birth : " ;
	cin>>Year ;
	cout<<"\nYour Age = "<<2566-Year<<"years old."<<endl; 
	system("pause");
	return(0);
}