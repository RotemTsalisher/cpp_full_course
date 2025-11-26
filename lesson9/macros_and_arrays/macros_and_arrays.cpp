#include <iostream>
#include <string>

#define SET_STR(e) [e] = #e
#define MAX_NAME   10

enum placeholder_
{
	ONE = 0x00,
	TWO,
	THREE,
	FOUR,
	FIVE,
	LAST
};

typedef enum placeholder_ p_holder;

int main()
{
	const char arr[LAST][MAX_NAME] = {
		SET_STR(ONE),

	};
	return 0;
}