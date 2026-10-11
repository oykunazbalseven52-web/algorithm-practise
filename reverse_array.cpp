#include <iostream>
using namespace std;
int main()
{
    int numbers[] = {3, 8, 1, 6, 2};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        int temp = numbers[left];
        numbers[left] = numbers[right];
        numbers[right] = temp;

        left++;
        right--;
    }
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}