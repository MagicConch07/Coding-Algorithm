#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a[10000000];
    int b;
    int min = 10000000000;
    int max = -100000000000;


    cin >> b;
    
    for (int i = 0; i < b; i++) {
        cin >> a[i];
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }

    cout << min <<" " << max;


}

