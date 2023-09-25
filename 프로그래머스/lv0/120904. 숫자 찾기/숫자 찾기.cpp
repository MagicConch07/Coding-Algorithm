#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    int len = 1;
    int numsize = 0;
    
    for(int i = 1; i <= num; i *= 10)
	{
		numsize = i;
	}

	for(int i = numsize; i >= 1; i /= 10)
	{
		int mul = (num / i) % 10;
		if(mul == k)
		{
			answer = len;
			break;
		}

		len++;
	}
    
    return answer;
    
}