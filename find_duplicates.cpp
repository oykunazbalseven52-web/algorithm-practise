#include <iostream>
using namespace std;
int main()
{
    int numbers[] = {3, 5, 3, 2, 5, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Duplicate numbers: ";

    for (int i = 0; i < size; i++)
    {
        bool alreadyChecked = false;

        for (int j = 0; j < i; j++)
        {
            if (numbers[j] == numbers[i])
            {
                alreadyChecked = true;
                break;
            }
        }
        if (alreadyChecked)
        {
            continue;
        }

        for (int j = i + 1; j < size; j++)
        {
            if (numbers[j] == numbers[i])
            {
                cout << numbers[i] << " ";
                break;
            }
        }
    }
    cout << endl;
    return 0;
}