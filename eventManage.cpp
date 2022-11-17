#include<iostream>
#include<string.h>
#include<windows.h>
#include<conio.h>
using namespace std;

struct event
{
int ecode;
char ename[30];
char ecost[10];
}eve[20]={{1,"WEDDING","9,00,000"},
         {2,"PRODUCT LAUNCH","2,00,000"},
{3,"SEMINAR","6,00,000"},
{4,"CONFERENCE","7,00,000"},
{5,"BUSINESS DINNER","3,00,000"},
{6,"FESTIVITIES","4,00,000"},
{7,"BIRTHDAY PARTY","1,50,000"},
{8,"FAMILY EVENT","2,50,000"},
{9,"AWARD CEREMONY","8,00,000"},
{10,"WEDDING ANNIVERSARY","5,00,000"}};

struct bookevent 
{
int code;
char date[15];
char customername[30];
char contactno[20];
}bookeve[20]={{101,"23 12 017","RAJIV KHANNA","91635289387"},
             {102,"3 2 2017","RAHUL ARORA","9164816544"},
{103,"15 2 2017","DEVANSH PATEL","9183774653"},
{104,"20 2 2017","PRATIBHA BAKSHI","9167388466"},
{105,"1 3 2017","NAZNEEN KHAN","9577336254"},
{106,"10 3 2017","HRITHIK BANSAL","9572638999"},
{107,"17 3 2017","REKHA ANAND","9572837564"},
{108,"29 3 2017","MIHIR CHADHA","9582634754"},
{109,"6 4 2017","TEJ CHATTERJI","95992001853"},
{110,"14 3 2017","BHAGAT SINGH","9502985644"}};

int ecount=10;
void Admin(int ecount,int bcount);
void EDisplay(int ecount);
void ESearch(int ecount,int bcount);
void ESearchECode(int ecount);
void ESearchEName(int ecount);
void EAdd(int ecount);
void EDelete(int ecount,int bcount);
void EDeleteECode(int ecount);
void EDeleteEName(int ecount);
void User(int ecount,int bcount);
void Book(int ecount,int bcount);
void Cancel(int ecount,int bcount);
void Display(int bcount);
void ESearch(int ecount,int bcount);
void SearchCode(int ecount,int bcount);
void SearchDate(int ecount,int bcount);
void SearchNameOfCust(int ecount,int bcount);
void SearchContactNo(int ecount,int bcount);


void EDisplay(int ecount)
{
system("cls");
cout<<ecount<<endl;

cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\n";
cout<<"\t\t\t\t\t ----------------------------------------------------------------------------------------\n\n";
cout<<"\t\t\t\t\t\t    EVENT CODE\t\tEVENT COST\t\tEVENT NAME\n";
cout<<"\t\t\t\t\t ----------------------------------------------------------------------------------------\n\n";
for(int i=0;i<ecount;++i)
  {
cout<<"\t\t\t\t\t\t\t"<<eve[i].ecode<<"\t\t"<<eve[i].ecost<<"\t\t"<<eve[i].ename<<"\n\n\n";Sleep(100);
  }
cout<<"\t\t\t\t\t----------------------------------------------------------------------------------------\n\n";
}

void ESearch(int ecount,int bcount)
{
char ch;
int opt;
do
{
cout<<"\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t\t\t      SEARCHING AN EVENT";
    cout<<"\n\n\t\t\t\t\t\t\t\t\n";
    cout<<"\t\t\t\t\t\t\t\t    **************************************             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";  
    cout<<"\t\t\t\t\t\t\t\t    *                MENU                *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";
    cout<<"\t\t\t\t\t\t\t\t    **************************************             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *   1 . SEARCH BY EVENT CODE         *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *   2 . SEARCH BY NAME OF EVENT      *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *   3 . RETURN TO PREVIOUS  MENU     *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";
    cout<<"\t\t\t\t\t\t\t\t    **************************************             \n";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t    CHOOSE AN OPTION : ";
    cin>>opt;
    switch(opt)
    {
               case 1 : ESearchECode(ecount);
                        break;
                        
               case 2 : ESearchEName(ecount);
                        break;
                        
               case 3 : Admin(ecount,bcount);
                        break;
               default : cout<<"\n\n\n\t\t\t\t\t\t\t\t\tCHOOSE THE CORRECT OPTION ";
               
        }
cout<<"\n\n\n\t\t\t\t\t\t\t\t\tDO YOU WANT TO CONTINUE ? (Y/N)";
        cin>>ch;
        system("cls");
    }while(ch=='y'||ch=='Y');
}

void ESearchECode(int ecount)
{
int ecode,eflag=0,epos;
cout<<"\n\n\t\t\t\t\t\t\t\t\tENTER THE CODE TO BE SEARCHED : ";
    cin>>ecode;
    for(int i=0;i<ecount;++i) 
if(ecode==eve[i].ecode)
                        {
                        eflag=1;
                            epos=i;
                            system("cls");
                            cout<<"\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                                                                 \n";  
        cout<<"\t\t\t\t\t\t\t                    EVENT DETAILS                                \n";
        cout<<"\t\t\t\t\t\t\t                                                                 \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   EVENT CODE       *    "<<eve[i].ecode                                         <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   EVENT NAME       *    "<<eve[i].ename                                      <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   EVENT COST       *    "<<eve[i].ecost                                        <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
                            break;
                        }
                        if(eflag==0)
                        cout<<"EVENT DETAILS NOT FOUND\n";
}

void ESearchEName(int ecount)
{
char ename[30];
int eflag1=0,epos1;
cin.ignore();
cout<<"\n\n\t\t\t\t\t\t\t\t\tENTER THE EVENT NAME TO BE SEARCHED : ";
    cin.getline(ename,30);
    for(int i=0;i<ecount;++i)
if(strcmp(ename,eve[i].ename)==0)
                        {
                        eflag1=1;
                            epos1=i;
                            system("cls");
                            cout<<"\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                                                                 \n";  
        cout<<"\t\t\t\t\t\t\t                    EVENT DETAILS                                \n";
        cout<<"\t\t\t\t\t\t\t                                                                 \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   EVENT CODE       *    "<<eve[i].ecode                                         <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   EVENT NAME       *    "<<eve[i].ename                                      <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   COST             *    "<<eve[i].ecost                                        <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
cout<<"\t\t\t\t\t\t\t ****************************************************             \n";

                            break;
                        }
                        if(eflag1==0)
                        cout<<"EVENT DETAILS NOT FOUND\n";
                    }
                    
void EAdd(int ecount)
{
int n;
cout<<"\n\n\n\n\n\n\t\t\t\t\t          ***********************************************************************************************\n";
cout<<"\t\t\t\t\t                                                                                                         \n";
cout<<"\t\t\t\t\t                                               ADDING AN EVENT                                               \n";
cout<<"\t\t\t\t\t                                                                                                         \n";
cout<<"\t\t\t\t\t                                                                                                         \n";
    
   cout<<"\t\t\t\t\t                         ENTER THE EVENT CODE :  ";
cin>>eve[ecount].ecode;
cout<<endl;
cin.ignore();
        cout<<"\t\t\t\t\t                         ENTER THE EVENT NAME : ";
cin.getline(eve[ecount].ename,30);
cout<<endl;
        cout<<"\t\t\t\t\t                         ENTER COST : ";
cin.getline(eve[ecount].ecost,10);
cout<<endl;
cout<<"\t\t\t\t\t\t          ***********************************************************************************************\n";
        cout<<"\n";
        
    
}


void EDelete(int ecount,int bcount)
{
int opt1;
    char ch1;
    do
    {
    cout<<"\n\n\n\t\t\t\t\t\t\t\t\tDELETING AN EVENT";
    cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
    cout<<"\t\t\t\t\t ************************************************             \n";
    cout<<"\t\t\t\t\t *                                              *             \n";  
    cout<<"\t\t\t\t\t *                     MENU                     *             \n";
    cout<<"\t\t\t\t\t *                                              *             \n";
    cout<<"\t\t\t\t\t ************************************************             \n";
    cout<<"\t\t\t\t\t *                                              *             \n";
    cout<<"\t\t\t\t\t *   1 . SEARCH BY CODE AND DELETE              *             \n";
    cout<<"\t\t\t\t\t *                                              *             \n";
    cout<<"\t\t\t\t\t *   2 . SEARCH BY EVENT NAME AND DELETE        *             \n";
    cout<<"\t\t\t\t\t *                                              *             \n";
    cout<<"\t\t\t\t\t *   3 . RETURN TO PREVIOUS MENU                *             \n";
    cout<<"\t\t\t\t\t *                                              *             \n";
    cout<<"\t\t\t\t\t ************************************************             \n";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t CHOOSE AN OPTION : ";
    cin>>opt1;
    switch(opt1)
    {
               case 1 : EDeleteECode(ecount);
                --ecount;
                       EDisplay(ecount);
                        break;
                        
               case 2 : EDeleteEName(ecount);
                        break;
               
               case 3 : Admin(ecount,bcount);
                break;
                        
               default : cout<<cout<<"\n\n\t\t\t\t\t\t\t\t\t\t CHOOSE THE CORRECT OPTION ";
       }
        cout<<"\n\n\n\t\t\t\t\t\t\t\t\tDO YOU WANT TO CONTINUE ? (Y/N) : ";
        cin>>ch1;
        system("cls");
       }while(ch1=='y'||ch1=='Y');
       system("cls");
}

void EDeleteECode(int ecount)
{
int ecode,eflag2,epos2;
cout<<"ENTER EVENT CODE OF THE EVENT TO BE DELETED : ";
    cin>>ecode;
    system("cls");
    for(int i=0;i<ecount;++i)
    { 
            if(ecode==eve[i].ecode)
            {
                        epos2=i;
                        
                        eflag2=1;
                        for(int j=epos2;j<ecount;++j)
                        eve[j]=eve[j+1];
            }
            system("cls");
    }
    if(eflag2==0)
    cout<<"\t\t\t\t\t\t\t\t\t EVENT DETAILS NOT FOUND\n";
else
cout<<"EVENT DETAILS FOUND AND DELETED\n";
    
system("cls");
}

void EDeleteEName(int ecount)
{
char ename1[30];
int eflag3,epos3;
cin.ignore();
cout<<"ENTER EVENT NAME OF THE EVENT TO BE DELETED : ";
    cin.getline(ename1,30);
    for(int i=0;i<ecount;++i)
    { 
            if(strcmp(ename1,eve[i].ename)==0)
            {
                        epos3=i;
                       // --ecount;
                        eflag3=1;
                        for(int j=epos3;j<ecount;++j)
                        eve[j]=eve[j+1];
            }
    }
    if(eflag3==0)
    cout<<"\t\t\t\t\t\t\t\t\t EVENT DETAILS NOT FOUND\n";
else
cout<<"EVENT DETAILS FOUND AND DELETED\n";
    
}

void Display(int bcount)
{
cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\n";
cout<<"\t\t     ------------------------------------------------------------------------------------------------------------------------------------------\n\n";
cout<<"\t\t\tCODE\t\tEVENT DATE\t\tEVENT COST\t\tCONTACT NUMBER\t\t\tCUSTOMER NAME\t\tEVENT NAME\n";
cout<<"\t\t     ------------------------------------------------------------------------------------------------------------------------------------------\n\n";
for(int i=0;i<bcount;++i)
{
cout<<"\t\t\t"<<bookeve[i].code<<"\t\t"<<bookeve[i].date<<"\t\t"<<eve[i].ecost<<"\t\t"<<bookeve[i].contactno<<"\t\t"<<bookeve[i].customername<<"\t\t"<<eve[i].ename<<"\n\n\n";Sleep(100);
   }
cout<<"\t\t     ------------------------------------------------------------------------------------------------------------------------------------------\n\n";

}
void Search(int ecount,int bcount)
{
int opt2;
    char ch2;
    do
{   system("cls");
cout<<"\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t\t\t      SEARCHING A BOOKED EVENT";
    cout<<"\n\n\t\t\t\t\t\t\t\t\n";
    cout<<"\t\t\t\t\t\t\t\t    **************************************             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";  
    cout<<"\t\t\t\t\t\t\t\t    *                MENU                *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";
    cout<<"\t\t\t\t\t\t\t\t    **************************************             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *   1 . SEARCH BY CODE               *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *   2 . SEARCH BY DATE OF EVENT      *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *   3 . SEARCH BY NAME OF CUSTOMER   *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *   4 . SEARCH BY CONTACT NUMBER     *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *   5 . RETURN TO PREVIOUS MENU      *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";
    cout<<"\t\t\t\t\t\t\t\t    **************************************             \n";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t    CHOOSE AN OPTION : ";
    cin>>opt2;
    switch(opt2)
    {
               case 1 : system("cls");
                        SearchCode(ecount,bcount);
                        break;
                        
               case 2 : system("cls");
                        SearchDate(ecount,bcount);
                        break;
               
               case 3 : SearchNameOfCust(ecount,bcount);
                break;
                        
               case 4 : SearchContactNo(ecount,bcount);
                break;
                
               case 5 : Admin(ecount,bcount);
                break;
                        
               default : cout<<"CHOOSE THE CORRECT OPTION ";
               
        }
cout<<"\n\n\n\t\t\t\t\t\t\t\t\tDO YOU WANT TO CONTINUE ? (Y/N) : ";
        cin>>ch2;
        system("cls");
    }while(ch2=='y'||ch2=='Y');
  
    
}

void SearchCode(int ecount,int bcount)
{
int bcode,bflag=0,bpos;
cout<<"\n\n\t\t\t\t\t\t\t\t\tENTER THE CODE TO BE SEARCHED : ";
    cin>>bcode;
    for(int i=0;i<bcount;++i)
if(bcode==bookeve[i].code)
                        {
                        bflag=1;
                            bpos=i;
                            system("cls");
                            cout<<"\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                                                                 \n";  
        cout<<"\t\t\t\t\t\t\t                    EVENT DETAILS                                \n";
        cout<<"\t\t\t\t\t\t\t                                                                 \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   CODE             *    "<<bookeve[i].code                                         <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   EVENT NAME       *    "<<eve[i].ename                                      <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   DATE             *    "<<bookeve[i].date                                       <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   COST             *    "<<eve[i].ecost                                        <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   CUSTOMER NAME    *    "<<bookeve[i].customername                                        <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   CONTACT NUMBER   *    "<<bookeve[i].contactno                                       <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
                            break;
                        }
                        if(bflag==0)
                        cout<<"EVENT DETAILS NOT FOUND\n";
                        
}

void SearchDate(int ecount,int bcount)
{
char bdate[20];
int bflag1=0,bpos1;
cout<<"ENTER THE DATE TO BE SEARCHED (dd mm yyyy) : ";
cin.ignore();
    cin.getline(bdate,20);
    for(int i=0;i<bcount;++i)
if(strcmp(bdate,bookeve[i].date)==0)
    {
    bflag1=1;
        bpos1=i;
        system("cls");
                            cout<<"\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                                                                 \n";  
        cout<<"\t\t\t\t\t\t\t                    EVENT DETAILS                                \n";
        cout<<"\t\t\t\t\t\t\t                                                                 \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   CODE             *    "<<bookeve[i].code                                         <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   EVENT NAME       *    "<<eve[i].ename                                      <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   DATE             *    "<<bookeve[i].date                                       <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   COST             *    "<<eve[i].ecost                                        <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   CUSTOMER NAME    *    "<<bookeve[i].customername                                        <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   CONTACT NUMBER   *    "<<bookeve[i].contactno                                       <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        break;
    }
                        if(bflag1==0)
                        cout<<"EVENT DETAILS NOT FOUND\n";
                        
                        
}

void SearchNameOfCust(int ecount,int bcount)
{
char bcustomername[30];
int bflag2=0,bpos2;
cout<<"ENTER THE NAME OF CUSTOMER TO BE SEARCHED : ";
cin.ignore();
    cin.getline(bcustomername,30);
    for(int i=0;i<bcount;++i)
if(strcmpi(bcustomername,bookeve[i].customername)==0)
{
                         bflag2=1;
                         bpos2=i;
                         system("cls");
                            cout<<"\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                                                                 \n";  
        cout<<"\t\t\t\t\t\t\t                    EVENT DETAILS                                \n";
        cout<<"\t\t\t\t\t\t\t                                                                 \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t  CODE              *    "<<bookeve[i].code                                         <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t  EVENT NAME        *    "<<eve[i].ename                                      <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   DATE             *    "<<bookeve[i].date                                       <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   COST             *    "<<eve[i].ecost                                        <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   CUSTOMER NAME    *    "<<bookeve[i].customername                                        <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   CONTACT NUMBER   *    "<<bookeve[i].contactno                                       <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
                         break;
    }
    if(bflag2==0)
    cout<<"EVENT DETAILS NOT FOUND\n";

}

void SearchContactNo(int ecount,int bcount)
{
char bcontactno[15];
int bflag3=0,bpos3;
cout<<"\n\n\t\t\t\t\t\t\t\t\t\t ENTER THE CONTACT NUMBER TO BE SEARCHED : ";
cin.ignore();
    cin.getline(bcontactno,15);
    for(int i=0;i<bcount;++i)
if(strcmp(bcontactno,bookeve[i].contactno)==0)
    {
        bflag3=1;
        bpos3=i;
        system("cls");
        cout<<"\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                                                                 \n";  
        cout<<"\t\t\t\t\t\t\t                    EVENT DETAILS                                \n";
        cout<<"\t\t\t\t\t\t\t                                                                 \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   CODE             *    "<<bookeve[i].code                                         <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   EVENT NAME       *    "<<eve[i].ename                                      <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   DATE             *    "<<bookeve[i].date                                       <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   COST             *    "<<eve[i].ecost                                        <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   CUSTOMER NAME    *    "<<bookeve[i].customername                                        <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t   CONTACT NUMBER   *    "<<bookeve[i].contactno                                       <<"\n";
        cout<<"\t\t\t\t\t\t\t                    *                                            \n";
        cout<<"\t\t\t\t\t\t\t ****************************************************             \n";
        break;
    }
    if(bflag3==0)
    cout<<"EVENT DETAILS NOT FOUND\n";
    
}



void Admin(int ecount,int bcount)
{
system("cls");
int opt3;
char ch3;
do
{
cout<<"\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t\t\t    **************************************             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";  
    cout<<"\t\t\t\t\t\t\t\t    *                MENU                *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";
    cout<<"\t\t\t\t\t\t\t\t    **************************************             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *   1 . DISPLAY EVENTS               *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *   2 . SEARCH FOR AN EVENT          *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *   3 . ADD AN EVENT                 *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *   4 . DELETE AN EVENT              *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *   5. DISPLAY BOOKED EVENTS         *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *   6 .SEARCH FOR BOOKED EVENTS      *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *                                    *             \n";
    cout<<"\t\t\t\t\t\t\t\t    *   7 .RETURN TO MAIN MENU           *             \n";
    cout<<"\t\t\t\t\t\t\t\t    **************************************             \n";
cout<<"\n\n\t\t\t\t\t\t\t\t\t\t CHOOSE AN OPTION : ";
cin>>opt3;
switch(opt3)
{
case 1 :
                     EDisplay(ecount);
break;
 
case 2 : system("cls");
                        ESearch(ecount,bcount);
break;
 
case 3 : system("cls");
                        EAdd(ecount);
                        ++ecount;
                        EDisplay(ecount);
break;
 
   case 4 : system("cls");
                       EDelete(ecount,bcount);
                       --ecount;
                       cout<<"COUNT"<<ecount<<endl;
                      getch();
                       EDisplay(ecount);
break;
 
case 5 : system("cls");
Display(bcount);
break;
 
   case 6 : system("cls");
    Search(ecount,bcount);
    break;
   case 7 : system("cls");
            int main();
                     break; 
   default : cout<<"\n\n\t\t\t\t\t\t\t\t\t\t CHOOSE THE CORRECT OPTION \n";
}
Sleep(400);
cout<<"\n\n\n\t\t\t\t\t\t\t\t\tDO YOU WANT TO CONTINUE ? (Y/N) : ";
cin>>ch3;
system("cls");
   }while(ch3=='y'||ch3=='Y');
   system("cls");
}

void User(int ecount,int bcount)
{
int opt4;
char ch4;
do
{
cout<<"\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t  ********************************             \n";
    cout<<"\t\t\t\t\t\t\t\t\t  *                              *             \n";  
    cout<<"\t\t\t\t\t\t\t\t\t  *           MENU               *             \n";
    cout<<"\t\t\t\t\t\t\t\t\t  *                              *             \n";
    cout<<"\t\t\t\t\t\t\t\t\t  ********************************             \n";
    cout<<"\t\t\t\t\t\t\t\t\t  *                              *             \n";
    cout<<"\t\t\t\t\t\t\t\t\t  *   1 . BOOK AN EVENT          *             \n";
    cout<<"\t\t\t\t\t\t\t\t\t  *                              *             \n";
    cout<<"\t\t\t\t\t\t\t\t\t  *   2 . CANCEL AN EVENT        *             \n";
    cout<<"\t\t\t\t\t\t\t\t\t  *                              *             \n";
    cout<<"\t\t\t\t\t\t\t\t\t  *   3. RETURN TO PREVIOUS MENU *             \n";
    cout<<"\t\t\t\t\t\t\t\t\t  *                              *             \n";
    cout<<"\t\t\t\t\t\t\t\t\t  ********************************             \n";
cout<<"\n\n\t\t\t\t\t\t\t\t\t\t CHOOSE AN OPTION : ";
cin>>opt4;
system("cls");
switch(opt4)
{
case 1 : Book(ecount,bcount);
++bcount;
    break;
    
case 2 : Cancel(ecount,bcount);
   --bcount;
    break;
    
case 3 : Admin(ecount,bcount);
break;
default : cout<<"CHOOSE THE CORRECT OPTION \n";
}
cout<<"\n\n\n\t\t\t\t\t\t\t\t\tDO YOU WANT TO CONTINUE ? (Y/N) : ";
cin>>ch4;
system("cls");
}while(ch4=='y'||ch4=='Y');
}
void Book(int ecount,int bcount)
{
cout<<"\n\n\n";
cout<<"\t\t\t\t\t\t\t\t\t\t BOOKING AN EVENT\n\n";
   
cout<<"\t\t\t\t\t ----------------------------------------------------------------------------------------\n\n";
cout<<"\t\t\t\t\t\t    EVENT CODE\t\tEVENT COST\t\tEVENT NAME\n";
cout<<"\t\t\t\t\t ----------------------------------------------------------------------------------------\n\n";
for(int i=0;i<ecount;++i)
{
cout<<"\t\t\t\t\t\t\t"<<eve[i].ecode<<"\t\t"<<eve[i].ecost<<"\t\t"<<eve[i].ename<<"\n\n\n";Sleep(100);
  }
cout<<"\t\t\t\t\t----------------------------------------------------------------------------------------\n\n";

   cout<<"\t\t\t\t\t\t\t\t\t ENTER THE EVENT NAME : ";
   cin.ignore();
   cin.getline(eve[bcount].ename,30);
   for(int i=0;i<ecount;++i)
{
if(strcmpi(eve[ecount].ename,eve[i].ename)==0)
    strcpy(eve[bcount].ecost,eve[i].ecost);
   }
   cout<<"\n\t\t\t\t\t\t\t\t\t ENTER DATE : ";
   cin.getline(bookeve[bcount].date,15);
   cout<<"\n\t\t\t\t\t\t\t\t\t ENTER CUSTOMER'S NAME : ";
   cin.getline(bookeve[bcount].customername,30);
   cout<<"\n\t\t\t\t\t\t\t\t\t ENTER CONTACT NUMBER : ";
   cin.getline(bookeve[bcount].contactno,20);
   cout<<"\n";
   system("cls");
   cout<<"\t\t\t\t\t\t          ***********************************************************************************************\n";
cout<<"\t\t\t\t\t\t                                                                                                         \n";
cout<<"\t\t\t\t\t\t                                              BLUE MOON EVENTS                                           \n";
cout<<"\t\t\t\t\t\t                                    Your Special Moments, Our Milestones                                 `\n";
cout<<"\t\t\t\t\t\t                                                                                                         \n";
cout<<"\t\t\t\t\t\t                                                                                                         \n";
cout<<"\t\t\t\t\t\t                                                                                                         \n";
cout<<"\t\t\t\t\t\t               NAME OF THE EVENT       :      "<<eve[ecount].ename<<"                               \n";
cout<<"\t\t\t\t\t\t                                                                                                         \n";
cout<<"\t\t\t\t\t\t                    NAME OF THE CUSTOMER    :      "<<bookeve[bcount].customername<<"                         \n";
cout<<"\t\t\t\t\t\t                                                                                                         \n";
cout<<"\t\t\t\t\t\t                    DATE OF THE EVENT       :      "<<bookeve[bcount].date<<"                                 \n";
cout<<"\t\t\t\t\t\t                                                                                                         \n";
cout<<"\t\t\t\t\t\t                    TOTAL AMOUNT            :      "<<eve[ecount].ecost<<"                                            \n";
cout<<"\t\t\t\t\t\t                                                                                                         \n";
cout<<"\t\t\t\t\t\t                    CONTACT NUMBER          :      "<<bookeve[bcount].contactno<<"                            \n";
cout<<"\t\t\t\t\t\t                                                                                                         \n";                                                                                             
cout<<"\t\t\t\t\t\t          ***********************************************************************************************\n";
   
} 

void Cancel(int ecount,int bcount)
{
int bcode1,bpos4,bflag4;
char bdate1[15],bcustomername1[30],bcontactno1[15];
cout<<"\n\n\n";
cout<<"\t\t\t\t\t\t\t\t\t\t CANCELLING AN EVENT\n\n";
cout<<"ENTER THE CODE : ";
cin>>bcode1;
cout<<"ENTER DATE : ";
cin.getline(bdate1,15);
cout<<"ENTER CUSTOMER'S NAME : ";
cin.getline(bcustomername1,30);
cout<<"ENTER CONTACT NUMBER : ";
cin.getline(bcontactno1,15);
cout<<"\n"; 
for(int i=0;i<bcount;++i)
    { 
            if((bcode1==bookeve[i].code)&&(strcmp(bdate1,bookeve[i].date)==0)&&(strcmp(bcustomername1,bookeve[i].customername)==0)&&(strcmp(bcontactno1,bookeve[i].contactno)==0))
            {
                        bpos4=i;
                        
                        bflag4=1;
                        for(int j=bpos4;j<bcount;++j)
                        eve[j]=eve[j+1];
            }
    }
    if(bflag4==0)
                        cout<<"EVENT DETAILS NOT FOUND\n";
                        
    }
int main()
{
int opt5,bcount=10,ch6;
char v[12],pass[10]="cmp",ch5;
do
{
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t *******************             \n";
    cout<<"\t\t\t\t\t\t\t\t\t *                 *             \n";  
    cout<<"\t\t\t\t\t\t\t\t\t *       MENU      *             \n";
    cout<<"\t\t\t\t\t\t\t\t\t *                 *             \n";
    cout<<"\t\t\t\t\t\t\t\t\t *******************             \n";
    cout<<"\t\t\t\t\t\t\t\t\t *                 *             \n";
    cout<<"\t\t\t\t\t\t\t\t\t *   1 . ADMIN     *             \n";
    cout<<"\t\t\t\t\t\t\t\t\t *                 *             \n";
    cout<<"\t\t\t\t\t\t\t\t\t *   2 . USER      *             \n";
    cout<<"\t\t\t\t\t\t\t\t\t *                 *             \n";
    cout<<"\t\t\t\t\t\t\t\t\t *******************             \n\n";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t CHOOSE AN OPTION : ";
cin>>opt5;
system("cls");
switch(opt5)
{
case 1 : for(int i=0;i=2;++i) 
{
char v[13],pass[10]="cmp";
                           i=0;
                           cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
                           cout<<"\t\t\t\t\t\t\t\t  ****************************************             \n";
                           cout<<"\t\t\t\t\t\t\t                                                        \n";
                           cout<<"\t\t\t\t\t\t\t\t\t\t ENTER PASSWORD: \n\n\n";
                           cout<<"\t\t\t\t\t\t\t         \t\t     ";
                           v[i]=getch();
                           
                           while(v[i]!=13)
                           {
                            cout<<"*";
                            ++i;
                            v[i]=getch ();
                           }
                           v[i]='\0';
                           if(strcmp(pass,v)==0)
                           {
  cout<<"\n\n\n\t\t\t\t\t\t\t\tACCESS GRANTED!";
  Sleep(370);
  cout<<"\n\n\n\n\t\t\t\t\t\t\t\t";
  Admin(ecount,bcount);
  break;
}
                           else
                          cout<<"\n\n\n\t\t\t\t\t\t\t\tACCESS DENIED!";
                          
    
                            if (i==2)
{
                        cout<<"SYSTEM LOCKED DUE TO INCORRECT PASSWORD ENTRY THRICE.\n";
                        cout<<"DO YOU WANT TO SIGN IN AS USER? (Y/N):";
                        cin>>ch6;
                        if(ch6=='y'||ch6=='Y')
                        {system("cls");
                        User(ecount,bcount);}
                        
                        else
                        exit(0);
                    }
                         }
                         break;
 
case 2 : User(ecount,bcount);
break;
default : cout<<"CHOOSE THE CORRECT OPTION\n";
}
cout<<"\n\n\n\t\t\t\t\t\t\t\t\tDO YOU WANT TO CONTINUE ? (Y/N) : ";
cin>>ch5;
} while(ch5=='y'||ch5=='Y');
system("cls");
return 0;
}

