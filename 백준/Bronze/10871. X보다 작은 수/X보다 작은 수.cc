#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a[100000];
    int b;
    int c;
    int d;

    cin >> b >> c;
    
    for (int i = 0; i < b; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < b; i++) {
        if (a[i] < c)
            cout << a[i] << " ";
    }

}

