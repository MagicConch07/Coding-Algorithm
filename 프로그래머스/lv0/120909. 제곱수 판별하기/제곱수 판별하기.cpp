#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 2;
    int sum = 0;
    int a = 1;
    
    while(sum <= n){
        sum = 0;
        sum = a * a;
        
        if(sum == n)
            answer = 1;
        
        a++;
    }
    
    return answer;
}