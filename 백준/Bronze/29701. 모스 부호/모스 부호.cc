#include <iostream>
#include <map>

using namespace std;

int main() 
{
    map<string, char> m;
    string alpha[26] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.", "...","-","..-","...-",".--","-..-","-.--","--.." };
    string num[10] = { "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----." };
    for (int i = 0; i < 26; i++) {
        m[alpha[i]] = 'A' + i;
    }
    for (int i = 0; i < 10; i++) {
        m[num[i]] = '0' + i;
    }
    m["--..--"] = ',';
    m[".-.-.-"] = '.';
    m["..--.."] = '?';
    m["---..."] = ':';
    m["-....-"] = '-';
    m[".--.-."] = '@';

    int n = 0;
    string input;
    string answer;

    cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        answer += m[input];
    }
    
    cout << answer;
}