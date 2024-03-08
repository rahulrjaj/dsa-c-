#include <iostream>
using namespace std;

int countDigits(int n)
{
    int ctr = 0;
    int temp = n;
    while (n > 0)
    {
        int r = n % 10;
        if (r != 0 && temp % r == 0)
        {
            ctr++;
        }
        n = n / 10;
    }
    return ctr;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = countDigits(num);
    cout << "The count of digits satisfying the condition is: " << result << endl;

    return 0;
}
