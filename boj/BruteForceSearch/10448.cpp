#include <iostream>
#define N 45
using namespace std;

int isEurekaNum(int input);

int main(void)
{
    int num, input;
    cin >> num;
    
    while (num--)
    {
        cin >> input;
        cout << isEurekaNum(input) << endl;
    }
	return 0;
}

int isEurekaNum(int input)
{
    int T[N];
    for (int n = 0; n < N; n++)
        T[n] = n * (n + 1) / 2;
    
    for (int i = 1; i < N; i++)
        for (int j = 1; j < N; j++)
            for (int k = 1; k < N; k++)
                if (input == T[i] + T[j] + T[k])
                    return 1;                   
    return 0;
}