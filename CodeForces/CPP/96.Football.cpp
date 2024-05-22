#include<iostream>
#include<string>

using namespace std;

int main() {

	string s;
	int c1 = 0, c0 = 0;
	cin >> s;


	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 48) {
			c0++;
			c1 = 0;
			/*cout <<"c0:" << c0 << endl;*/
		}

		else if (s[i] == 49) {
			c0 = 0;
			c1++;
			/*cout <<"c1:" <<c1<<endl;*/
		}
		if (c1 >= 7 || c0 >= 7)
		{
			break;
		}


	}
	if (c1 >= 7 || c0 >= 7)
	{
		cout << "YES";
	}
	else
		cout << "NO";



	return 0;

}