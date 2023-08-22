#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    int s = array.size();
    
    for(int i = 0; i < s; i++){
        if(array[i] > height){
            answer++;
        }
    }
    
    return answer;
}