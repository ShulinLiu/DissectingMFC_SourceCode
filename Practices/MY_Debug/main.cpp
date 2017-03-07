//Step 1: built DEBUG exe
//Step 2: set break point
//Step 3: execute in [Built/Debug/Go] and trace the variables
//      also can trace variable in [View/Debug Windows/]
#include <iostream>

int main()
{
	int scores[5];
	//int sum;
	int sum = 0;
	scores[0] = scores[1] = scores[2] = scores[3] = scores[4] = 60;

	//for(int i = 1; i < 5; ++i)
	for(int i = 0; i < 5; ++i)
		sum += scores[i];

	int average = sum / 5;

	std::cout << "average is " << average << std::endl;

	return 0;
}
