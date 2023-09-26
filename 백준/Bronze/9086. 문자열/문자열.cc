#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    string str = "";

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> str;
        cout << str[0] << str[str.size() - 1] << endl;
    }
}
