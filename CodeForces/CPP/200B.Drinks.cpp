#include<iostream>
#include<string>

using namespace std;

int main() {
	float z=0, x,s = 0;
	float n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		s = s + x;
	}

	z= s * (1 / n);
	
	cout << z;


	







	return 0;
}