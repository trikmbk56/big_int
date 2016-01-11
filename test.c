#include <stdio.h>
#include <stdlib.h>
#include "bigint.h"

int main(){
	BIGINT x;

	//test init, clear big int
	BI_init(x);
	BI_clear(x);
}