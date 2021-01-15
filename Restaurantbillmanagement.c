#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

int seat_matrix[7][7];//seat matrix declaration global
void choose();//function for reservation of seat
void seats();//seat matrix

void show_menu();//function to show menu card
void display();//function to dislplay categories
int choose_menu();//function to choose categories
void slow();
void slow1();
int soup[]={70,80,90,60};//price of different soup
int starter[]={15,20,20,25};//price of different starter
int breads[]={10,15,15,18,20};//price of different breads
int vegetables[]={140,150,140};//price of different vegeatbles
int salad[]={80,50,100};//price of different salad
int sweet[]={30,30,40,50,30};//price of different sweet
int baverages[]={15,40,15,20};//price of different baverages
int icecream[]={30,30,30,50};//price of different ice cream
int a;
int n;
int Price=0;//declaring price globally
int cart=0;//declaring cart globally
void slow(){
for(int i=0; i<10000000; i++)
    {
        printf("");
    }
}


void slow1(){
for(int i=0; i<99999900; i++)
    {
        printf("");
    }
}

//Declaring structure for customer information
struct Bill{
    char name[100];
    char address[100];
    int mobno;
    int mode;

}customer;


//Choosing and reservation of seat
void choose() {

    int res_seat_x,res_seat_y;
    printf("\t\t\t\t\t\t\t*********************************\n");
    printf("\t\t\t\t\t\t\tWelcome to Annapurna Restaurant \n");
    printf("\t\t\t\t\t\t\t*********************************\n\n\n");

    for(int i =1;i<=5;i++) {
        for(int j = 1;j<=5;j++) {
            seat_matrix[i][j]==0;
        } }

 start:

    printf("\t“If more of us valued food and cheer and song above hoarded gold, it would be a merrier world.”\n\n");
    printf("\n\n\tWelcome to our Restaurant sir....\n\n");
    printf("\tWhat would you like to do:\n\n");
    printf("\t1:Dine-in\n\t2:Reservation of seat\n\t3:Already Reserved\n\t4:About Us\n");
     int choice_1;
     printf("\tEnter you choice::");
     scanf("%d",&choice_1);
     switch(choice_1) {
     case 1:
         printf("\tFor Dine-in ,Please Choose Your Seat\n");
         seats(); slow1();
         printf("\tCongratulations! Your seat has been booked\n"); slow1(); slow1(); slow1(); slow1();
         show_menu();

         display();
         fflush(stdin);


         break;

     case 2:
        printf("\tFor Reservation Please Choose Your Seats\n");
        seats();
        printf("\tCongratulations! Your seat has been booked\n");
        getchar();
        goto start;
        break;
     case 3:

          printf("\tPlease tell your seat number::");

          scanf("%d %d",&res_seat_x,&res_seat_y);
          printf("\tThank you Sir ,You Are On time\n");
          if(seat_matrix[res_seat_x][res_seat_y]==1)
          {
              printf("\n\tPlease Have Your Seat\n"); slow1(); slow1(); slow1();
              show_menu();

              display();

          }
          else {
            printf("\n\tSorry sir, but there is no seat booked with this number\n");
            printf("\n\tPlease visit us again\n\n\n");
          goto start; }
          break;
     case 4:
         printf("\n\n\t\t\t*********************************************************\n\n");
         printf("\t\t\t\t<<<<<< || A N N A P U R N A || >>>>>>\t\t\t\t\n\n\n");
         printf("\t\t\tDirector::Mr.Rishab Nanda  \t\t  Estd : 1995\n");
         printf("\t\t\tOwner::Mr.Yash jain\n");
         printf("\t\t\tCordinator::Ms.Anandita\n");
         printf("\t\t\tTotal chefs::10\n");
         printf("\t\t\tTotal Servants::20\n");
         printf("\t\t\tManager::Mr.Gaurav Kesarwani\n\n");
         printf("\t\t\t*********************************************************\n\n");
         printf("\t\t""We have been serving mouth-watering delicacies to our customers since 1995.\n\t\tWe always aspire to provide excellent services to our customers.\n\n\n\n");
       choose();
        break;

     default :
        printf("\n\tSir, I think there must have been some misunderstanding. Kindly check the address again.\n");

    }
}
//Seat martrix
void seats() {
int x,y;
   for(int i=0;i<=6;i++) {
       for(int j=0;j<=6;j++) {
           if((i==0 && j==0) || (i==6 && j==0))
           { slow();
             printf("\t =======");}
             else if(i==0 || i==6)
             { slow();
                printf("=======");}
              else  if(j==0){
                    slow();
               printf("\t||  ");}
             else if(j==6){
                    slow();
                printf("\t ||  ");}

               else {
                    slow();
                   printf("\t(%d)",seat_matrix[i][j]);
               }
           }
           printf("\n");
   }
   another_choice:
   printf("\tEnter row and column::");
   scanf("%d %d",&x,&y);
   if(seat_matrix[x][y]==0)
    seat_matrix[x][y]=1;
   else {
    printf("\n\tSorry Sir ,this seat is already booked.\n\tPlease choose some other seat\n ");
   goto another_choice; }

for(int i=0;i<=6;i++) {
       for(int j=0;j<=6;j++) {
           if((i==0 && j==0) ||(i==6 && j==0)) {
                slow();
             printf("\t ======="); }
            else if(i==0 || i==6) {
                slow();
                printf("=======");
            }
            else if((i)==x && (j)==y){
                    slow();
            printf("\t(%d)",seat_matrix[i][j]);}


             else  if(j==0){
                    slow();
               printf("\t||  ");
             }
             else if(j==6){
                slow();
                printf("\t ||  ");
             }

               else {
                   printf("\t(%d)",seat_matrix[i][j]);
               }
           }
           printf("\n");
   }
}
//Menu card
void show_menu(void){
    system("cls");
    printf("\t\t\t\t\t\t\t*********************************\n"); slow();
    printf("\t\t\t\t\t\t\tWelcome to Annapurna Restaurant \n"); slow();
    printf("\t\t\t\t\t\t\t*********************************\n\n\n"); slow();

    printf(" =============================================================Menu Card=============================================================\n"); slow();
    printf("|                                                                                                                                   |\n"); slow();
    printf("|                                                                                                                                   |\n"); slow();
    printf("|                                                                                                                                   |\n"); slow();
    printf("|                    Veg Soup:-                              Starters:-                          Indian Breads:-                    |\n"); slow();
    printf("|                                                                                                                                   |\n"); slow();
    printf("|           |Items:                 Price:   |      |Items:                 Price:   |      |Items:             Price:   |          |\n"); slow();
    printf("|           |1.Tomato Soup          Rs70/unit|      |1.Cocktail Samosa      Rs15/unit|      |1.Chapati          Rs10/unit|          |\n"); slow();
    printf("|           |2.Spinach Soup         Rs80/unit|      |2.Veg Pattice          Rs20/unit|      |2.Paratha          Rs15/unit|          |\n"); slow();
    printf("|           |3.Sweet Corn Soup      Rs90/unit|      |3.Veg Roll             Rs20/unit|      |3.Naan             Rs15/unit|          |\n"); slow();
    printf("|           |4.Hot&Sour Soup        Rs60/unit|      |4.Veg Manchurian       Rs25/unit|      |4.Kulcha           Rs18/unit|          |\n"); slow();
    printf("|                                                                                           |5.Bhatura          Rs20/unit|          |\n"); slow();
    printf("|                                                                                                                                   |\n"); slow();
    printf("|                                                                                                                                   |\n"); slow();
    printf("|                                                                                                                                   |\n"); slow();
    printf("|                     Vegetable:-                               Salad:-                                 Sweet:-                     |\n"); slow();
    printf("|                                                                                                                                   |\n"); slow();
    printf("|           |Items:                 Price:    |     |Items:                 Price:    |     |Items:             Price:   |          |\n"); slow();
    printf("|           |1.Veg Makhani          Rs140/unit|     |1.Green Salad          Rs80/unit |     |1.Gualab Jamun     Rs30/unit|          |\n"); slow();
    printf("|           |2.Paneer Kadai         Rs150/unit|     |2.Alu Chat             Rs50/unit |     |2.Rasgulla         Rs30/unit|          |\n"); slow();
    printf("|           |3.Paneer Mattar        Rs140/unit|     |3.Russian Salad        Rs100/unit|     |3.Gajar Halwa      Rs40/unit|          |\n"); slow();
    printf("|                                                   |4.ShriKhand            Rs50/unit |                                             |\n"); slow();
    printf("|                                                   |5.Jalebi               Rs30/unit |                                             |\n"); slow();
    printf("|                                                                                                                                   |\n"); slow();
    printf("|                                                                                                                                   |\n"); slow();
    printf("|                                                                                                                                   |\n"); slow();
    printf("|                               Beverages:-                                             Ice cream:-                                 |\n"); slow();
    printf("|                                                                                                                                   |\n"); slow();
    printf("|                       |Items:                 Price:   |          |Items:                             Price:   |                  |\n"); slow();
    printf("|                       |1.Cold-drink           Rs15/unit|          |1.Vanilla                          Rs30/unit|                  |\n"); slow();
    printf("|                       |2.Cold-Coffee          Rs40/unit|          |2.Strawberry                       Rs30/unit|                  |\n"); slow();
    printf("|                       |3.Tea                  Rs15/unit|          |3.Chocolate                        Rs30/unit|                  |\n"); slow();
    printf("|                       |4.Hot-Coffee           Rs20/unit|          |4.Vanilla with Chocolate Sauce     Rs50/unit|                  |\n"); slow();
    printf("|                                                                                                                                   |\n"); slow();
    printf("|                                                                                                                                   |\n"); slow();
    printf("|                                                                                                                                   |\n"); slow();
    printf(" ===================================================================================================================================\n"); slow();
}

//Menu selection
int choose_menu(){
    int n;

    printf("\t\t\t*********************************\n");
    printf("\t\t\t Welcome to Annapurna Restaurant \n");
    printf("\t\t\t*********************************\n\n\n");
    printf("---------------------------------------------------------------------------------------\n");
    printf("\n\n\t\t\tCart:-%d\n\n",cart);
    printf("\t\t\tWhat do you want to have sir? \n");
    printf("\t\t\t1.Veg Soup\n\t\t\t2.Starter\n\t\t\t3.Indian Breads.\n\t\t\t4.Vegeatbles\n\t\t\t5.Salad\n\t\t\t6.Sweet\n\t\t\t7.Baverages\n\t\t\t8.Ice Cream\n\t\t\t");
    scanf("%d",&n);
    system("cls");

    return n;
};
int Soup(int,int);
int Starter(int n,int m);
int Breads(int n,int m);
int Vegetables(int n,int m);
int Salad(int n,int m);
int Sweet(int n,int m);
int Baverages(int n,int m);
int Icecream(int n,int m);

void display(){
    int n;
    int a,b,c,d,e,f,g,h;
    int choice[100];
    go:
    switch(choose_menu()){

 case 1:{
    printf("\n\n\t\t*********************************\n");
    printf("\t\t Welcome to Annapurna Restaurant \n");
    printf("\t\t*********************************\n\n\n");

    printf("\n\n\t\t**********************************\n");
    printf("\n\t\t\t  Veg Soup:-\n\n");
    printf("\n\n\t\tItems:\t\t\tPrice:\n");
    printf("\t\t1.Tomato Soup\t\tRs70/unit\n");
    printf("\t\t2.Spinach Soup\t\tRs80/unit\n");
    printf("\t\t3.Sweet Corn Soup\tRs90/unit\n");
    printf("\t\t4.Hot&Sour Soup\t\tRs60/unit\n\n\n");
    printf("\t\t**********************************\n\n\n");
    printf("\t\tWhat you want to choose:-");
    scanf("%d",&a);

    printf("\t\tQuantity :-");
    scanf("%d",&n);
    Soup(a,n);
    Price=soup[a-1]*n+Price;
    printf("\n\t\t\t\tNet Worth=%d",Price);




    cart+=n;
    break;
 }
 case 2:{
    printf("\n\n\t\t*********************************\n");
    printf("\t\t Welcome to Annapurna Restaurant \n");
    printf("\t\t*********************************\n\n\n");
    printf("\t\t**********************************\n\n\n");
    printf("\n\t\t\t  Starter:-\n\n");
    printf("\t\tItems:\t\t\tPrice:\n");
    printf("\t\t1.Cocktail Samosa\tRs15/unit\n");
    printf("\t\t2.Veg Pattice\t\tRs20/unit\n");
    printf("\t\t3.Veg Roll\t\tRs20/unit\n");
    printf("\t\t4.Veg Manchurian\tRs25/unit\n\n\n");
    printf("\t\t**********************************\n\n\n");
    printf("\t\tWhat you want to choose:-");
    scanf("%d",&b);
    printf("\t\tQuantity :-");
    scanf("%d",&n);
    Starter(b,n);
    Price=starter[b-1]*n+Price;
    printf("\n\t\t\t\tNet Worth=%d",Price);


    cart+=n;
    break;

 }
 case 3:{
    printf("\n\n\t\t*********************************\n");
    printf("\t\t Welcome to Annapurna Restaurant \n");
    printf("\t\t*********************************\n\n\n");
    printf("\t\t**********************************\n\n\n");
    printf("\n\t\t\t  Indian Breads:-\n\n");
    printf("\t\tItems:\t\t\tPrice:\n");
    printf("\t\t1.Chapati\t\tRs10/unit\n");
    printf("\t\t2.Paratha\t\tRs15/unit\n");
    printf("\t\t3.Naan\t\t\tRs15/unit\n");
    printf("\t\t4.Kulcha\t\tRs18/unit\n");
    printf("\t\t5.Batura\t\tRs20/unit\n\n\n");
    printf("\t\t**********************************\n\n\n");
    printf("\t\tWhat you want to choose:-");
    scanf("%d",&c);
    printf("\t\tQuantity :-");
    scanf("%d",&n);
    Price=Price+breads[c-1]*n;


    Breads(c,n);
    printf("\n\t\t\t\tNet Worth=%d",Price);
    cart+=n;
    break;

 }
 case 4:{
    printf("\n\n\t\t*********************************\n");
    printf("\t\t Welcome to Annapurna Restaurant \n");
    printf("\t\t*********************************\n\n\n");
    printf("\t\t**********************************\n\n\n");
    printf("\n\t\t\t  Vegetables:-\n\n");
    printf("\t\tItems:\t\t\tPrice:\n");
    printf("\t\t1.Veg Makhani\t\tRs140/unit\n");
    printf("\t\t2.Paneer Kadai\t\tRs150/unit\n");
    printf("\t\t3.Paneer Mattar\t\tRs140/unit\n\n\n");
    printf("\t\t**********************************\n\n\n");
    printf("\t\tWhat you want to choose:-");
    scanf("%d",&d);
    printf("\t\tQuantity :-");
    scanf("%d",&n);
    Price=vegetables[d-1]*n+Price;


    Vegetables(d,n);
    printf("\n\t\t\t\tNet Worth=%d",Price);
    cart+=n;
    break;

 }
 case 5:{
    printf("\n\n\t\t*********************************\n");
    printf("\t\t Welcome to Annapurna Restaurant \n");
    printf("\t\t*********************************\n\n\n");
    printf("\t\t**********************************\n\n\n");
    printf("\n\t\t\t  Salad:-\n\n");
    printf("\t\tItems:\t\t\tPrice:\n");
    printf("\t\t1.Green Salad\t\tRs80/unit\n");
    printf("\t\t2.Alu Chat\t\tRs50/unit\n");
    printf("\t\t3.Russian Salad\t\tRs100/unit\n\n\n");
    printf("\t\t**********************************\n\n\n");
    printf("\t\tWhat you want to choose:-");
    scanf("%d",&e);
    printf("\t\tQuantity :-");
    scanf("%d",&n);
    Price=salad[e-1]*n+Price;
    Salad(e,n);
    printf("\n\t\t\t\tNet Worth=%d",Price);
    cart+=n;
    break;

 }
 case 6:{
    printf("\n\n\t\t*********************************\n");
    printf("\t\t Welcome to Annapurna Restaurant \n");
    printf("\t\t*********************************\n\n\n");
    printf("\t\t**********************************\n\n\n");
    printf("\n\t\t\t  Sweet:-\n\n");
    printf("\t\tItems:\t\t\tPrice:\n");
    printf("\t\t1.Gualab Jamun\t\tRs30/unit\n");
    printf("\t\t2.Rasgulla\t\tRs30/unit\n");
    printf("\t\t3.Gajar Halwa\t\tRs40/unit\n");
    printf("\t\t4.ShriKhand\t\tRs50/unit\n");
    printf("\t\t5.Jalebi\t\tRs30/unit\n\n\n");
    printf("\t\t**********************************\n\n\n");
    printf("\t\tWhat you want to choose:-");
    scanf("%d",&f);
    printf("\t\tQuantity :-");
    scanf("%d",&n);
    Price=sweet[f-1]*n+Price;
    Sweet(f,n);
    printf("\n\t\t\t\tNet Worth=%d",Price);


    cart+=n;
        break;

    }
case 7:{
    printf("\n\n\t\t*********************************\n");
    printf("\t\t Welcome to Annapurna Restaurant \n");
    printf("\t\t*********************************\n\n\n");
    printf("\t\t**********************************\n\n\n");
    printf("\n\t\t\t  Baverages:-\n\n");
    printf("\t\tItems:\t\t\tPrice:\n");
    printf("\t\t1.Cold-drink\t\tRs15/unit\n");
    printf("\t\t2.Cold-Coffee\t\tRs40/unit\n");
    printf("\t\t3.Tea\t\t\tRs15/unit\n");
    printf("\t\t4.Hot-Coffee\t\tRs20/unit\n\n\n");
    printf("\t\t**********************************\n\n\n");
    printf("\t\tWhat you want to choose:-");
    scanf("%d",&g);
    printf("\t\tQuantity :-");
    scanf("%d",&n);
    Price=baverages[g-1]*n+Price;
    Baverages(g,n);
    printf("\n\t\t\t\tNet Worth=%d",Price);


    cart+=n;
    break;

    }

case 8:{
    printf("\n\n\t\t*********************************\n");
    printf("\t\t Welcome to Annapurna Restaurant \n");
    printf("\t\t*********************************\n\n\n");
    printf("\t\t**********************************\n\n\n");
    printf("\n\t\t\t  Ice Cream:-\n\n");
    printf("\t\tItems:\t\t\t\tPrice:\n");
    printf("\t\t1.Vanilla\t\t\tRs30/unit\n");
    printf("\t\t2.Strawberry\t\t\tRs30/unit\n");
    printf("\t\t3.Choclate\t\t\tRs30/unit\n");
    printf("\t\t4.Vanilla with Choclate Sauce\tRs50/unit\n\n\n");
    printf("\t\t**********************************\n\n\n");
    printf("\t\tWhat you want to choose:-");
    scanf("%d",&h);
    printf("\t\tQuantity :-");
    scanf("%d",&n);
    Price=icecream[h-1]*n+Price;
    Icecream(h,n);
    printf("\n\t\t\t\tNet Worth=%d",Price);
    cart+=n;
    break;
}
default:
    {

        printf("\n\t\t************ Wrong input!Please try again *************\n\n\n\n");
        goto go;
    }

}
}

//Declaring different menu categories
int Soup(int n,int m){
    printf("\t\t *************************************** \n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|       Dish:-              Unit:-      |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    switch(n){
case 1:{
    printf("\t\t|       1.Tomato Soup       %d           |\n",m);

    break;
    }
case 2:{
    printf("\t\t|       2.Spinach Soup      %d           |\n",m);

    break;
    }
case 3:{
    printf("\t\t|       3.Sweetcorn Soup    %d           |\n",m);

    break;
    }
case 4:{
    printf("\t\t|       4.Hot&Sour Soup     %d           |\n",m);

    break;
    }
default:
    {
    printf("\t\t|=====Wrong input! Please try again=====|\n");
    }}
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t *************************************** \n");
    return 0;


}
int Starter(int n,int m){
    printf("\t\t *************************************** \n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|       Dish:-              Unit:-      |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    switch(n){
case 1:{
    printf("\t\t|       1.Cocktail Samosa   %d           |\n",m);

    break;
    }
case 2:{
    printf("\t\t|       2.Veg Patties       %d           |\n",m);

    break;
    }
case 3:{
    printf("\t\t|       3.Veg Roll          %d           |\n",m);

    break;
    }
case 4:{
    printf("\t\t|       4.Veg Manchurian    %d           |\n",m);

    break;
    }
default:
    {
    printf("\t\t|=====Wrong input! Please try again=====|\n");
    }}
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t *************************************** \n");
    return 0;


}
int Breads(int n,int m){
    printf("\t\t *************************************** \n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|       Dish:-              Unit:-      |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    switch(n){
case 1:{
    printf("\t\t|       1.Chapati           %d           |\n",m);

    break;
    }
case 2:{
    printf("\t\t|       2.Paratha           %d           |\n",m);

    break;
    }
case 3:{
    printf("\t\t|       3.Naan              %d           |\n",m);

    break;
    }
case 4:{
    printf("\t\t|       4.Kulcha            %d           |\n",m);

    break;
    }
case 5:{
    printf("\t\t|       5.Bhatura           %d           |\n",m);

    break;
    }
default:
    {
    printf("\t\t|=====Wrong input! Please try again=====|\n");
    }}
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t *************************************** \n");
    return 0;


}
int Vegetables(int n,int m){
    printf("\t\t *************************************** \n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|       Dish:-              Unit:-      |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    switch(n){
case 1:{
    printf("\t\t|       1.Veg Makhani       %d           |\n",m);

    break;
    }
case 2:{
    printf("\t\t|       2.Paneer Kadhaai    %d           |\n",m);

    break;
    }
case 3:{
    printf("\t\t|       3.Paneer Mattar     %d           |\n",m);

    break;
    }
default:
    {
    printf("\t\t|=====Wrong input! Please try again=====|\n");
    }}
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t *************************************** \n");
    return 0;


}
int Salad(int n,int m){
    printf("\t\t *************************************** \n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|       Dish:-              Unit:-      |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    switch(n){
case 1:{
    printf("\t\t|       1.Green Salad       %d           |\n",m);

    break;
    }
case 2:{
    printf("\t\t|       2.Alu Chat          %d           |\n",m);

    break;
    }
case 3:{
    printf("\t\t|       3.Russian Salad     %d           |\n",m);

    break;
    }
default:
    {
    printf("\t\t|=====Wrong input! Please try again=====|\n");
    }}
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t *************************************** \n");
    return 0;


}



int Sweet(int n,int m){
    printf("\t\t *************************************** \n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|       Dish:-              Unit:-      |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    switch(n){
case 1:{
    printf("\t\t|       1.Gulaab Jaamun     %d           |\n",m);

    break;
    }
case 2:{
    printf("\t\t|       2.Rasgulla          %d           |\n",m);

    break;
    }
case 3:{
    printf("\t\t|       3.Gaajar Halwa      %d           |\n",m);

    break;
    }
case 4:{
    printf("\t\t|       4.Shri Kand         %d           |\n",m);

    break;
    }
case 5:{
    printf("\t\t|       5.Jalebi            %d           |\n",m);

    break;
    }
default:
    {
    printf("\t\t|=====Wrong input! Please try again=====|\n");
    }}
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t *************************************** \n");
    return 0;


}



int Baverages(int n,int m){
    printf("\t\t *************************************** \n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|       Dish:-              Unit:-      |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    switch(n){
case 1:{
    printf("\t\t|       1.Cold drink        %d           |\n",m);

    break;
    }
case 2:{
    printf("\t\t|       2.Cold Coffee       %d           |\n",m);

    break;
    }
case 3:{
    printf("\t\t|       3.Tea               %d           |\n",m);

    break;
    }
case 4:{
    printf("\t\t|       4.Hot Coffee        %d           |\n",m);

    break;
    }
default:
    {
    printf("\t\t|=====Wrong input! Please try again=====|\n");
    }}
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t|                                       |\n");
    printf("\t\t *************************************** \n");
    return 0;


}
int Icecream(int n,int m){
    printf("\t\t *************************************************** \n");
    printf("\t\t|                                                   |\n");
    printf("\t\t|                                                   |\n");
    printf("\t\t|                                                   |\n");
    printf("\t\t|                                                   |\n");
    printf("\t\t|       Dish:-                          Unit:-      |\n");
    printf("\t\t|                                                   |\n");
    printf("\t\t|                                                   |\n");
    switch(n){
case 1:{
    printf("\t\t|       1.Vanilla                       %d           |\n",m);

    break;
    }
case 2:{
    printf("\t\t|       2.Strawberry                    %d           |\n",m);

    break;
    }
case 3:{
    printf("\t\t|       3.Chocolate                     %d           |\n",m);

    break;
    }
case 4:{
    printf("\t\t|       4.Vanilla with chocolate sauce  %d           |\n",m);

    break;
    }
default:
    {
    printf("\t\t|===========Wrong input! Please try again===========|\n");
    }}
    printf("\t\t|                                                   |\n");
    printf("\t\t|                                                   |\n");
    printf("\t\t|                                                   |\n");
    printf("\t\t|                                                   |\n");
    printf("\t\t|                                                   |\n");
    printf("\t\t *************************************************** \n");
    return 0;


}



//Customer bill generator
int billGenerator(int price,int cart){
    struct Bill customer;


    printf("\n\n\t\t*********************************\n");
    printf("\t\t Welcome to Annapurna Restaurant \n");
    printf("\t\t*********************************\n\n\n");

    printf("\n\t\t\tThank you Sir/Mam for Ordering \n\n\n");
    printf("--------------------------------------------------------------------------------------------\n\n");
    time_t t;
    time(&t);
    char name[100];
    int mobno;
    char mode[100];
    char address[100];
    int gst=8;
    float discount;
    int a;
    printf("\t\tCustomer Details:-\n\n\n");
    printf("\t\tCustomer Name::");
    fflush(stdin);
    scanf("%s",&customer.name);
    fflush(stdin);
    printf("\t\tMobile number::");
    scanf("%d",&customer.mobno);
    printf("\t\tAddress::");
    fflush(stdin);
    scanf("%s",&customer.address);
    fflush(stdin);
    paymo:
    printf("\t\tSelect payment Mode::\n\t\t 1 for Cash\n\t\t 2 for Credit Card\n\t\t 3 for Debit Card\n\t\t");
    scanf("%d",&customer.mode);
    if(customer.mode!=1 && customer.mode!=2 && customer.mode!=3)
    {
        printf("\t\tThe payment mode that you have selected is invalid. Please try again.");
        goto paymo;
    }
    fflush(stdin);
    printf("\t\tDo you have any Coupon Code:-\n");
    printf("\t\t1.for yes\n\t\t0.for no\n\t\t");
    scanf("%d",&a);
    if(a==0){
        goto next;
    }
    else if(a==1){
            printf("\n\t\tYay!You have got 50%% discount\n");
        discount=(float)price*(float)(0.5);
    }
    next:
    printf("\n\n\n");
    printf("\t\t\t *************************************************\n"); slow1();
    printf("\t\t\t                 Customer Receipt\n"); slow1();
    printf("\t\t\t             ************************\n"); slow1();
    printf("\t\t\t       <<<<<< || A N N A P U R N A || >>>>>>\n\n\n\n"); slow1();
    fflush(stdin);
    printf("\t\t\t\tName::%s\n\n",customer.name); slow1();

    fflush(stdin);
    printf("\t\t\t\tMob no::%d\n\n",customer.mobno); slow1();

    fflush(stdin);
    printf("\t\t\t\tAddress::%s\n\n",customer.address); slow1();

    fflush(stdin);
    switch(customer.mode)
    {
    case 1:
        {
            printf("\t\t\t\tMode of Payment::Cash\n\n"); slow1();
            break;
        }
    case 2:
        {
            printf("\t\t\t\tMode of Payment::Credit Card\n\n"); slow1();
            break;
        }
    case 3:
        {
            printf("\t\t\t\tMode of Payment::Debit Card\n\n"); slow1();
            break;
        }
    }
    fflush(stdin);
    printf("\n\t\t\t\tTotal items in Cart:: %d\n",cart); slow1();

    printf("\n\t\t\t\tTotal price:: Rs%d\n",price); slow1();

    printf("\n\t\t\t\tDiscount:: %4.2f\n",discount); slow1();

    printf("\n\t\t\t\tTotal payable price:: Rs%4.2f\n",(float)price-discount); slow1();

    printf("\n\n\t\t\t\tCurrent time::%s\n",ctime(&t)); slow1();

    printf("\n\n\t\t\t\t\tHave a nice Day Sir/Mam\n\n\n\n"); slow1();


printf("\t\t\t *************************************************\n"); slow1();
    printf("\n\n\n--------------------------------------------------------------------------------*********-------------------------------------------------------------------------------------\n\n\n");

}

//Main function
int main(){
    system("color 0e");

    int n;
    start:
    Price=0;
    cart=0;
    choose();

    int a;
    char b;
    char arr[]={'n','y'};
    while(1){
        printf("\n\n\t\tDo you Want to choose again\n\t\t1 for yes \n\t\t0 for no\n\t\t");
        scanf("%d",&a);
        b=arr[a];
        if(b=='y'){
                printf("--------------------------------------------------------------------------------------------\n\n\n");
                system("cls");
            display();
        }
        else if(b=='n'){
            printf("\n\t\t\t\tThank you Sir\n\n\n");
            printf("--------------------------------------------------------------------------------------------\n\n");

            break;
      }
       else{
           printf("Wrong Input");
       }

     }
     system("cls");
     billGenerator(Price,cart);
     printf("\t\t\tDo you want to close Restaurant or continue it\n\t\t\t0.Close \n\t\t\t1.Continue\n\t\t\t");
     scanf("%d",&n);
     if(n==1){
           system("cls");
        goto start;
     }
     else if(n==0){
        return 0;
     }
}
