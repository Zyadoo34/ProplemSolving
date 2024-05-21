#include<iostream>
#include<string>
using namespace std;

char* removeduplicate(char str[], int n)
{
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                break;
            }
        }
        if (j == i)
        {
            str[index++] = str[i];
        }
    }
    return str;

int main() {
	string x;
	cin >> x;

	if (removeduplicate( x.length() )% 2 == 0)
		cout << "CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";



	return 0;
}
