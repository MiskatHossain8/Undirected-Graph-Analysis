//The source code was downloaded from the GitHub account MiskatHossain8 (https://github.com/MiskatHossain8)

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

matrix[10000][10000];
int main()
{
    int a,b,n,k,deg,ideg,e;
    double total_t, timing_t;
    clock_t start_t, end_t;
    start_t = clock();
    srand(time(0));
    printf("Enter the number of Vertices: ");
    scanf("%d",&n);

    for(a=0; a<n; a++)
    {
        for(b=0; b<n; b++)
        {
            k=rand()%2;
            matrix[a][b]=matrix[b][a]=k;
        }
    }
    for(a=0; a<n; a++ )
    {
        for(b=0; b<n; b++ )
        {
            printf("%d ",matrix[a][b]);
        }
            printf("\n");
    }
        printf("\n");

        deg=0;
    for(a=0; a<n; a++ )
    {
        ideg=0;
        for(b=0; b<n; b++ )
        {
            if(a==b && matrix[a][b]==1)
            {
                deg=matrix[a][b]+deg+1;
                ideg=matrix[a][b]+ideg+1;
            }
            else
            {
                deg=matrix[a][b]+deg;
                ideg=matrix[a][b]+ideg;
            }
        }
    printf("%d Named Vertex has %d Degree\n",a,ideg);
    }
    printf("\nVertices: %d\n",n);
    e=deg/2;
    printf("Edges: %d\n",e);
    printf("Total Degree: %d\n",deg);
    printf("\nIf several people shake hands, the total number of hands shake must be even");
    printf("\nFor this reason the theorem is called handshaking theorem. Total Degree %d are even.",deg);
    printf("\nIt meant Handshaking logic holds.\n\n");

    end_t = clock();
    total_t=(double)(end_t-start_t)/CLOCKS_PER_SEC;
    timing_t=(total_t*1000);
    printf("Total time in Second: %lfs \t in Millisecond: %lfms\n",total_t,timing_t);
}
