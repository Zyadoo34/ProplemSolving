#include<iostream>
#include <algorithm>
#include<string>
using  namespace std;


int main() {
	string s, t;
	int i=0;
	int j = 0;
	cin >> s;
	cin >> t ;
	reverse(t.begin(), t.end());
	if (s == t) {	
		cout << "YES";	
	}
	else
		cout << "NO";
	
	return 0;
}
