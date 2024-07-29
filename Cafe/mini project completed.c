#include <stdio.h>
#include <stdlib.h>
int bill,plate;

void menu()
{
    int j=1;
    printf("::MENU::\n");
    printf("1. dosa 50/-\n");
    printf("2. samosa 30/-\n");
    printf("3. tea 10/-\n");
    printf("0. Exit\n");
}
int choices()
{
	int i=1,choice,bill_1=0,bill_2=0,bill_3=0,plate_1=0,plate_2=0,plate_3=0,total_plate_1=0,total_plate_2=0,total_plate_3=0;
    while(i)

    {
         menu();
    	 printf("enter you choice ");
    scanf("%d",&choice);

    		switch(choice)
    	{

    {
    		case 1:
    			{



    			printf("you choice is dosa \n");

    			 {
    			 	printf("enter the number of plate ");
    			 	scanf("%d",&plate_1);

    			 	bill_1=bill_1+plate_1*50;

                     total_plate_1+=plate_1;


    			 	printf("you total bill is %d/- \n ",bill_1);

				 }

				 break;


		}



			case 2:
    			{


    			printf("you choice is samosa\n ");


    			 	printf("enter the number of plate ");
    			 	scanf("%d",&plate_3);
    			 	bill_3=plate_3*30+bill_3;
    			 	total_plate_3+=plate_3;



    			 	printf("you total bill is %d/- \n ",bill_3);


				 break;

		}
		   case 0:
		{
			printf("THANK YOU FOR COMING\n");

			printf("\nTotal bill %d/-",bill_1+bill_2+bill_3);
			i=0;

              if(total_plate_1==0 && total_plate_2==0)
             {
             printf("\nsr,no | item    |  Qtr  |  Rate | sub total\n");
            printf("------------------------------------------------------------\n");
             printf("\n1     | tea      |  %d   |  10  |  %d ",total_plate_2,bill_2);
             }
                else if(total_plate_2==0 && total_plate_3==0)
             {
             printf("\nsr,no | item    |  Qtr  |  Rate | sub total\n");
            printf("-------------------------------------------------------------\n");
             printf("\n1  | dosa     |  %d   |  50 |  %d ",total_plate_1,bill_1);
             }
                  else if(total_plate_1==0 && total_plate_3==0)
             {
             printf("\nsr,no | item    |  Qtr  |  Rate | sub total\n");
            printf("---------------------------------------------------------------\n");
             printf("\n1        | samosa     |  %d    |  30 |  %d ",total_plate_3,bill_3);
             }

           else if(total_plate_1==0)

            {
             printf("\nsr,no | item    |  Qtr  |  Rate | sub total\n");
            printf("--------------------------------------\n");
             printf("\n1     | samosa  |  %d   |  30 |  %d ",total_plate_3,bill_3);
             printf("\n2     | tea     |  %d   |  10 |  %d ",total_plate_2,bill_2);}
             else if(total_plate_3==0)
             {
                 printf("\nsr,no | item    |  Qtr  |  Rate | sub total\n");
            printf("--------------------------------------\n");
printf("\n1       | dosa    |  %d   |  50 |  %d ",total_plate_1,bill_1);

             printf("\n2    | tea     |  %d   |  10 |  %d ",total_plate_2,bill_2);
             }
             else if(total_plate_2==0)
             {
                 printf("\nsr,no | item    |  Qtr  |  Rate | sub total\n");
            printf("--------------------------------------\n");
printf("\n1       | dosa    |  %d   |  50 |  %d ",total_plate_1,bill_1);
             printf("\n2   | samosa  |  %d   |  30 |  %d ",total_plate_3,bill_3);

             }
              else
             {
                 printf("\nsr,no | item    |  Qtr  |  Rate | sub total\n");
            printf("--------------------------------------\n");
             printf("\n1     | dosa     |  %d   |  50 |  %d ",total_plate_1,bill_1);
             printf("\n1    | samosa  |  %d   |  30 |  %d ",total_plate_3,bill_3);
             printf("\n2     | tea     |  %d   |  10 |  %d ",total_plate_2,bill_2);
             }


			break;
		}
			case 3:
    			{



    			printf("you choice is tea \n");

    			 {
    			 	printf("enter the number of cup ");
    			 	scanf("%d",&plate_2);
    			 	bill_2=plate_2*10+bill_2;
    			 	total_plate_2+=plate_2;


    			 	printf("you total bill is %d/- \n ",bill_2);

				 }

				 break;

		}
}

	}
	}
	return bill_1+bill_2+bill_3;
}



int pay()
{
	int total,j=1,pay,two_hundred,hundred,fifty,twenty,ten,five,two,one,payment;
	 payment=choices();

while(j)
{

printf("\nplease enter you payment  ");
scanf("%d",&pay);
if(payment==pay)
{
	printf("THANK YOU FOR VISITED");
	j=0;
}
else if(payment>pay)
{

	payment-=pay;

	printf("\n remainig amount %d/-",payment);



}
else if(pay>payment)
{
	pay-=payment;
			two_hundred=(pay/200);
	hundred=(pay%200)/100;
    fifty=(pay%100)/50;
    twenty=((pay%100)%50)/20;
    ten=(((pay%100)%50)%20)/10;
    five=((((pay%100)%50)%20)%10)/5;
    two=(((((pay%100)%50)%20)%10)%5)/2;
    one=(((((pay%100)%50)%20)%10)%5)%2;
    printf("200 note * %d = %d",two_hundred,200*two_hundred);
    printf("\n 100 note * %d = %d",hundred,100*hundred);
    printf("\n 50 note * %d = %d",fifty,50*fifty);
    printf("\n 20 note * %d = %d",twenty,20*twenty);
    printf("\n 10 note * %d = %d",ten,10*ten);
    printf("\n 5 note * %d = %d",five,5*five);
    printf("\n 2 note * %d = %d",two,2*two);
    printf("\n 1 note * %d = %d",one,1*one);
	printf("\nreturn amount is %d/-",pay);

	j=0;
}
}
return pay;
}


int main()
{ int c;

 c=pay();
}





