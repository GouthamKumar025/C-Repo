//https://www.hackerrank.com/challenges/printing-pattern-2/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int min;
            if(i < j ){
                min = i;
            }else {
                min = j;
            }
            int c = n - min + 1;
            printf("%d ",c);
        }
        
        for(int j=n-1;j>=1;j--){
            int min;
            if(i < j ){
                min = i;
            }else {
                min = j;
            }
            int c = n - min + 1;
            printf("%d ",c);
        }
        printf("\n");
    }
    for(int i = n-1;i>=1;i--){
        for(int j=1;j<=n;j++){
            int min;
            if(i < j ){
                min = i;
            }else {
                min = j;
            }
            int c = n - min + 1;
            printf("%d ",c);
        }
        
        for(int j=n-1;j>=1;j--){
            int min;
            if(i < j ){
                min = i;
            }else {
                min = j;
            }
            int c = n - min + 1;
            printf("%d ",c);
        }
        printf("\n");
    }
    return 0;
}
