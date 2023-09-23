#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    int T, D=0;
    string N;
    cin >> T;
    
    while (T--) {
        cin >> D;
        cout << endl;
        cin >> N;
        cout << endl;
        int count = 0;
        
        char array[N.size() + 1];
        strcpy(array, N.c_str());
        
        for (int i = 0; i < N.size() + 1; i++) {
            if (array[i] == '0' || array[i] == '5') {
                count++;
                break;
            }
        }
        
        if (count > 0) {
            cout << "Yes";
        } else {
            cout << "No";
        }
        cout << endl;
    }
    return 0;
}
