#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cin >> num;

    while (num--)
    {
        int a, b;
        scanf("%d,%d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}
