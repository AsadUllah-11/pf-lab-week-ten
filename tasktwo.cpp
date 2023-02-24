#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "How many words you want to store? ";
    cin >> size;

    string words[size];
    string total;
    for (int index = 0; index < size; index++)
    {
        cout << "Enter Word: ";
        cin >> words[index];
        total = total + words[index];
    }
    char check;
    cout << "Enter letter for checking: ";
    cin >> check;
    int count = 0;
    for (int index = 0; total[index] != '\0'; index++)
    {
        if (total[index] == check)
        {
            count = count + 1;
        }
    }
    cout << count;
}
