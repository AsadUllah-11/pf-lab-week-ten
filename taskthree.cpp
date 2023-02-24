#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "How many numbers you want to enter? ";
    cin >> size;
    int numbers[size];
    for (int index = 0; index < size; index++)
    {
        cout << "Enter Number: ";
        cin >> numbers[index];
    }
    int count = 0;
    for (int index = 1; index < size - 1; index++)
    {
        if (numbers[(index - 1)] < numbers[index] && numbers[(index + 1)] < numbers[index])
        {
            cout << numbers[index] << " ";
            count++;
        }
    }
    if (count == 0)
    {
        cout << "No Peak found";
    }
}
