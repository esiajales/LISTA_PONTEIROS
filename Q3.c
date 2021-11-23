#include <stdio.h>

int main(void){

int i=5, *p;
p = &i;
printf("p = %p\n", p);
printf("p = %x", p); // resultado: 0x1000
printf("p = %d\n", *p+2); // resultado: 7
printf("p = %d\n", **&p); // resultado: 5
printf("p = %d\n", 3**p); // resultado: 15
printf("p = %d\n", **&p+4); // resultado: 9
}
