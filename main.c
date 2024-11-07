#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,i;
    int *p = NULL;

    scanf("%d",&n);
  
    p = (int*)malloc(n * sizeof(int));

    for(i=1;i<=n;i++){
        p[i]=i;
        scanf("%d",&p[i]);
    }
    
    for(i=1;i<n;i++){
        printf("%d ",p[i]);
    }
   
   free(p);

    return 0;
}