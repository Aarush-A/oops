void addition(int r, int c, int arr1[][c], int arr2[][c]) {
    int ans[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            ans[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r,c;
    printf("Choose size of matrices (R C): ");
    scanf("%d %d",&r,&c);

    int arr1[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter Element [%d][%d] for matrix 1: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    int arr2[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter Element [%d][%d] for matrix 2: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

    addition(r,c,arr1,arr2);
    return 0;
}
