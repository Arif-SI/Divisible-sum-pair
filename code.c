#include <stdio.h>

int main() {
  int n, k,i,j;
  scanf("%d %d", &n, &k);
  int count = 0;
  int nums[n];
  for ( i = 0; i < n; i++) {
    scanf("%d", &nums[i]);
    for ( j = 0; j < i; j++)
      count += (nums[i] + nums[j]) % k == 0;
  }
  printf("%d", count);
  return 0;
}
