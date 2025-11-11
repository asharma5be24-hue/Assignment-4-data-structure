#include <stdio.h>
#define MAX 100

int main() {
    int q[MAX], n, i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++) scanf("%d",&q[i]);
    int mid = n/2;
    printf("Interleaved output: ");
    for(i=0;i<mid;i++) {
        printf("%d %d ", q[i], q[i+mid]);
    }
    if(n%2!=0) printf("%d", q[n-1]);
    return 0;
}
