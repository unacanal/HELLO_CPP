#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int output, input, i, decompSum; // sum of decomposition // ex) f(245)=245+2+4+5=256
    string outputStr;
    cin >> input;

    for (i = 0; i < input; i++) {
        output = decompSum = i;
        outputStr = to_string(output);

        for (int j = 0; j < outputStr.size(); j++)
            decompSum += outputStr[j] - '0';

        if (decompSum == input)
            break;
        output = 0;
    }

    cout << output;
	return 0;
}