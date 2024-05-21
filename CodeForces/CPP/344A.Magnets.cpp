#include<iostream>
using namespace std;
int main() {
	int n=0;
	cin >> n;

	int* x = new int[n];

	
	int cntr=0;

	for (int i = 0; i < n; i++)
	{
		
		cin >> x[i];
		
	

	}

	for (int i = 0; i < n; i++)
	{
		
		if (x[i] == x[i + 1])
			continue;
		else
			cntr++;

	}
	cout << cntr;

	return 0;
}