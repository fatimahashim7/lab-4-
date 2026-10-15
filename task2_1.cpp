// Task2 - Q1: Sum of entered numbers using do..while (stop when 0 is entered)
#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;

    cout << "Enter an integer value, to EXIT enter 0" << endl;

    do
    {
        cin >> num;
        sum += num;
    } while (num != 0);

    cout << "sum= " << endl << sum << endl;

    return 0;
}
