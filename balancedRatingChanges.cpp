#include <iostream>
using namespace std;

int main()
{
    //taking in inputs
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            a[i] /= 2;
        } else {
            if (a[i] < 0) {
                if (count % 2 != 0){
                    a[i] = ((a[i] - 1) / 2); // Adjust for negative odd numbers
                } else {
                    a[i] = ((a[i]) / 2);
                }
            } else {
                if (count % 2 == 0){
                    a[i] = ((a[i] + 1) / 2);
                } else {
                    a[i] = ((a[i]) / 2);
                }
            }
            count++;
        }
        cout << a[i] << endl;
    }

    return 0;
}
