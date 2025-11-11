#include <stdio.h>
#define MAX 100

int q1[MAX], q2[MAX], f1=0,r1=-1,f2=0,r2=-1;

void enqueue(int q[], int *r, int val){ q[++(*r)] = val; }
int dequeue(int q[], int *f, int *r){ return q[(*f)++]; }

void push(int val){
    enqueue(q2, &r2, val);
    while(f1 <= r1) enqueue(q2, &r2, dequeue(q1, &f1, &r1));
    f1=f2=0; r1=r2; for(int i=0;i<=r2;i++) q1[i]=q2[i];
    r2=-1;
}

int pop(){
    if(f1>r1) return -1;
    return dequeue(q1, &f1, &r1);
}

int main(){
    push(10); push(20); push(30);
    printf("%d popped\n", pop());
    printf("%d popped\n", pop());
    return 0;
}
