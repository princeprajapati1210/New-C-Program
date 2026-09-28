#include <stdio.h>
int main() {
int num = 1030;
int *ptr = &num;
printf("Value of num : %d\n", num);
printf("Value via *ptr : %d\n", *ptr);

return 0;
}
