#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    int temp = 0;
    
    for(int i = 0; i < my_string.size(); i++){
        if(my_string[i] >= '0' && my_string[i] <= '9')
            answer.push_back(my_string[i] - 48);
    }
    
    for(int i = 0; i < answer.size(); i++){
        for(int j = 0; j < answer.size(); j++){
            if(answer[i] < answer[j]){
                temp = answer[i];
                answer[i] = answer[j];
                answer[j] = temp;
            }
        }
    }
    
    return answer;
}