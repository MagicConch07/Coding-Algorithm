#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int s = num_list.size();
    int a = 0;
    int b = 0;
    
    for(int i = 0; i < s; i++){
        if(num_list[i] % 2 == 0){
            a++;
        }
        else{
            b++;
        }
    }
    
    answer.push_back(a);
    answer.push_back(b);
    
    return answer;
}