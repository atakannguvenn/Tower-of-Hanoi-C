#include<stdio.h>

int findthetopandchange(int source[], int destination[],int limit)
{
    int z=0,n=-1;
    while(n<6)
    {
        if (destination[n+1]==0)
        {
            n++;
            if(n==5)
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    while(z<6)
    {
        if(source[z]==0)
        {
            z++;
            if(z==6)
            {
                z=z-1;
                destination[n]=source[z];
                source[z]=0;
                break;
            }
            continue;
        }
        destination[n]=source[z];
        source[z]=0;
        break;
    }
}

int tower_of_hanoi(int limit, int A[], int B[], int C[])
{
        if(limit == 1)
        {
                findthetopandchange(A,C,limit);
                return;
        }
        tower_of_hanoi(limit - 1, A, C, B);
        findthetopandchange(A,C,limit);
        tower_of_hanoi(limit - 1, B, A, C);
}

int main()
{
        int A[6]={1,2,3,4,5,6}, B[6]={0,0,0,0,0,0}, C[6]={0,0,0,0,0,0};
        int limit=6;
        printf("-----------Before solving-----------\nTower A= %d %d %d %d %d %d\nTower B= %d %d %d %d %d %d\nTower C= %d %d %d %d %d %d\n",A[0],A[1],A[2],A[3],A[4],A[5],B[0],B[1],B[2],B[3],B[4],B[5],C[0],C[1],C[2],C[3],C[4],C[5]);
        tower_of_hanoi(limit, A, B, C);
        printf("\n-----------After solving-----------\nTower A= %d %d %d %d %d %d\nTower B= %d %d %d %d %d %d\nTower C= %d %d %d %d %d %d\n",A[0],A[1],A[2],A[3],A[4],A[5],B[0],B[1],B[2],B[3],B[4],B[5],C[0],C[1],C[2],C[3],C[4],C[5]);
        system("pause");
        return 0;
}
