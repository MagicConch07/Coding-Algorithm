#include <string>
#include <vector>

using namespace std;

int answer = 0;
int targetNum;
vector<int> v;

void DFS(int n, char sign, int sum);

int solution(vector<int> numbers, int target) 
{
    int sum = 0;
    targetNum = target;
    v = numbers;
    DFS(0, '+', sum);
    DFS(0, '-', sum);
    return answer;
}

void DFS(int n, char sign, int sum)
{
    if (sign == '+')
        sum += v[n];
    else
        sum -= v[n];

    if (n + 1 == v.size())
    {
        if (sum == targetNum) answer++;
        return;
    }
    DFS(n + 1, '+', sum);
    DFS(n + 1, '-', sum);
}
