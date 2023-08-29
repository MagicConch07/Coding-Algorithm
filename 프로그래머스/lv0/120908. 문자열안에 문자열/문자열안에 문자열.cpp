#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 2;
    int count = 0;
    
    for(int i = 0; i < str1.length() - str2.length() + 1; i++){
        count = 0;
        for(int j = 0; j < str2.length(); j++){
            if(str1[i + j] == str2[j]){
                count++;
            }
        }
        
        if(count == str2.length())
        answer = 1;
        
    }
    
    return answer;
}