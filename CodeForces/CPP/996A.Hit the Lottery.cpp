#include<iostream>
using namespace std;

int main() {

	int n=0,c=0;
	cin >> n;
	
	while (n>=100)
	{
		n=n - 100;
		c++;
		
	
	}
	while (n >= 20)
	{
		n = n - 20;
		c++;
		

	}while(n >= 10)
	{
		n = n - 10;
		c++;
		

	}
	while (n >= 5)
	{
		n = n - 5;
		c++;
		

	}while (n >= 1)
	{
		n = n - 1;
		c++;
		


	}
	
	cout << c;


	return 0;
}