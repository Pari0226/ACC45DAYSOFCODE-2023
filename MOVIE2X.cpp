#include <iostream>
using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y;      // User input X = total minutes, Y = minutes of 2x watching.
                        //  Y is always even
    int R, S, T;
    R = X-Y;            // Remaining time.
    S = Y/2;            // Save time.
    T = R+S;            // Total time.

    cout << T << endl;
    return 0;
}