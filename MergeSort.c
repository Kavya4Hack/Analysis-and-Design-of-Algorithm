#include <stdio.h>
void merge(int u[], int v[], int t[], int n, int m){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(u[i] <= v[j]){
            t[k++] = u[i++];
        }else{
            t[k++] = v[j++];
        }
    }
    while(i<m){
        t[k++] = u[i++];
    }
    while (j<n){
        t[k++] = v[j++];
    }
    
}
int main(){
    int u[] = {1,3,5,7};
    int v[] = {2,4,6,8,10};
    int t[9];
    printf("u: ");
    for(int i=0;i<4;i++){
        printf("%d ",u[i]);
    }
    printf("\nv: ");
    for(int i=0;i<5;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
    merge(u,v,t,5,4);
    printf("Merged Array: ");
    for(int i=0;i<9;i++){
        printf("%d ",t[i]);
    }
    return 0;
}