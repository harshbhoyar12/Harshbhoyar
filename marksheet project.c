#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>	
	int im,imi,ae,aei,cam,camp,campi,campim,ec,ecp,ecpi,eci,dmd,dmdp,dmdpi,dmdi,ps,rollno,enroll,center,total,t1,t2,t3,t4,t5,t6,t7,t8,t9;
	char username[30],password[10],name[40],mname[10],cat[10],bn[20],clg[80],g,g1,g2,g3,g4,g5,g6,g7,g8,w[10];
	float per;
	
	void input();
	void calculation();
	void show();
	void IM();
	void AE();
	void CAD();
	void CADP();
	void EC();
	void ECP();
	void DMD();
	void DMDP();
	void pro();
	void pf();
int main()
{
	int i;
	char username[30],password[10],name[40],mname[10],cat[10],bn[20],clg[80];
	float per;
	system("color f1");
	a:
	printf("\n enter your username : ");
	scanf("%s",&username);
	printf("\n enter your password : ");
	for(i=0;i<7;++i)
	{
		name[i]=getch();
		printf("*");
	}
	if(strcmp(username,"harshbhoyar")==0)
	{
		if(strcmp(name,"harsh09")==0)
		{
			printf("\nlogin succesfully");
			input();
			calculation();
			 IM();
			 AE();
			 CAD();
			 CADP();
			 EC();
			 ECP();
			 DMD();
			 DMDP();
			 pro();
			 
			show();
		}
		else{
		printf("\nyou have entered wrong password");
	}
	}
	else{
		printf("\nyou have entered wrong username");goto a;
	}
	
}





void input()
{
	printf("\nenter name = ");
	fflush(stdin);
	gets(name);
	printf("\nenter mother's name = ");
	gets(mname);
	printf("enter college name = ");
	scanf("%s",&clg);
	printf("\nenter rollno =");
	scanf("%d",&rollno);
	printf("enter enroll =");
	scanf("%d",&enroll);
	printf("enter center number = ");
	scanf("%d",&center);
	printf("enter category = ");
	scanf("%s",&cat);
	printf("enter branch name = ");
	scanf("%s",&bn);
	printf("enter the marks of subjects");
	printf("\n enter marks between 0-80 for theory ,0-25 for practical & 0-20 for internal");
	b:	printf("\n enter marks in INDUTRIAL ENGINEERING =");
	scanf("%d",&im);
	if(im>=81)
	{
		printf("please enter marks between 0-80");goto b;
	}
	k:	printf("\n enter marks in INDUTRIAL ENGINEERING INTERNAL =");
	scanf("%d",&imi);
	if(imi>=21)
	{
		printf("please enter marks between 0-20");goto k;
	}

	c:	printf("\n enter marsk in ELE-I AUTOMOBILE ENGINEERING  =");
	scanf("%d",&ae);
	if(ae>=81)
	{
		printf("please enter marks between 0-80");goto c;
	}
	l:	printf("\n enter marsk in ELE-I AUTOMOBILE ENGINEERING INTERNAL =");
	scanf("%d",&aei);
	if(aei>=21)
	{
		printf("please enter marks between 0-20");goto l;
	}
	d:	printf("\n enter marks in COMPUTER AIDED DESIGN =");
	scanf("%d",&cam);
	if(cam>=81)
	{
		printf("please enter marks between 0-80");goto d;
	}
	e:	printf("\n enter marks in COMPUTER AIDED DESIGN (PRACTICAL) =");
	scanf("%d",&camp);
	if(camp>=26)
	{
		printf("please enter marks between 0-25");goto e;
	}
	p:	printf("\n enter marks in COMPUTER AIDED DESIGN (PRACTICAL INTERNAL) =");
	scanf("%d",&campim);
	if(campim>=26)
	{
		printf("please enter marks between 0-25");goto p;
	}
	m:	printf("\n enter marks in COMPUTER AIDED DESIGN INTERNAL =");
	scanf("%d",&campi);
	if(campi>=21)
	{
		printf("please enter marks between 0-20");goto m;
	}
	f:  printf("\n enter marks in ENERGY CONVERSATION-II =");
	scanf("%d",&ec);
	if(ec>=81)
	{
		printf("please enter marks between 0-80");goto f;
	}
	g:	printf("\n enter marks in ENERGY CONVERSATION-II (PRACTICAL) =");
	scanf("%d",&ecp);
	if(ecp>=26)
	{
		printf("please enter marks between 0-25");goto g;
	}	
	q:	printf("\n enter marks in ENERGY CONVERSATION-II (PRACTICAL INTERNAL) =");
	scanf("%d",&ecpi);
	if(ecpi>=26)
	{
		printf("please enter marks between 0-25");goto q;
	}	
	n:	printf("\n enter marks in ENERGY CONVERSATION-II INTERNAL =");
	scanf("%d",&eci);
	if(eci>=21)
	{
		printf("please enter marks between 0-20");goto n;
	}	
	h:	printf("\n enter marks in DESIGN OF MECHANICAL DRIVE =");
	scanf("%d",&dmd);
	if(dmd>=81)
	{
		printf("please enter marks between 0-80");goto h;
	}
	i:	printf("\n enter marks in DESIGN OF MECHANICAL DRIVE (PRACTICAL) =");
	scanf("%d",&dmdp);
	if(dmdp>=26)
	{
		printf("please enter marks between 0-25");goto i;
	}
	r:	printf("\n enter marks in DESIGN OF MECHANICAL DRIVE (PRACTICAL INTERNAL) =");
	scanf("%d",&dmdpi);
	if(dmdpi>=26)
	{
		printf("please enter marks between 0-25");goto r;
	}
	o:	printf("\n enter marks in DESIGN OF MECHANICAL DRIVE INTERNAL =");
	scanf("%d",&dmdi);
	if(dmdi>=21)
	{
		printf("please enter marks between 0-20");goto o;
	}
	j:	printf("\n enter marks in PROJECT SEMINAR =");
	scanf("%d",&ps);
	if(ps>=26)
	{
		printf("please enter marks between 0-25");goto j;
	}
}
void calculation()
{

	t1=im+imi;
	t2=ae+aei;
	t3=cam+campi;
	t4=camp+campim;
	t5=ec+eci;
	t6=ecp+ecpi;
	t7=dmd+dmdi;
	t8=dmdp+dmdpi;
	t9=25+ps;
	total=t1+t2+t3+t4+t5+t6+t7+t8+t9;
	per=total/7;
}
void IM()
{
	if(im+imi<=100 && im+imi>90)
	{
		g='A';
	}
	else if(im+imi<=90 && im+imi>80)
	{
		g='B';
	}
	else if(im+imi<=80 && im+imi>60)
	{
		g='C';
	}
	else if(im+imi<=60 && im+imi>40)
	{
		g='D';
	}
	else
	{
		g='F';
	}
}
void AE()
{
		if(ae+aei<=100&&ae+aei>90)
	{
		g1='A';
	}
	else if(ae+aei<=90&&ae+aei>80)
	{
		g1='B';
	}
	else if(ae+aei<=80&&ae+aei>60)
	{
		g1='C';
	}
	else if(ae+aei<=60&&ae+aei>40)
	{
		g1='D';
	}
	else
	{
		g1='F';
	}
}
void CAD()
{
		if(cam+campi<=100&&cam+campi>90)
	{
		g2='A';
	}
	else if(cam+campi<=90&&cam+campi>80)
	{
		g2='B';
	}
	else if(cam+campi<=80&&cam+campi>60)
	{
		g2='C';
	}
	else if(cam+campi<=60&&cam+campi>40)
	{
		g2='D';
	}
	else
	{
		g2='F';
	}
}
void CADP()
{
		if(camp+campim<=100&&camp+campim>90)
	{
		g3='A';
	}
	else if(camp+campim<=90&&camp+campim>80)
	{
		g3='B';
	}
	else if(camp+campim<=80&&camp+campim>60)
	{
		g3='C';
	}
	else if(camp+campim<=60&&camp+campim>40)
	{
		g3='D';
	}
	else
	{
		g3='F';
	}
}
void EC()
{

		if(ec+eci<=100&&ec+eci>90)
	{
		g4='A';
	}
	else if(ec+eci<=90&&ec+eci>80)
	{
		g4='B';
	}
	else if(ec+eci<=80&&ec+eci>60)
	{
		g4='C';
	}
	else if(ec+eci<=60&&ec+eci>40)
	{
		g4='D';
	}
	else
	{
		g4='F';
	}	
}
void ECP()
{
	if(ecp+ecpi<=100&&ecp+ecpi>90)
	{
		g5='A';
	}
	else if(ecp+ecpi<=90&&ecp+ecpi>80)
	{
		g5='B';
	}
	else if(ecp+ecpi<=80&&ecp+ecpi>60)
	{
		g5='C';
	}
	else if(ecp+ecpi<=60&&ecp+ecpi>40)
	{
		g5='D';
	}
	else
	{
		g5='F';
	}	
}
void DMD()
{
	if(dmd+dmdi<=100&&dmd+dmdi>90)
	{
		g6='A';
	}
	else if(dmd+dmdi<=90&&dmd+dmdi>80)
	{
		g6='B';
	}
	else if(dmd+dmdi<=80&&dmd+dmdi>60)
	{
		g6='C';
	}
	else if(dmd+dmdi<=60&&dmd+dmdi>40)
	{
		g6='D';
	}
	else
	{
		g6='F';
	}	
}
void DMDP()
{
	if(dmdp+dmdpi<=100&&dmdp+dmdpi>90)
	{
		g7='A';
	}
	else if(dmdp+dmdpi<=90&&dmdp+dmdpi>80)
	{
		g7='B';
	}
	else if(dmdp+dmdpi<=80&&dmdp+dmdpi>60)
	{
		g7='C';
	}
	else if(dmdp+dmdpi<=60&&dmdp+dmdpi>40)
	{
		g7='D';
	}
	else
	{
		g7='F';
	}		
}
void pro()
{
	if(dmdp+dmdpi<=50&&dmdp+dmdpi>45)
	{
		g8='A';
	}
	else if(dmdp+dmdpi<=45&&dmdp+dmdpi>40)
	{
		g8='B';
	}
	else if(dmdp+dmdpi<=40&&dmdp+dmdpi>30)
	{
		g8='C';
	}
	else if(dmdp+dmdpi<=30&&dmdp+dmdpi>20)
	{
		g8='D';
	}
	else
	{
		g8='F';
	}	
						
}

void show()
{

	printf("\n-----------------------------------------------------------------------------------------------------");
	printf("\nFcaulty of science & technology");
	printf("\n\tSEVENTH SEMESTER EXAMINATION FOR THE DEGREE OF BACHLOR OF ENGINEERING(NEW), WINTER 2021");
	printf("\n\t\t\t[FOURTH YEAR DEGREE COURCE][CREDIT BASED SYSTEM]");
	printf("\nstudent name : %s\t\t\t\t\trollno.  :%d    date  :06/04/2022",name,rollno);
	printf("\nmother's name: %s\t\t\t\t\tcenterno.:%d    P/L   :143/1",mname,center);
	printf("\nenroll.no.   : %d\t\t\t\t\tcategory :%s    medium:ENGLISH",rollno,cat);
	printf("\nbranch name  : %s ",bn);
	printf("\ncollege:%s",clg);
	printf("\n-----------------------------------------------------------------------------------------------------");
	printf("\n|SR|SUBJECT\t\t\t| MARKS & CREDITS SCHEME  | \tMARKS & GARDE AWARDED \t\t    |");
	printf("\n|NO|       \t\t\t|---- MAX ----| MAX | MIN |TU/PU|TI/PI| TOTAL | GRADE |GP|CR|GPV|RMK|");
	printf("\n|  |       \t\t\t|TU/PU | TI/PI|MARKS|MARKS|     |     | MARKS |       |  |  |   |   |");
	printf("\n-----------------------------------------------------------------------------------------------------");
	printf("\n| 1|INDUSTRIAL ENGINEERING\t|  80  |  20  | 100 | 40  |  %d  |  %d |  %d   |  %c   |10|04|40 |   |",im,imi,t1,g);
	printf("\n| 2|AUTOMOBILE ENGINEERING\t|  80  |  20  | 100 | 40  |  %d  |  %d |  %d   |  %c   |09|04|40 |   |",ae,aei,t2,g1);
	printf("\n| 3|COMPUTER AIDED DESIGN\t|  80  |  20  | 100 | 40  |  %d  |  %d |  %d   |  %c   |08|04|36 |   |",cam,campi,t3,g2);
	printf("\n| 4|COMPUTER AIDED DESIGN(PRAC) |  25  |  25  | 050 | 25  |  %d  |  %d |  %d   |  %c   |09|04|09 |   |",camp,campim,t4,g3);
	printf("\n| 5|ENERGY CONVERSATION - II\t|  80  |  20  | 100 | 40  |  %d  |  %d |  %d   |  %c   |10|04|40 |   |",ec,eci,t5,g4);
	printf("\n| 6|ENERGY CONVERSATION-II(PRAC)|  25  |  25  | 050 | 25  |  %d  |  %d |  %d   |  %c   |09|04|09 |   |",ecp,ecpi,t6,g5);
	printf("\n| 7|DESIGN OF MECHANICAL DRIVE  |  80  |  20  | 100 | 40  |  %d  |  %d |  %d   |  %c   |09|04|40 |   |",dmd,dmdi,t7,g6);
	printf("\n| 8|DESIGN OF MECHANICAL D(PRAC)|  25  |  25  | 050 | 25  |  %d  |  %d |  %d   |  %c   |09|04|09 |   |",dmdp,dmdpi,t8,g7);
	printf("\n| 9|PROJECT SEMINAR\t\t|  --  |  50  | 050 | 25  |  --  |  %d |  %d   |  %c   |09|04|09 |   |",ps,t9,g8);
	printf("\n-----------------------------------------------------------------------------------------------------");
	printf("\n");
	printf("\n-----------------------------------------------------------------------------------------------------");
	printf("\n|    INCENTIVE    |  aGPV |  TOTAL |  SGPA  |  OUT OF |  TOTAL MARKS |  OUT OF |  RESULT |  REMARKS |");
	printf("\n|                 |       | CREDITS|        |         |    OBTAINED  |  MARKS  |         |          |");
	printf("\n-----------------------------------------------------------------------------------------------------");
		if(t1>40&&t2>40&&t3>40&&t4>20&&t5>40&&t6>20&&t7>40&&t8>20&&t9>10)
						{
						printf("\n|                 |  --   |   --   |   --   |  10.00  |     %d      |    700  |  pass   |          |",total);
						}
						else{
						printf("\n|                 |  --   |   --   |   --   |  10.00  |     %d      |    700  |  fail    |          |",total);
						}	
	printf("\n-----------------------------------------------------------------------------------------------------");
	if(t1>40&&t2>40&&t3>40&&t4>20&&t5>40&&t6>20&&t7>40&&t8>20&&t9>10)
	{
		printf("\ncongratulation tir mar liya");
	}
	else 
	{
		printf("\nbade hi afsos k sath app fail ho chuke hai");
	}
}

