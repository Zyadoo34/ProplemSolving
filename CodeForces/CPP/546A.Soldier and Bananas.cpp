#include<iostream>
using namespace std;

int main() {
	int k = 0, n = 0, w = 0,b=0,s=0;
	cin >> k >> n >> w;
	for (int i = 0; i <w; i++)
	{
		int x = k+(k * i);
		s = x + s;
		
	}
	if (n <s||n==s)
	{
		b = s - n;
		cout << b;
	}
	else
		cout << "0";
	return 0;
}