#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "How many words you want to enter? ";
    cin >> size;
    string word[size];
    for (int x = 0; x < size; x++)
    {
        cout << "Enter Word: ";
        cin >> word[x];
    }
    for (int x = size - 1; x >= 0; x--)
    {
        cout << word[x] << " ";
    }
}