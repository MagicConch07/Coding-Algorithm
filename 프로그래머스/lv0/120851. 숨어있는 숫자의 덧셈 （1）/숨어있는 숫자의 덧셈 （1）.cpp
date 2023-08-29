#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    for(int i = 0; i < my_string.length(); i++){
        for(int j = 0; j <= 9; j++){
            string temp = to_string(j);
            if(my_string[i] == temp[0]){
                answer += j;
                break;
            }
        }
    }
    
    return answer;
}