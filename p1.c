// You are given a positive integer n. The second line will contain n positive integers. The third line will contain a value k.
// Now print the total count of strictly less and strictly greater value from k. Implement it using function.
// Note – In the given input, there may exist duplicate value.
// Sample Input : 
// 7
// 1 2 5 5 9 2 3 
//5
// Sample Output :
// 5

#include <stdio.h>

int calcCount(int arr[],int k,int n);

int main() {
    int n,k,count;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    count = calcCount(arr, k ,n);
    printf("%d\n", count);
    return 0;
}

int calcCount(int arr[],int k,int n) {
    int count = 0;
    for(int i =0;i<n;i++) {
        if(arr[i] != k) {
            count++;
        }
    }
    return count;
}