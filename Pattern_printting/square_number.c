#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){  // number of lines / rows --> i
        for(int j=1; j<=n; j++){  //number of columns --> j
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}