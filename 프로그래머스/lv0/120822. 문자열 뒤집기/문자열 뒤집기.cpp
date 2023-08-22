#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    string temp = "";
    
    for(int i = 0; i < my_string.length() / 2; i++){
        temp = my_string[i];
        my_string[i] = my_string[my_string.length() - i - 1];
        my_string[my_string.length() - i - 1] = temp[0];
    }
    
    return my_string;
}