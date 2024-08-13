#include<iostream>
#include<string>
using namespace std;

int main() {
	

	string o = "codeforces";

	string s;
	int x;
	cin >> x;

	while(x--){

		cin >> s;
		int c = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != o[i])
			{
				c++;
			}

		}
		cout << c<<endl;
	}



	return 0;
}