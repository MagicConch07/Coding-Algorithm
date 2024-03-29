#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
    while(n)
    {
        answer.push_back(n % 10); //일의 자리 가지고
        n /= 10; // 버림
    }
    
    return answer;
}