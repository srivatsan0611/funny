//Tower of Hanoi

#include <stdio.h>
int hanoi(int,int,char,char,char);
int main()
{
    int n = 0;
    printf("Enter the no of rings: ");
    scanf("%d",&n);
    char rodA = 'A';
    char rodB = 'B';
    char rodC = 'C';
    int num = 0;
    num = hanoi(n,num,rodA,rodB,rodC);
    printf("Total moves %d",num);
    return 0;
}

int hanoi(int n,int num,char rodA, char rodB, char rodC)
{
    if (n ==1)
    {
        printf("Move disk %d from %c to %c\n",n,rodA,rodB);
        num++;
        return num;
    }
    num++;
    num = hanoi(n-1,num,rodA,rodC,rodB);
    
    printf("Move disk %d from %c to %c\n",n,rodA,rodB);
    num = hanoi(n-1,num,rodC,rodB,rodA);

    return num;
}