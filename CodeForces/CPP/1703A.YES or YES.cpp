#include<iostream>
#include<string>

using namespace std;

int main() {

	int x;
	cin >> x;
	
	while (x--)
	{
		string s;
		cin >> s;
		
		string x="yes";

		for (int i = 0; i < s.size(); i++)
		{

				s[i] = tolower(s[i]);
		}
		if (s == x)
		{
			cout << "YES" << endl;

		}
		else
			cout << "NO" << endl;
		

		

	}


	return 0;
}