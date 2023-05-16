#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a;
    int b[100];
    int c;
    int count = 0;
    cin >> a;

    for (int i = 0; i < a; i++) cin >> b[i];
    cin >> c;

    for (int i = 0; i < a; i++)
        if (b[i] == c) count++;
    cout << count;

}

