#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(int i = 0; i < my_string.length(); i++){
        if(my_string[i] >= 'A' && my_string[i] <= 'Z')
            my_string[i] += 32;
    }
    
    for(int i = 0; i < my_string.length(); i++){
        for(int j = 0; j < my_string.length(); j++){
            char temp = ' ';
            if(my_string[i] < my_string[j]){
                temp = my_string[i];
                my_string[i] = my_string[j];
                my_string[j] = temp;
            }
        }
    }
    
    answer = my_string;
    
    return answer;
}