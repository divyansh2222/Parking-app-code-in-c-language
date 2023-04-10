#include<stdio.h>

int nor,nob,noc, nocy,ammount,count=0;
int choice;
int  totnoc,totnocy,totnor,totnob=0;
void menu();
void bus();
void car();
void bycycle();
void riksa();
void totalveh();
void del();
void showdetail();
void conti();
void totalmon();

int main()
{    
 menu();
 showdetail();
 conti();
 
   return 0;
}
void conti()
{ 
    int con;
    
	printf("if you want to continue then press:0 ");
   scanf("%d",&con);
   printf("--------------------------------------\n\n");
 if(con==0)
 {
 	main();
 }
 else 
 {
 	printf("__________________*****************************_____________________\n\n");
   printf("****Thank You!!****");
 }
}
void showdetail()
{    

   
    printf("please select your choice:\n");
	 scanf("%d",&choice);
	 printf("-------------------------------\n\n");
	 switch(choice)
       {
       case 1:
     	bus();
     	break;
       case 2:
    	bycycle();
    	break;
       case 3:
    	riksa();
    	break;
        case 4:
    	car();
    	break;
    	case 5:
    	totalveh();
    	break;
    	case 6:
    	totalmon();	
    	case 7:
    	del();
    	break;		
       }
   
	
}

void del()
{
	nor=0;
	nob=0;
	nocy=0;
	noc=0;
    count=0;
    
	
}
void menu()
{
	printf("Hello Dear!!\n\n");
	printf("No1. Enter bus:\n");
	printf("No2. Enter bycycle:\n");
	printf("No3. Enter riksa:\n");
	printf("No4. Enter car:\n");
	printf("No5. Total vehicle :\n");
	printf("No6. Total money:\n");
	printf("No7. Delete all records:\n");
	printf("--------**************************--------\n");

}
void totalveh()
{
	printf("total no of vehical :%d\n\n",count);
	printf("Total no buses:%d\n",totnob);
	printf("Total no of cars:%d\n",totnoc);
	printf("Total no of riksa:%d\n ",totnor);
	printf("Total no of bycycles:%d\n",totnocy);
}
void totalmon()
{   int totmon;
	totmon=totnob*50+totnoc*30+totnor*10+totnocy*20;
	printf("Total money :%d",totmon);
}
void bus()
{ 
   
    printf("Enter no of bus:");
    scanf("%d",&nob);
	ammount=50*nob;
	count+=nob;
	printf("you will pay :%d\n\n",ammount);
	printf("------------------------------\n");
   totnob+=nob;
	
}
void bycycle()
{   	
   printf("Enter no of bycycle:");
    scanf("%d",&nocy);
    
	ammount=20*nocy;
	printf("you will pay :%d\n\n",ammount);
	printf("------------------------------\n");
    count+=nocy;
    
      totnocy+=nocy;
}
void car()
{   
    
   printf("Enter no of car:");
    scanf("%d",&noc);
	ammount=30*noc;
	printf("you will pay :%d\n\n",ammount);
	printf("------------------------------\n");
	count+=noc;
     totnoc+=noc;
}
void riksa()
{   
       
        printf("Enter no of riksa:");
       scanf("%d",&nor);
		ammount=10*nor;
		printf("you will pay :%d\n\n",ammount);
		printf("------------------------------\n");
		count+=nor;
	      totnor+=nor;
}
