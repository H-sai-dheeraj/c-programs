#include<stdio.h>

struct  student_details 
{
    int maths;
    int physics;
    int chemistry;
    int computer;
};
 
int main()
{
    int i,j,total;

    printf("Enter the number of students:");
    scanf("%d",&total);

    struct student_details s[total];

    for ( i = 0; i < total; i++)
    {
        printf("Enter the maths mark:");
        scanf("%d",&s[i].maths);
        printf("Enter the chemistry mark:");
        scanf("%d",&s[i].chemistry);
        printf("Enter the physics mark:");
        scanf("%d",&s[i].physics);
        printf("Enter the computer mark:");
        scanf("%d",&s[i].computer);
    }

    for ( i = 0; i < total; i++)
    {
        printf("Maths mark is :%d \n",s[i].maths);
        printf("chemistry mark:%d \n",s[i].chemistry);
        printf("physics mark : \n",s[i].physics);
        printf("computer mark:%d \n",s[i].computer);
    }
    
    
}
