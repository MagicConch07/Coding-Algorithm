#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    while(true){
        if(n <= 0){
            break;
        }
        else{
            n -= slice;
            answer++;
        }
    }
    
    return answer;
}