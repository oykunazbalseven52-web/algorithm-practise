#include <iostream>
using namespace std;
int main()
{
    int numbers[] = {7, 2, 9, 4, 9, 1};
    int maxNumber = numbers[0];

    for (int i = 0; i < 6; i++)
    {
        if (maxNumber <= numbers[i])
        {
            maxNumber = numbers[i];
        }
    }

    cout << "Maximum number: " << maxNumber << endl;
    return 0;
}