#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "How many numbers you want to enter? ";
    cin >> size;
    int miles[size];
    for (int index = 0; index < size; index++)
    {
        cout << "Enter Miles: ";
        cin >> miles[index];
    }
    int sum = 0;
    int progress = miles[0];
    for (int index = 1; index < size; index++)
    {
        if (miles[index] > progress)
        {
            sum++;
        }
        progress = miles[index];
    }
    cout << "Progress Days are: " << sum;
}