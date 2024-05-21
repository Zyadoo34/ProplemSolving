#include<iostream>
#include <string>
#include<cmath>

using namespace std;
int main() {
	int n = 0;
	cin >> n;
	float sum=0;
	float* x = new float[n];
	float num;

	for (int i = 0; i < n; i++)
	{

		cin >> x[i];



	}

	for (int i = 0; i < n; i++)
	{

		sum = sum + x[i];

	}


	num= sum / 4;
	cout << ceil(num);


	return 0;
}