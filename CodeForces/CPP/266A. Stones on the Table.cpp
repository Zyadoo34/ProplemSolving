#include<string>
#include<iostream>
using namespace std;

int main() {


	int x;
	cin >> x;

	string s;
	cin >> s;

	int c = 0;

	for (int i = 0; i < x; i++)
	{
		if (s[i]==s[i+1])
		{
			c++;
		}
	}

	cout << c;




	return 0;
}