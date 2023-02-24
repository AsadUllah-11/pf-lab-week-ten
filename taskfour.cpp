#include <iostream>
using namespace std;
main()
{
    int index;
    int size;
    cout << "How many numbers you want to enter? ";
    cin >> size;
    int numbers[size];
    for (int x = 0; x < size; x++)
    {
        cout << "Enter Number: ";
        cin >> numbers[x];
    }
    int repeatingNumber;
    cout << "Enter Repeating Number: ";
    cin >> repeatingNumber;
    if (repeatingNumber > size)
    {
        cout << "True";
    }
    else
    {
        for (int x = 0; x < size; x++)
        {
            if (numbers[x] == repeatingNumber)
            {
                index = x;
                break;
            }
        }
        int count = 0;
        for (int x = (index - 1); x >= 0; x--)
        {
            count++;
        }
        int check = 0;
        for (int x = 0; x < count; x++)
        {
            if (numbers[x] == numbers[index + 1])
            {
                check++;
                index++;
            }
        }
        if (count == check)
        {
            cout << "true";
        }
        else
        {
            cout << "false";
        }
    }
}