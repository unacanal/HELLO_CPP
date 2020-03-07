#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int t; // # of test case
    cin >> t;
    
    while (t--)
    {
        int r; // repeat time
        string s; // string
        cin >> r >> s;
        int len = s.size();
        
        for (int i = 0; i < len; i++)
            for (int j = 0; j < r; j++)
                cout << s[i];
        cout << '\n';
    }
	return 0;
}