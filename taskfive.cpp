#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "How many numbers you want to enter? ";
    cin >> size;
    int numbers[size];
    for (int x = 0; x < size; x++)
    {
        cout << "Enter Number: ";
        cin >> numbers[x];
    }
    int n = 3, y = 1;
    float sum = 0, product = 1;
    for (int x = 0; x < size; x++)
    {
        for (; y <= n;)
        {
            product = product * numbers[x];
        }
        sum = sum + product;
        product = 1;
        n = n + 3;
        y = y + 3;
    }
    cout << sum;
}