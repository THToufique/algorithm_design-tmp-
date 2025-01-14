#include <iostream>
#include <vector>

using namespace std;

void countRepeatedNumbers(const vector<int> &arr)
{
    int count[101] = {0};
    for (int num : arr)
    {
        count[num]++;
    }
    for (int i = 1; i <= 100; i++)
    {
        if (count[i] > 1)
        {
            cout << "Number " << i << "is repeated " << count[i] << " times" << endl;
        }
    }
}

int main()
{
    vector<int> arr = {5, 12, 7, 5, 12, 5, 45, 99, 7, 12};
    countRepeatedNumbers(arr);
    return 0;
}