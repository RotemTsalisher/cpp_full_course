#include <stdio.h>

#define SET_STR(e)         [e] = #e
#define STRING_BY_VAL(e,v) [e] = #v
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
		STRING_BY_VAL(ONE, one),
		STRING_BY_VAL(TWO, two),
		STRING_BY_VAL(THREE, three),
		STRING_BY_VAL(FOUR, four),
		STRING_BY_VAL(FIVE, five)
	};
	int i = 0;

	for (i; i < LAST; i++)
	{
		printf("arr[%d] = %s\n", i, arr[i]);
	}
	return 0;
}