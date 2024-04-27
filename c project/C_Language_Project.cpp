#include<stdio.h>
#include<string.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"
#define MAX_LINE_LEN 1024
int Mock();
void Attendence();
void Resume();
void Aptitude();
int fraction();
 
int indexNumber=0;
char stuName[20][30];
int presentAttendance[20]={0};
int absentAttendance[20]={0};
int main()
{
	FILE *fp ;
	char c ;
	char data [20];
	char name [10];
	int n;
	fp=fopen("kdn.c" ,"w");
	while(1)
	{
		c=fgetc(fp) ;
		if(c==EOF)
		{
			break;
			printf("%c" ,c);
			
		}
	}
	int option;
	
	printf("1.Mock \n2.Student Attendence\n3.Aptitute\n4.Resume Builder \n\n Enter choice \n \n");
	scanf("%d" ,&option);
	switch(option)
	{
		case 1 :
			Mock();
			break;
		case 2:
			Attendence();
			break ;
			
				case 3:
					Aptitude();
					break;
					case 4 :
				    Resume();
				      break ;
	}
}
void Attendence()
{
	FILE *fp ;
		fp=fopen("studentattendence.txt" ,"w");
	
	int i;
	 
    char ch;

	char *Array[] = {"1.prachi", "2.Tejaswini", "3.prajawali" ,"4.priti" ,"5.dhanshree","6.shrutika" ,"7.nikita" ,"8.rutuja" ,"9.sakshi" ,"10.priyanka" ,"11.Tabbasum ","12.Chaitali","13.shital","14.vrushali"};
	
	  
    printf("Student name : \n");  
    for(i = 0; i < 14; i++)  
    {  
        printf("%s is present: ",Array[i]);
		fprintf(fp,"%s \n" ,Array[i]); 
		
        
       fflush(stdin);
        scanf("%c",&ch);
        if (ch=='y')
        {
            presentAttendance[i]+=1;
             printf("%d.%s is present: \n",i+1,Array[i]);
		fprintf(fp,"%d. %s is present \n",i+1,Array[i]);
        }
        else if (ch=='n')
        {            
            absentAttendance[i]+=1; 
			 printf("%d.%s is absent: \n",i+1,Array[i]);
		fprintf(fp,"%d. %s is absent \n",i+1,Array[i]);                                                   
        } 
        
        else
        {
            printf("Invalid character Try again\n");
           
        }       
	
		          
    }     
}

int Mock()
{
	FILE *fp;
	fp=fopen("mockk.txt","w");
	char n[30];
	char subject[30];
	printf("Enter a First Name  \n");
	scanf("%s",&n);
	printf("First name :%s \n",n);
	fprintf(fp,"name :%s \n:" ,n);
	
	printf("Enter subject \n");
	scanf("%s" , &subject);
	printf("subject name : %s \n",subject);
	fprintf(fp,"Subject name %s \n" ,subject);
	
	 
	 
	 int count =0;
  char d[20];
	char c[20]="compiler";
		printf("The Expanded source code is passes to the __\n");

	    scanf("%s" ,&d);
		
		fprintf(fp,"The Expanded source code is passes to the=%s \n \n",d);

	
	
	if(strcmp(c,d)==0)
	{
		
		printf("correct Answer \n ");
		fprintf(fp,"correct Answer =%s\n ",d);
		count++;
	}
	else
	{
		printf("wrong answer\n");
		printf("correct answer is compiler \n preprocessor is first stage of compilation process ,preprocessor expand the code and passes to the compiler \n \n");
	}
	
	
	int a;
	printf("Q.2program execution status is successful then return \n");
		fprintf(fp,"Q.2program execution status is successful then return \n");
	scanf("%d",&a);
	if(a== 0)
	{
		printf("correct Answer =%d \n \n" ,a);
		fprintf(fp,"correct Answer =%d \n \n" ,a);
		count++ ;
	}
	else
	{
		printf("wrong answer ",a);
	}
	char answer[20];
	printf("Q.3 True or False \n c language is used for internet programming \n");
	scanf("%s",&answer);
	if(answer=="true");
	{
		printf("right");
	}
	
	printf("Marks = %d \n" ,count);
	fprintf(fp,"Marks = %d \n" ,count);
	
}
void Aptitude()
{
	FILE*fp;
	fp=fopen("ap.txt","w");
	int c=0;
	printf("Q.1 what is 20 percent of 65 ? \n");
	printf("step 1. 20 percent =2 x 10 percent\n");
		printf("step 2.10 percent of 65 is 6.5 \n");
			printf("step 3.6.5 x2 \n \n");
			printf("Answer 13.00 \n \n");
			
			
			printf("try to solve \n \n");
		printf("20 percent of 63 is ? \n");
			char z[20];
	char y[20]="12.6";
		printf("step 1 . 20 percent =2x10 percent \n");
		printf("step 2. 10 percent of 63 =6.3 \n");
		printf("step 3. 6.3 x2");
		printf("Answer 12.6 \n");

	    scanf("%s" ,&z);
		
		fprintf(fp,"Your Answer=",z);

	
	
	if(strcmp(y,z)==0)
	{
		
		printf("correct Answer \n ");
		fprintf(fp,"correct Answer =%s\n ",z);
		c++;
	}
	else
	{
		printf("wrong answer\n");
		printf("Correct Answer is = 12.6 \n");
	
			
			fraction();
			printf("\n\n\n");
			printf("Q.2 the price of petrol  increased by 14.28 percent.\nThe new price is 160 rupees \n find original price\n \n");
		        
			printf("step 1. 14.28 percent is fraction of 7\n \n");
			printf("step 2. increment 7=7+1=8 \n\n");
			printf("step 3. new price is 160 =160/8\n \n");
			printf("step 4. answer =20 \n\n");
			printf("step 5 . Multiply 7 with 20 \n 7 x20 =140 \n\n");
			printf("answer=140 \n\n");
			
			printf("try this\n \n");
			printf("the price of lemon increased by 33.3 percent.\n The original price was 200 \n find new ? \n\n");
			int as ;
			scanf("%d",&as);
			if(as==150)
			{
				printf("correct \n \n",as);
				c++;
			}
			else
			{
				printf("wrong answer \n correct answer is 140 \n reason :33.3 is fraction of 1/3 \n increase 3=4 \n 200/4=50 \n3x50=150\n \n \n");
			}
			printf("Marks= %d\n \n",c);
			
}
}
int fraction()
{
	printf("fraction to remember \n");
	printf("1/1 x100 =100 percent \n ");
	printf("1/2 x100 =50 percent \n ");
	printf("1/3 x100 =33.3 percent \n ");
	printf("1/4 x100 =25 percent \n ");
	printf("1/5 x100 =20 percent \n ");
	printf("1/6 x100 =16.66 percent \n ");
	printf("1/7 x100 =14.28 percent \n ");
	printf("1/8 x100 =12.5 percent \n ");
	printf("1/9 x100 =11.11percent \n ");
	printf("1/10 x100 =10 percent \n ");
	printf("1/11 x100 = 9.09 percent \n ");
}
void Resume()
{
	FILE *fp ;
	fp=fopen("Resume.txt" ,"w");
	char namee [10];
	char p[20];
	char n[20];
	char email[10];
	char l[20];
	char m[20];
	char na[20];
	char ll[20];
	char mm[30];
	char nn[30];
	char pp[30];
	char ppp[30];
	char project[30];
	char Education[30];
	char Educationn[30];
	char Educationnn[30];
	char certification[30];
	char Strength[30];
	char weakness[30];
	char Lgoal[30];
	char Lgoall[30];
	char Lgoalll[30];
	char Sgoal[30];
	char Sgoall[30];
	char Sgoalll[30];
	
	char summary[2000];
	int phone ;
	printf("Enter name : \n");
	gets(p);
	

	gets(na);
	printf("Enter email \n");
	gets(email);
	printf("Strength \n");
	gets(Strength);
	printf("weakness \n");
	gets(weakness);
	printf("certification \n");
	gets(certification);
	printf("Skill Language: \n");
	gets(ll);
	gets(mm);
	gets(nn);
	
	printf("project: \n");
	gets(project);
	gets(pp);
	gets(ppp);
	printf("Education \n");
	gets(Education);
	gets(Educationn);
	gets(Educationnn);
	printf("Long Term Goal: \n");
	gets(Lgoal);
	gets(Lgoall);
	gets(Lgoalll);
	printf("Short Term Goal: \n");
	gets(Sgoal);
	gets(Sgoall);
	gets(Sgoalll);
	
	printf("phone Number : \n");
	
scanf("%d" ,&phone);

printf("summary :\n");
scanf("%s",summary);
printf("Languages Known:");
gets(l);
gets(m);
gets(n);

fprintf(fp,"\t\t\t RESUME \t\t\n \n");
fprintf(fp,"________________________________________________________________________________________________________\n");
fprintf(fp,"Name:%s\t\t\t\t\t\t\tLanguage known: 1.%s\n ",p,l);
fprintf(fp,"email:%s\t\t\t\t\t\t\t\t2.%s   \n ",email,m);
fprintf(fp,"phone:%d\t\t\t\t\t\t\t\t3.%s \n ",phone,n);
fprintf(fp,"________________________________________________________________________________________________________\n");

fprintf(fp,"Strength:%s\t\t\t\t\t\tskill Language: 1.%s\n ",Strength,ll);
fprintf(fp,"weakness:%s\t\t\t\t\t\t\t\t2.%s\n ",weakness,mm);
fprintf(fp,"certification:%s\t\t\t\t\t\t\t3.%s\n ",certification,nn);


fprintf(fp,"________________________________________________________________________________________________________\n");
fprintf(fp,"project: 1.%s\t\t\t\t\t\tEducation1.%s\n ",project,Education);
fprintf(fp,"        2.%s\t\t\t\t\t\t\t 2.%s\n ",pp,Educationn);
fprintf(fp,"        3.%s\t\t\t\t\t\t\t 3.%s\n ",ppp,Educationnn);



fprintf(fp,"________________________________________________________________________________________________________\n");
fprintf(fp,"Long Term goal 1:%s\t\t\t\t\t\t Short Term goal: 1.%s\n ",Lgoal,Sgoal);
fprintf(fp,"     2:%s\t\t\t\t\t\t\t2.%s\n ",Lgoall,Sgoall);
fprintf(fp,"     3:%s\t\t\t\t\t\t\t3.%s\n ",Lgoalll,Sgoalll);
fprintf(fp,"________________________________________________________________________________________________________\n");


fprintf(fp,"summary: %s \t",summary);
	
	
}

