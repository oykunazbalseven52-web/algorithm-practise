#include <iostream>
using namespace std;
int main()
{
    int numbers[] = {7, 9, 2, 9, 4, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int maxNumber = numbers[0];
    int maxCount = 0;

    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > maxNumber)
        {
            maxNumber = numbers[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == maxNumber)
        {
            maxCount++;
        }
    }

    cout << "Maximum number: " << maxNumber << endl;
    cout << "Occurrences: " << maxCount << endl;

    return 0;
}