#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    int size1 = s1.size();
    int size2 = s2.size();
    
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            if(s1[i] == s2[j]){
                answer++;
            }
        }
    }
    
    return answer;
}