#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    const int check = 45;
    
    for(int i = 0; i < numbers.size(); ++i)
    {
        answer += numbers[i];
    }
    
    return check - answer;
}