#include<stdio.h>
int n,y;
void rot(int (*a)[n],int n,int m,int (*b)[y],int y,int x,int num);
int main(){
    int m,num,x;
    printf("Enter the size of matrix : ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the elements of matrix:\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",*(a+i)+j);
        }
    }
    printf("Enter the number of times the matrix is to be rotated: ");
    scanf("%d",&num);
    if (num%2==0){
        x=m; y=n;
    }
    else{
        x=n; y=m;
    }
    int r[x][y];
    rot(a,n,m,r,y,x,num);
    printf("\nAfter right rotating the matrix %d times:\n",num);
    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            printf("%d ",*(*(r+i)+j));
        }
        printf("\n");
    }
    return 0;

}

void rot(int (*a)[n],int n,int m,int (*b)[y],int y,int x,int num){
    switch (num%4){
        case 1:
            for (int i=0;i<m;i++){
                for (int j=0;j<n;j++){
                    *(*(b+j)+m-1-i)=*(*(a+i)+j);
                }
            }
            break;
        case 2:
            for (int i=0;i<m;i++){
                for (int j=0;j<n;j++){
                    *(*(b+m-1-i)+n-1-j)=*(*(a+i)+j);
                }
            }
            break;
        case 3:
            for (int i=0;i<m;i++){
                for (int j=0;j<n;j++){
                    *(*(b+n-1-j)+i)=*(*(a+i)+j);
                }
            }
            break;
        case 0:
            for (int i=0;i<m;i++){
                for (int j=0;j<n;j++){
                    *(*(b+i)+j)=*(*(a+i)+j);
                }
            }
            break;
    }
}
