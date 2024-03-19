#include <iostream>
using namespace std;

int main()
{
    int n; // Number of terms in the series
    int t1 = 0, t2 = 1, nextTerm;

    cout << "Enter number of terms " << endl;
    cin >> n;
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    for (int i = 3; i <= n; ++i)
    {
        nextTerm = t1 + t2;
        cout << nextTerm << ", ";

        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
