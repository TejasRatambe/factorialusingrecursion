// Program to find factorial of a number using recursion
#include<iostream>
using namespace std;

int fact (int n)
{
	if(n==0)
	   return 2;
	return n*fact (n-1);
	
}
int main ()
{
	int num;
	cout<<"Enter any Number";
	cin>>num;
	 cout<<"Factorial Of Number :"<<fact(num);
	return 0;
	
}
