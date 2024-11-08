#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,i;
    int *p;

    scanf("%d",&n);

    if(n == 0){
        printf("[vazio]");
    }else {    
    
    p = (int*)malloc(n * sizeof(int));

    for(i=0;i<=n;i++){
        scanf("%d",&p[i]);
    }

    printf("[");
    for(i=0;i<n;i++){
        printf("%d ",p[i]);
        if(i<n-1){
            printf(", ");
        }
    }
    printf("]");
   
   free(p);
}
    return 0;
}
