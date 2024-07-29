#include <stdio.h>
#include <stdlib.h>
int num_of_student=0,i=0,search_roll,total_num_of_student=0,k;
char c;
struct student{
	char name[20];
    int roll;
float result;
    int p1,p2,p3;




}s[20];


int  add()
{

   printf("Enter the number of the student has to be added : ");
   scanf("%d",&num_of_student);



    for(k=0; k<num_of_student; k++)
    { i++;

        printf("Enter the name of the student : ");
        scanf("%s",s[i].name);
           printf("enter the roll number of the student : ");
        scanf("%d",&s[i].roll);

    printf("Enter you marks paper 1 :");
    scanf("%d",&s[i].p1);
    printf("Enter you marks paper 2 :");
    scanf("%d",&s[i].p2);
    printf("Enter you marks paper 3 :");
    scanf("%d",&s[i].p3);
    }

    total_num_of_student+=num_of_student;

    return total_num_of_student;
}
void shows_student_detail()
{
 int i;

    //total_num_of_student+=num_of_student;

     for(i=1; i<=total_num_of_student; i++){


    printf("\n                           :::student %d :::",i);
    printf("\n------------------------------------------------------------------------------------");
    printf("|\nName|\t|Roll   |paper_1 |paper_2|paper_3|mark|result|\t\n");
       s[i].result=(s[i].p1+s[i].p2+s[i].p3)/3;
    printf("%s\t|%d\t|%d\t |%d\t |%d\t |%d   |",s[i].name,s[i].roll,s[i].p1,s[i].p2,s[i].p3,s[i].result*3);




   if(s[i].result>=33)
   {
       printf("Pass|\n");

   }
   else{
         printf("fail  |\n");


   }
   { printf("\n-----------------------------------------------------------------------------------");


   }
}

}
void search(){
int find=0;
    printf("\nDo you want to search so please enter  the roll number : ");
    scanf("%d",&search_roll);
    total_num_of_student=total_num_of_student+num_of_student;
    for(i=1; i<=total_num_of_student; i++)
    {
       if(search_roll==s[i].roll)
    {
        printf(":::student %d :::",i);
    printf("\nstudent name is : %s",s[i].name);
    printf("\nROLL number of the student : %d",s[i].roll);
    printf("\n paper 1= %d \npaper 2= %d \npaper 3=%d ",s[i].p1,s[i].p2,s[i].p3);
    find=1;
    }
    if(find==0) {
    printf("roll number is not found ");
    break;
	}
    }

}
void del()
{
int find=0;

//total_num_of_student=total_num_of_student+num_of_student;


	printf("\nEnter student roll : ");
	scanf("%d",&search_roll);


	  for(i=1; i<=total_num_of_student; i++)
    {
       if(search_roll==s[i].roll)
    {
        printf("\nDo yo want Delete Record: ");
        printf("\n:::student %d :::",i);
    printf("\nstudent name is : %s",s[i].name);
    printf("\nROLL number of the student : %d",s[i].roll);
    printf("\nDo you really wants to delete this record? (y/n) \n Choice: ");

    scanf(" %c",&c);
    //find=1;


	 if(c=='y')
	{
		 printf(":::student %d :::\n",i+1);
    printf(" \nstudent name is : %s",s[i].name);
    printf("\nROLL number of the student : %d",s[i].roll);
    printf("\n paper 1= %d \npaper 2= %d \npaper 3=%d ",s[i].p1,s[i].p2,s[i].p3);
                s[i].name[i]=' ';
                s[i].roll=0;
                s[i].p1=0;
				s[i].p2=0;
				s[i].p3=0;

			 	 printf("\nData has been succesfully deleted\n");
			 	 find=1;
	}
	 else if(c=='n')
    {
    	printf("...OK RECORD NOT DELETE ");
	}

	}
    if(find==0)
    {
    printf("roll number is not found ");
    break;
	}


    }




}
void update()
{
	int seq_no,find=0,j=1;

		printf("\nEnter student roll : ");
	scanf("%d",&search_roll);



    for(i=1; i<=total_num_of_student; i++)
		{
			 if(search_roll==s[i].roll)
			 {
			 	 printf(":::student %d :::",i);
    printf("\nstudent name is : %s",s[i].name);

    printf("\n ROLL number of the student : %d",s[i].roll);
    printf("\n paper 1= %d \npaper 2= %d \npaper 3=%d ",s[i].p1,s[i].p2,s[i].p3);
    printf("\n Do you really wants to update this record? (y/n) ");
    printf(" \nchoice: ");
    scanf(" %c",&c);
    find=1;
        if(c=='n')
    {
    	printf("...OK RECORD NOT  TO BE UPDATE ");
	}
   else	if(c=='y')
	{
		printf("what yo want to change now. So enter their sequential number(0/5) ");

		printf("\n1.Name : ");
		printf("\n2.Roll : ");
		printf("\n3.paper 1 mark : ");
		printf("\n4.paper 2 mark : ");
		printf("\n5.paper 3 mark : ");
		printf("\n0. No change : \n");

		while(j){
		printf("DO  you want to change any thing (0/5) : \n");
				scanf("%d",&seq_no);


		if(seq_no==1)
		{
				     printf("\nEnter the name of the student : ");
        scanf("%s",s[i].name);
        printf("Reecord change succesfully\n");
		}
		else if(seq_no==2)
		{
			  printf("enter the roll number of the student : ");
        scanf("%d",&s[i].roll);
        printf("Reecord change succesfully\n");
		}
		else if(seq_no==3)
		{

	printf("Enter you marks paper 1 :");
    scanf("%d",&s[i].p1);
    printf("Reecord change succesfully\n");
		}
			else if(seq_no==4)
			{
				  printf("Enter you marks paper 2 :");
               scanf("%d",&s[i].p2);
               printf("Reecord change succesfully\n");
			}
				else if(seq_no==5)
				{
					printf("Enter you marks paper 3 :");
                    scanf("%d",&s[i].p3);
                    printf("Reecord change succesfully\n");
				}
				else if(seq_no==0)
				{
					printf("No change in data ");
					j=0;
				}

				}


			 find=1;
}
	}
if(find==0)
    {
    printf("roll number is not found ");
    break;
	}
 }

}
void opertion_menu(){
	printf("\n1.Add student ");
	printf("\n2.Show student ");
	printf("\n3.Delete student ");
	printf("\n4.Search student ");
	printf("\n5.Update student ");
	printf("\n0.Exit ");

}


int main()
{
	int ch,j=1;
	printf("welcome to Management system\n ");

	while(j)
{
opertion_menu();
	printf("\nEnter you choice ");
scanf("%d",&ch);

	switch(ch)
	{


      	case 0:
				{
					printf("Note : AFTER THE EXITING SYSTEM ALL RECORD IS DELETE AUTOMATICALLY...");
					printf("\nDo you want to exit? (y/n) : ");
					printf("\nchoice : ");
					scanf(" %c",&c);
					if(c=='y')
					{
						printf("T H A N K  Y O U!\n FOR USING SYSTEM ");
						j=0;

				}



					break;
				}
			case 1:
				{
				int  s=add();
					 break;
				}
				case 2:
				{
					shows_student_detail();
					break;

				}
				case 3:
					{
						del();
						break;
					}
					case 4:
						{
							search();

							break;

						}
						case 5:
							{
							update();
							break;
							}
							defaulf:
								printf("choice is wrong ");

		}

	}







    return 0;
}
