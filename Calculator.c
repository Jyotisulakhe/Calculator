#include<stdio.h>
#include<stdlib.h>
int main(){
    int option,n1,n2;
    float result;
    char ch;
    while(1)
    {

        printf("select any one operation ");
         printf("to perform the calculation");
          printf(" in c calculator:\n");
         printf("\n1.addition\n2.subtraction");
          printf("\n3.multiplication\n4.division");
           printf("\n5.Exit\n");
            printf("Choose one option:\n");
            scanf("%d",&option);
            switch(option)
            {
            case 1:
                printf("For addition");
                printf("\n enter first number :");
                scanf("%d",&n1);
                printf("\n enter second number :");
                scanf("%d",&n2);
                result=n1+n2;
                printf("Addition =%.0f\n",result);
                break;

            case 2:
                printf("For subtraction");
                printf("\n enter first number :");
                scanf("%d",&n1);
                printf("\n enter second number :");
                scanf("%d",&n2);
                result=n1-n2;
                printf("subtraction =%.0f\n",result);
                break;

                case 3:
                printf("For multiplication");
                printf("\n enter first number :");
                scanf("%d",&n1);
                printf("\n enter second number :");
                scanf("%d",&n2);
                result=n1*n2;
                printf("multiplication =%.0f\n",result);
                break;

                case 4:
                printf("For division");
                printf("\n enter first number :");
                scanf("%d",&n1);
                printf("\n enter second number :");
                scanf("%d",&n2);
                result=n1/n2;
                printf("division =%.0f\n",result);

                break;case 5:
                printf("exited\n");

                exit(0);
                break;
          }
    }

}


