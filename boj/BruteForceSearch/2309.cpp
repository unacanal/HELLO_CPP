#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> pop_element(vector<int> v, int idx);
void print(vector<int> v);

int main(void)
{
    vector<int> heights(9);
    int height, i, j;
    int sumOf9 = 0;
    int len = heights.size();
    for (i = 0; i < len; i++)
    {
        cin >> height;
        heights[i] = height;
        sumOf9 += height;
    }
    sort(heights.begin(), heights.end());
    for (i = 0; i < len - 1; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (sumOf9 - (heights[i] + heights[j]) == 100)
            {
                heights = pop_element(heights, heights[i]);
                heights = pop_element(heights, heights[j-1]);
                print(heights);
            }
        }
    }
    return 0;
}

vector<int> pop_element(vector<int> v, int element)
{
    vector<int>::iterator iter;
    for (iter = v.begin(); iter != v.end(); iter++)
        if (*iter == element)
        {
            v.erase(iter);
            break;
        }
    return v;      
}

void print(vector<int> v)
{
    vector<int>::iterator iter;
    for (iter = v.begin(); iter != v.end(); iter++)
        cout << *iter << "\n";
}