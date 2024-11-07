#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,i;
    int *p;

    scanf("%d",&n);
  
    p = (int*)malloc(n * sizeof(int));

    for(i=0;i<=n;i++){
        p[i]=i+1;
    }

    printf("[");
    for(i=0;i<n;i++){
        printf("%d ",p[i]);
        if(i<n-1){
            printf(",");
        }
    }
    printf("]\n");
   
   free(p);

    return 0;
}
