#include <stdio.h>
#include <stdlib.h>
#include "bigint.h"

// source: http://stackoverflow.com/questions/14768230/malloc-for-struct-and-pointer-in-c
void BI_init(BIGINT x){
	x = (BIGINT) malloc (sizeof (struct bigint_st));
	if (x == NULL) printf("Error when init new big integer!\n");
}

void BI_clear(BIGINT x){
	if (x != NULL) free(x);
}