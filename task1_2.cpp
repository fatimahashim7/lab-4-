// Task1 - Q2: Keep printing "hello" until the user enters 'n'
#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter character: " << endl;
    cin >> ch;

    while (ch != 'n')
    {
        cout << "hello" << endl;
        cin >> ch;
    }

    return 0;
}
