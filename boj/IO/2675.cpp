#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int t; // test case 개수
    cin >> t;
    
    while (t--)
    {
        int r; // 반복 횟수
        string s; // 문자열
        cin >> r >> s;
        int len = s.size();
        
        for (int i = 0; i < len; i++)
            for (int j = 0; j < r; j++)
                cout << s[i];
        cout << '\n';
    }
	return 0;
}