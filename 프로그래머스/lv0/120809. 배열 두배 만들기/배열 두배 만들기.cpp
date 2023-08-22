#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int s = numbers.size();
    
    for(int i = 0; i < s; i++){
        numbers[i] += numbers[i];
    }
    
    answer = numbers;
    
    return answer;
}