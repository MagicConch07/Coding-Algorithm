#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -9999999999;
    
    for(int i = 0; i < numbers.size(); i++){
        for(int j = 0; j < numbers.size(); j++){
            int multiply = 0;
            if(i == j) continue;
            
            multiply = numbers[j] * numbers[i];
            
            if(answer < multiply)
                answer = multiply;
            
        }
    }
    
    return answer;
}