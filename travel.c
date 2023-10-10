#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    char name[100];
    int n;
    char des[100];
    double tick,dis,net,a;
    char ch;
    printf("Basic Information\n");
    printf("Please Enter Details Accordingly\n");
    printf("Enter 'A' For America Tour\n");
    printf("Enter 'S' For Singapore Tour\n");
    printf("Enter 'J' For Japan Tour\n");
    printf("Enter 'T' For Thailand Tour\n");
    printf("Enter 'E' For Exit\n");
    printf("Enter User Choice :\n");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'A':
        printf("You Have Enter 'A' For America Tour\n");
        printf("America Tour Package ->Rs.50000\n");
        printf("Enter Number Of Passenger :\n");
        scanf("%d",&n);
        if(n ==1)
        {
            printf("Enter Passenger Name :\n");
            scanf("%s",&name);
            printf("Enter Ticket Amount :\n");
            scanf("%lf",&tick);
            if(tick ==50000)
            {
                printf("Enter Destination code :\n");
                scanf("%s",&des);
                a=n*tick;
                if(a <=100000)
                {
                    dis=a*10.0/100.0;
                }
                else if(a >=100001 && a <=150000)
                {
                    dis=a*15.0/100.0;
                }
                else if(a >=150001 && a <=200000)
                {
                    dis=a*20.0/100.0;
                }
                else if(a >200000)
                {
                    dis=a*25.0/100.0;
                }
                net=a-dis;
                printf("Passenger Name\tNo.Of Passenger\tDestination Code\tDiscount\tNet Amount\n");
                printf("%s\t%d\t%s\t%lf\t%lf",name,n,des,dis,net);
            }
            else
            {
                printf("Enter Correct Amount\n");
                printf("Press Enter To Exit And Restart \n");
            }
        }
        else if(n >1)
        {
            printf("Enter Group Head Name :\n");
            scanf("%s",&name);
            printf("Enter Ticket Amount :\n");
            scanf("%lf",&tick);
            if(tick ==50000)
            {
                printf("Enter Destination code :\n");
                scanf("%s",&des);
                a=n*tick;
                if(a <=100000)
                {
                    dis=a*10.0/100.0;
                }
                else if(a >=100001 && a <=150000)
                {
                    dis=a*15.0/100.0;
                }
                else if(a >=150001 && a <=200000)
                {
                    dis=a*20.0/100.0;
                }
                else if(a >200000)
                {
                    dis=a*25.0/100.0;
                }
                net=a-dis;
                printf("Group Head Name\tNo.Of Passenger\tDestination Code\tDiscount\tNet Amount\n");
                printf("%s\t%d\t%s\t%lf\t%lf",name,n,des,dis,net);
            }
            else
            {
                printf("Enter Correct Amount\n");
                printf("Press Enter To Exit And Restart\n");
            }
        }
        break;
    case 'S':
        printf("You Have Enter 'S' For Singapore Tour\n");
        printf("Singapore Travel Package ->20000\n");
        printf("Enter Number Of Passenger :\n");
        scanf("%d",&n);
        if(n ==1)
        {
            printf("Enter Passenger Name :\n");
            scanf("%s",&name);
            printf("Enter Ticket Amount :\n");
            scanf("%lf",&tick);
            if(tick ==20000)
            {
                printf("Enter Destination Code :\n");
                scanf("%s",&des);
                a=n*tick;
                if(a <=100000)
                {
                    dis=a*10.0/100.0;
                }
                else if(a >=100001 && a <=150000)
                {
                    dis=a*15.0/100.0;
                }
                else if(a >=150001 && a <=200000)
                {
                    dis=a*20.0/100.0;
                }
                else if(a >200000)
                {
                    dis=a*25.0/100.0;
                }
                net=a-dis;
                printf("Passenger Name\tNo.Of Passenger\tDestination Code\tDiscount\tNet Amount\n");
                printf("%s\t%d\t%s\t%lf\t%lf",name,n,des,dis,net);
            }

            else{
                    printf("Enter Amount Accordingly\n");
            printf("Press Enter To Exit And Restart\n");
            }
        }
            else if(n >1)
            {
               printf("Enter Group Head Name :\n");
            scanf("%s",&name);
            printf("Enter Ticket Amount :\n");
            scanf("%lf",&tick);
            if(tick ==20000)
            {
                printf("Enter Destination Code :\n");
                scanf("%s",&des);
                a=n*tick;
                if(a <=100000)
                {
                    dis=a*10.0/100.0;
                }
                else if(a >=100001 && a <=150000)
                {
                    dis=a*15.0/100.0;
                }
                else if(a >=150001 && a <=200000)
                {
                    dis=a*20.0/100.0;
                }
                else if(a >200000)
                {
                    dis=a*25.0/100.0;
                }
                net=a-dis;
                printf("Group Head Name\tNo.Of Passenger\tDestination Code\tDiscount\tNet Amount\n");
                printf("%s\t%d\t%s\t%lf\t%lf",name,n,des,dis,net);
            }
            }
            else{
                    printf("Enter Amount Accordingly\n");
            printf("Press Enter To Exit And Restart\n");
            }
            break;
    case 'J':
        printf("You Have Enter 'J' For Japan Tour\n");
        printf("America Tour Package ->Rs.40000\n");
        printf("Enter Number Of Passenger :\n");
        scanf("%d",&n);
        if(n ==1)
        {
            printf("Enter Passenger Name :\n");
            scanf("%s",&name);
            printf("Enter Ticket Amount :\n");
            scanf("%lf",&tick);
            if(tick ==40000)
            {
                printf("Enter Destination code :\n");
                scanf("%s",&des);
                a=n*tick;
                if(a <=100000)
                {
                    dis=a*10.0/100.0;
                }
                else if(a >=100001 && a <=150000)
                {
                    dis=a*15.0/100.0;
                }
                else if(a >=150001 && a <=200000)
                {
                    dis=a*20.0/100.0;
                }
                else if(a >200000)
                {
                    dis=a*25.0/100.0;
                }
                net=a-dis;
                printf("Passenger Name\tNo.Of Passenger\tDestination Code\tDiscount\tNet Amount\n");
                printf("%s\t%d\t%s\t%lf\t%lf",name,n,des,dis,net);
            }
            else
            {
                printf("Enter Correct Amount\n");
                printf("Press Enter To Exit And Restart \n");
            }
        }
        else if(n >1)
        {
            printf("Enter Group Head Name :\n");
            scanf("%s",&name);
            printf("Enter Ticket Amount :\n");
            scanf("%lf",&tick);
            if(tick ==40000)
            {
                printf("Enter Destination code :\n");
                scanf("%s",&des);
                a=n*tick;
                if(a <=100000)
                {
                    dis=a*10.0/100.0;
                }
                else if(a >=100001 && a <=150000)
                {
                    dis=a*15.0/100.0;
                }
                else if(a >=150001 && a <=200000)
                {
                    dis=a*20.0/100.0;
                }
                else if(a >200000)
                {
                    dis=a*25.0/100.0;
                }
                net=a-dis;
                printf("Group Head Name\tNo.Of Passenger\tDestination Code\tDiscount\tNet Amount\n");
                printf("%s\t%d\t%s\t%lf\t%lf",name,n,des,dis,net);
            }
            else
            {
                printf("Enter Correct Amount\n");
                printf("Press Enter To Exit And Restart\n");
            }
        }
        break;
    case 'T':
        printf("You Have Enter 'T' For Thailand Tour\n");
        printf("Thailand Tour Package ->Rs.30000\n");
        printf("Enter Number Of Passenger :\n");
        scanf("%d",&n);
        if(n ==1)
        {
            printf("Enter Passenger Name :\n");
            scanf("%s",&name);
            printf("Enter Ticket Amount :\n");
            scanf("%lf",&tick);
            if(tick ==30000)
            {
                printf("Enter Destination code :\n");
                scanf("%s",&des);
                a=n*tick;
                if(a <=100000)
                {
                    dis=a*10.0/100.0;
                }
                else if(a >=100001 && a <=150000)
                {
                    dis=a*15.0/100.0;
                }
                else if(a >=150001 && a <=200000)
                {
                    dis=a*20.0/100.0;
                }
                else if(a >200000)
                {
                    dis=a*25.0/100.0;
                }
                net=a-dis;
                printf("Passenger Name\tNo.Of Passenger\tDestination Code\tDiscount\tNet Amount\n");
                printf("%s\t%d\t%s\t%lf\t%lf",name,n,des,dis,net);
            }
            else
            {
                printf("Enter Correct Amount\n");
                printf("Press Enter To Exit And Restart \n");
            }
        }
        else if(n >1)
        {
            printf("Enter Group Head Name :\n");
            scanf("%s",&name);
            printf("Enter Ticket Amount :\n");
            scanf("%lf",&tick);
            if(tick ==30000)
            {
                printf("Enter Destination code :\n");
                scanf("%s",&des);
                a=n*tick;
                if(a <=100000)
                {
                    dis=a*10.0/100.0;
                }
                else if(a >=100001 && a <=150000)
                {
                    dis=a*15.0/100.0;
                }
                else if(a >=150001 && a <=200000)
                {
                    dis=a*20.0/100.0;
                }
                else if(a >200000)
                {
                    dis=a*25.0/100.0;
                }
                net=a-dis;
                printf("Group Head Name\tNo.Of Passenger\tDestination Code\tDiscount\tNet Amount\n");
                printf("%s\t%d\t%s\t%lf\t%lf",name,n,des,dis,net);
            }
            else
            {
                printf("Enter Correct Amount\n");
                printf("Press Enter To Exit And Restart\n");
            }
        }
        break;
    case 'E':
        exit(0);
    default:
        printf("Oops!Sorry Invalid Choice\n");
            }
            getch();
            return 0;
}
