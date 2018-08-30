/*
Superbowl Sunday is nearly here. In order to pass the time waiting
for the half-time commercials and wardrobe malfunctions, the local
hackers have organized a betting pool on the game. Members place
their bets on the sum of the two final scores, or on the absolute
difference between the two scores.
Given the winning numbers for each type of bet, can you deduce
the final scores?
Input
The first line of input contains n, the number of test cases. n lines
follow, each representing a test case. Each test case gives s and d,
non-negative integers representing the sum and (absolute) difference between the two final scores.
Output
For each test case, output a line giving the two final scores, largest first. If there are no such scores,
output a line containing “impossible”. Recall that football scores are always non-negative integers.

Sample Input
2
40 20
20 40
Sample Output
30 10
impossible


*/
// to avoid scanf warning and unsafe error.
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>


int number_of_test_case;
int a, b;
int sum, diff;
char line[] = "impossible";

void input() {
	

	scanf("%d", &number_of_test_case);
	while(number_of_test_case--)
	{
		scanf("%d %d", &sum, &diff);
		a = (sum + diff)	/	2;
		b = (sum - diff)	/	2;
		if (b >= 0 && (sum + diff) % 2 ==0)
		{
			printf("%d %d\n", a,b);
		}
		else {
			printf("%s\n", line);
		}
	}

}
int main() {

	input();
	

	return 0;
}

