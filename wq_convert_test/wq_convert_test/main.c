#include <stdio.h>
#include "utils_.h"
#include "eq_header_.h"

#define EVENT 0
enum eq_prof
{
	LOW_BOOST = 0x00,
	MID_BOOST,
	HIGH_BOOST
};

typedef enum eq_prof eq_prof;

int main()
{
	eq_prof i = LOW_BOOST;
	const union user_eq* eq;
	while (i <= HIGH_BOOST)
	{
		printf("*****\n");
		eq = (union user_eq*)(&eq_[i++]);
		printf("eq->gain.low = %d, eq->gain.mid = %d, eq->gain.high = %d\n", eq->gain.low, eq->gain.mid, eq->gain.high);
	}
}