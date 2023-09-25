#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    char mirror = ' ';
    
    for(int i = 0; i < my_string.length(); i++)
	{
		int sim = 0;
		mirror = my_string[i];

		for(int j = 0; j < my_string.length(); j++)
		{
			if(my_string[j] == mirror && j < i)
			{
				sim++;
			}
		}

		if (sim == 0)
			answer += my_string[i];
	}
    
    
    return answer;
}