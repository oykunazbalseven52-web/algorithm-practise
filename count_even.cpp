#include <iostream>
using namespace std;
int main()
{
    int numbers[] = {7, 2, 9, 4, 8, 1};
    int evenCount = 0;

    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            evenCount++;
        }
    }
    cout << "Even numbers: " << evenCount << endl;
    return 0;
}