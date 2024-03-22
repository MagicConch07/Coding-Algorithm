#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int recursion(string &s, int l, int r, int &tryNumber) {
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else
    {
        tryNumber++;
        return recursion(s, l + 1, r - 1, tryNumber);
    }
}

int isPalindrome(string &s, int &tryNumber) {
    return recursion(s, 0, s.length() - 1, tryNumber);
}

int main() {
    int n = 0;
    string str[1000];
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> str[i];

    }

    for (int i = 0; i < n; ++i)
    {
        int number = 1;
        cout << isPalindrome(str[i], number) << " " << number << std::endl;
    }
    
}