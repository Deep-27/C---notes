#include <stdio.h>

main() {
int LA[] = {2,4,5,8,10,12,14,16,18,20};
int inserting_item = 6, k = 3, n = 10;
int i = 0, j = n;

printf("The original array elements as table of 2 are :\n");

for(i = 0; i<n; i++) {
printf("LA[%d] = %d \n", i, LA[i]);
}

n = n + 1;

while( j >= k) {
LA[j+1] = LA[j];
j = j - 1;
}

LA[k] = inserting_item;

printf("The array elements after insertion of missing term 6 in the table :\n");

for(i = 0; i<n; i++) {
printf("LA[%d] = %d \n", i, LA[i]);
}
j = k;

while( j < n) {
LA[j-1] = LA[j];
j = j + 1;
}

n = n -1;

printf("The array elements after deletion of 5 from table as it is not divisible by 2 :\n");

for(i = 0; i<n; i++) {
printf("LA[%d] = %d \n", i, LA[i]);
}
}