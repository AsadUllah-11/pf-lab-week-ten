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
    for (int x = 0; x < size; x++)
    {
        if (numbers[x] < numbers[x + 1])
        {
            int temp = numbers[x + 1];
            numbers[x] = numbers[x + 1];
            numbers[x + 1] = temp;
        }
    }
    for (int x = 0; x < size; x++)
    {
        cout << numbers[x] << " ";
    }
}
