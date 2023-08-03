#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
void show();
void enter();
void input();
void intro();
void instraction();
void q1();
 char option,option2;
    char l;
    int life,ch,l1=0,l2=0,l3=0;
	char name[30];
	int Age,q;
	char place[20];

int main()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY|BACKGROUND_BLUE);
	 show();
	 enter();
	 input();
    intro();
	instraction();
	q1();
	 return 0;
}
void show()
{
    printf("*********************************************************************\n");
	printf("*                                                                   *\n");
	printf("*                  ** WELCOME TO THE KBC GAME **                    *\n");
	printf("*                 -------------------------------                   *\n");
	printf("*                                By                                 *\n");
	printf("*                                                                   *\n");
	printf("*                          NITK MCA SEM 1                           *\n");
	printf("*                                                                   *\n");
	printf("*********************************************************************\n");
}
void enter()
{	
    printf("press 1 to enter your details\n");
    scanf("%d",&ch);   
}
void input()
{
    switch(ch)
    {
        case 1:
    	printf("\nEnter Your Name-");
		gets(name);
    	gets(name);
    	printf("\nEnter Your Age-");
    	scanf("%d",&Age);
    	printf("\nPlace(you belong)-");
    	gets(place);
		gets(place);
    	getch();
    	break;
	    default: 
	    printf("\nyou entered wrong digit and you are not able to continue\n");
		printf("\n*****  For play this game please run once again and select correct option this time Thankuu  ***** ");
		getch();
		exit(0);
    }
}
void intro()
{
	system("cls");
	printf("\n                       *********  WELCOME TO KAUN BANEGA CROREPATI  *********");
	printf("\n\nToday we have a NEW PLAYER,here with us whose name is %s",name);
	printf(". He belongs to the place called  %s.",place);
	printf("\n\nLets start the game KAUN BANEGA CROREPATI\n\n");
	printf("\n Please press enter to continue");
	getch();
}
void instraction()
{
	system("cls");
	printf("\n-----  RULES/INSTRACTIONS  -----\n\n");
	printf("\n*  There are total 10 Multiple choice questions.\n");
	printf("*  The 1st question is worth Rs.1,000\n");
	printf("*  Q 10 is the JACKPOT question worth Rs 7 crore\n\n");
	printf("\n Please press enter to continue");
	getch();
}
void q1()
{
	system("cls");
	
		printf("\nQ1 How many members are elected in the Rajya Sabha by the President of India ?");
		printf("\noptions are\n");
		printf("A  125\t\t\t\tB  12\n");
		printf("C   50\t\t\t\tD  112\n\n");
		printf("\n######  IF YOU WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######\n");
	    scanf("%c",&l);
		if(l=='l'||l=='L')
		{
			if(l1>0 && l2>0 && l3>0)
			{
				printf("\n You have used all lifeline");
				printf("\n Please press enter to continue");
				getch();
			}
			else
			{
		y1:	
		system("cls");
			printf("[1]  50-50\n");
			printf("[2]  AUDIANCE POLL\n");
			printf("[3]  EXPERT ADVICE\n\n");
			printf("Select which lifeline you want to apply\n");
			scanf("%d",&life);
			if(life<=3 && life!=0)
			{
				switch(life)
				{
					case 1:
					if(l1>0)
					{
						printf("\n You have already Selected life line 50-50.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y1;
					}
					    l1++;
						printf("Q1 How many members are elected in the Rajya Sabha by the President of India ?\n");
						printf("Remaining options are\n");
						printf("A       \t\t\tB 12   \n");
		                printf("C 50     \t\t\tD   \n\n");
		                 break;
					case 2:
					if(l2>0)
					{
						printf("\n You have already Selected life line AUDIANCE POLL.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y1;
					}
					    l2++;
					    printf("\n\nAccording to AUDIANCE POLL the BAR GRAPH is given as--\n\n");
					    printf("Option A  ||||||||                           20%%\n");
					    printf("Option B  ||||||||||||||||||||||||           60%%\n");
					    printf("Option C  ||||                               10%%\n");
					    printf("Option D  ||||                               10%%\n");
					   
		                break;
		            case 3:
					if(l3>0)
					{
						printf("\n You have already Selected life line EXPERT ADVICE.\n Select any other");
						getch();
						goto y1;
					}
					    l3++;
					    printf("\n\n^^^^^^^  According to EXPERT ADVICE the answer is definitely OPTION B  ^^^^^^^^\n\n");
						printf("\n Please press enter to continue");
						 getch();
						break;    
				}
			} 
			else
			{
				printf("\n-*-*-  You are selecting wrong option so,please select correct option  -*-*-\n");
				printf("\n Please press enter to continue");
				getch();
				goto y1;
			}
		}
		}
		
		printf("\nselect your option\n");
		fflush(stdin);
		scanf("%c",&option);
		if(option=='B'|| option=='b')
		{
		    system("cls");
			printf("\n******  congratulation you won Rs.1,000  *****\n");
			printf("\n Please press enter to continue");
			getch();
		}
		else
		{
			printf("\n Sorry! Your answer is incorrect.\n GAME OVER");
			printf("\n******  Sorry! you won Rs.0  *****\n");
			printf("\n****** We are very happy to have you with us******\n");
			printf("\n Please press enter to continue");
			getch();
		exit(0);
		}
		system("cls");
		printf("Q2 Which is the third largest country in the world in terms of land area ?\n");
		printf("options are\n");
		printf("A  Canada\t\t\t\tB  Russia\n");
		printf("C  China\t\t\t\t D  India\n\n");
		printf("######  IF YOU WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######\n");
	    fflush(stdin);
		scanf("%c",&l);

		if(l=='l'||l=='L')
		{
			if(l1>0 && l2>0 && l3>0)
			{
				printf("\n You have used all lifeline");
				printf("\n Please press enter to continue");
				getch();
			}
			else
			{
		y2:	
		system("cls");
			printf("[1]  50-50\n");
			printf("[2]  AUDIANCE POLL\n");
			printf("[3]  EXPERT ADVICE\n\n");
			printf("Select which lifeline you want to apply\n");
			scanf("%d",&life);
			if(life<=3 && life!=0)
			{
				switch(life)
				{
					case 1:
					if(l1>0)
					{
						printf("\n You have already Selected life line 50-50.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y2;
					}
					    l1++;
						printf("Q2 Which is the third largest country in the world in terms of land area ?\n");
						printf("Remaining options are\n");
						printf("A            \t\t\t\tB  Russia      \n");
		                printf("C  China     \t\t\t\tD            \n\n");
		                break;
					case 2:
					if(l2>0)
					{
						printf("\n You have already Selected life line AUDIANCE POLL.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y2;
					}
					    l2++;
					    printf("\n\nAccording to AUDIANCE POLL the BAR GRAPH is given as--\n\n");
					    printf("Option A  ||||                               10%%\n");
					    printf("Option B                                      0%%\n");
					    printf("Option C  ||||||||||||||||||||||||||||       70%%\n");
					    printf("Option D  ||||||||                           20%%\n");
					   
		                break;
		            case 3:
					if(l3>0)
					{
						printf("\n You have already Selected life line EXPERT ADVICE.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y2;
					}
					    l3++;
					     printf("\n\n^^^^^^^  According to EXPERT ADVICE the answer is definitely OPTION C  ^^^^^^^^\n\n");
						break;    
				}
			} 
			else
			{
				printf("\n-*-*-  You are selecting wrong option so,please select correct option  -*-*-\n");
				printf("\n Please press enter to continue");
				getch();
				goto y2;
			}
		}
		}
		printf("\nselect your option\n");
		fflush(stdin);
		scanf("%c",&option2);

		if(option2=='C'||option2=='c')
		{
		    system("cls");
			printf("\n******  congratulation you won Rs.5,000  *****\n");
			printf("\n Please press enter to continue");
			getch();
		}
		else
		{
			printf("\n Sorry! Your answer is incorrect.\n GAME OVER");
			printf("\n******  you won Rs.1,000  *****\n");
			printf("\n****** We are very happy to have you with us******\n");
			printf("\n Please press enter to continue");
			getch();
		exit(0);
		}
		system("cls");
		printf("\nQ3. The inaugral edition of modern olympics game is held in which year ?");
		printf("\noptions are\n");
		printf("A  1896          \t\t\t\tB  1887      \n");
		printf("C  1905          \t\t\t\tD  1908      \n\n");
		printf("\n######  IF YOU WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######\n");
	    fflush(stdin);
		scanf("%c",&l);
		if(l=='l'||l=='L')
		{
			if(l1>0 && l2>0 && l3>0)
			{
				printf("\n You have used all lifeline");
				printf("\n Please press enter to continue");
				getch();
			}
			else
			{
		y3:	
		system("cls");
			printf("[1]  50-50\n");
			printf("[2]  AUDIANCE POLL\n");
			printf("[3]  EXPERT ADVICE\n\n");
			printf("Select which lifeline you want to apply\n");
			scanf("%d",&life);
			if(life<=3 && life!=0)
			{
				switch(life)
				{
					case 1:
					if(l1>0)
					{
						printf("\n You have already Selected life line 50-50.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y3;
					}
					    l1++;
						printf("Q3. The inaugral edition of modern olympics game is held in which year ?\n");
						printf("Remaining options are\n");
						printf("A  1896\t\t\tB    \n");
		                printf("C  1905\t\t\tD     \n\n");
		                 break;
					case 2:
					if(l2>0)
					{
						printf("\n You have already Selected life line AUDIANCE POLL.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y3;
					}
					    l2++;
					    printf("\n\nAccording to AUDIANCE POLL the BAR GRAPH is given as--\n\n");
					    printf("Option A  ||||||||||||||||||||||||||         80%%\n");
					    printf("Option B  ||||                               5%%\n");
					    printf("Option C  ||||                               5%%\n");
					    printf("Option D  ||||||||                           10%%\n");
					   
		                break;
		            case 3:
					if(l3>0)
					{
						printf("\n You have already Selected life line EXPERT ADVICE.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y3;
					}
					    l3++;
					    printf("\n\n^^^^^^^  According to EXPERT ADVICE the answer is definitely OPTION A  ^^^^^^^^\n\n");
					    printf("\n Please press enter to continue");
						getch();
						break;    
				}
			} 
			else
			{
				printf("\n-*-*-  You are selecting wrong option so,please select correct option  -*-*-\n");
				printf("\n Please press enter to continue");
				getch();
				goto y3;
			}
		}
		}
		printf("\nselect your option\n");
		
		fflush(stdin);
		scanf("%c",&option);
		if(option=='A'||option=='a')
		{
		    system("cls");
			printf("\n******  congratulation you won Rs.50,000  *****\n");
			printf("\n Please press enter to continue");
			getch();
		}
		else
		{
			printf("\n Sorry! Your answer is incorrect.\n GAME OVER");
			printf("\n******   you won Rs.5,000  *****\n");
			printf("\n****** We are very happy to have you with us******\n");
			printf("\n Please press enter to continue");
			getch();
		exit(0);
		}
		system("cls");
		printf("\nQ4. Which of the following is the first movie of indian cinema in which sound can be heard ?");
		printf("\noptions are\n");
		printf("A  Raja Harishchandra    \t\t\t\tB  Mughal-E-Azzam\n");
		printf("C  Roti, Kapda Aur Makaan\t\t\t\tD  Alam Ara\n\n");
		printf("\n######  IF YOU WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######\n");
	    fflush(stdin);
		scanf("%c",&l);
		if(l=='l'||l=='L')
		{
			if(l1>0 && l2>0 && l3>0)
			{
				printf("\n You have used all lifeline");
				printf("\n Please press enter to continue");
				getch();
			}
			else
			{
		y4:	
		system("cls");
			printf("[1]  50-50\n");
			printf("[2]  AUDIANCE POLL\n");
			printf("[3]  EXPERT ADVICE\n\n");
			printf("Select which lifeline you want to apply\n");
			scanf("%d",&life);
			if(life<=3 && life!=0)
			{
				switch(life)
				{
					case 1:
					if(l1>0)
					{
						printf("\n You have already Selected life line 50-50.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y4;
					}
					    l1++;
						printf("Q4. Which of the following is the first movie of indian cinema in which sound can be heard ?\n");
						printf("Remaining options are\n");
						printf("A       \t\t\tB  Mughal-E-Azam\n");
		                printf("C       \t\t\tD  Alam Ara\n\n");
		                break;
					case 2:
					if(l2>0)
					{
						printf("\n You have already Selected life line AUDIANCE POLL.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y4;
					}
					    l2++;
					    printf("\n\nAccording to AUDIANCE POLL the BAR GRAPH is given as--\n\n");
					    printf("Option A  ||||                               10%%\n");
					    printf("Option B  ||||                               10%%\n");
					    printf("Option C  ||||                               10%%\n");
					    printf("Option D  ||||||||||||||||||||||||           70%%\n");
					   
		                break;
		            case 3:
					if(l3>0)
					{
						printf("\n You have already Selected life line EXPERT ADVICE.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y4;
					}
					    l3++;
					    printf("\n\n^^^^^^^  According to EXPERT ADVICE the answer is definitely OPTION D  ^^^^^^^^\n\n");
						printf("\n Please press enter to continue");
						getch();
						break;    
				}
			} 
			else
			{
				printf("\n-*-*-  You are selecting wrong option so,please select correct option  -*-*-\n");
				printf("\n Please press enter to continue");
				getch();
				goto y4;
			}
		}
		}
		printf("\nselect your option\n");
		
		fflush(stdin);
		scanf("%c",&option);
		if(option=='D'||option=='d')
		{
		    system("cls");
			printf("\n******  congratulation you won Rs.1,00,000  *****\n");
			printf("\n Please press enter to continue");
			getch();
		}
		else
		{
			printf("\n Sorry! Your answer is incorrect.\n GAME OVER");
			printf("\n******   you won Rs.50,000  *****\n");
			printf("\n****** We are very happy to have you with us******\n");
			printf("\n Please press enter to continue");
			getch();
		exit(0);
		}
		system("cls");
		printf("\nQ5. Who won the Nobel Prize for literature 2022 ?");
		printf("\noptions are\n");
		printf("A  Annie Ernaux\t\t\t\tB  Pierre Trividi C\n");
		printf("C  Audrey Diwan\t\t\t\tD  Didier Eribon\n\n");
		printf("\n######  IF YOU WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######\n");
	    fflush(stdin);
		scanf("%c",&l);
		if(l=='L'||l=='l')
		{
			if(l1>0 && l2>0 && l3>0)
			{
				printf("\n You have used all lifeline");
				printf("\n Please press enter to continue");
				getch();
			}
			else
			{
		y5:	
		system("cls");
			printf("[1]  50-50\n");
			printf("[2]  AUDIANCE POLL\n");
			printf("[3]  EXPERT ADVICE\n\n");
			printf("Select which lifeline you want to apply\n");
			scanf("%d",&life);
			if(life<=3 && life!=0)
			{
				switch(life)
				{
					case 1:
					if(l1>0)
					{
						printf("\n You have already Selected life line 50-50.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y5;
					}
					    l1++;
						printf("Q5. Who won the Nobel Prize for literature 2022 ?\n");
						printf("Remaining options are\n");
						printf("A  Annie Ernaux\t\t\tB    \n");
		                printf("C              \t\t\tD  Didier Eribon\n\n");
		                break;
					case 2:
					if(l2>0)
					{
						printf("\n You have already Selected life line AUDIANCE POLL.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y5;
					}
					    l2++;
					    printf("\n\nAccording to AUDIANCE POLL the BAR GRAPH is given as--\n\n");
					    printf("Option A  ||||||||||||||||||||||||           60%%\n");
					    printf("Option B  ||||                               10%%\n");
					    printf("Option C  ||||                               10%%\n");
					    printf("Option D  ||||||||                           20%%\n");
					   
		                break;
		            case 3:
					if(l3>0)
					{
						printf("\n You have already Selected life line EXPERT ADVICE.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y5;
					}
					    l3++;
					    printf("\n\n^^^^^^^  According to EXPERT ADVICE the answer is definitely OPTION A  ^^^^^^^^\n\n");
						
						break;    
				}
			} 
			else
			{
				printf("\n-*-*-  You are selecting wrong option so,please select correct option  -*-*-\n");
				printf("\n Please press enter to continue");
				getch();
				goto y5;
			}
		}
		}
		printf("\nselect your option\n");
		
		fflush(stdin);
		scanf("%c",&option);
		if(option=='A'||option=='a')
		{
		    system("cls");
			printf("\n******  congratulation you won Rs.5,00,000  *****\n");
			printf("\n Please press enter to continue");
			getch();
		}
		else
		{
			printf("\n Sorry! Your answer is incorrect.\n GAME OVER");
			printf("\n******   you won Rs.1,00,000  *****\n");
			printf("\n****** We are very happy to have you with us******\n");
			printf("\n Please press enter to continue");
			getch();
		exit(0);
		}
		system("cls");
		printf("\nQ6. From which of the following country the Indian constitution has borrowed the principles of equality, Liberty and Fraternity ?");
		printf("\noptions are\n");
		printf("A  Germany       \t\t\t\tB  France\n");
		printf("C  South Africa  \t\t\t\tD  USA   \n\n");
		printf("\n######  IF YOU WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######\n");
	    fflush(stdin);
		scanf("%c",&l);
		if(l=='L'||l=='l')
		{
			if(l1>0 && l2>0 && l3>0)
			{
				printf("\n You have used all lifeline");
				printf("\n Please press enter to continue");
				getch();
			}
			else
			{
		y6:	
		system("cls");
			printf("[1]  50-50\n");
			printf("[2]  AUDIANCE POLL\n");
			printf("[3]  EXPERT ADVICE\n\n");
			printf("Select which lifeline you want to apply\n");
			scanf("%d",&life);
			if(life<=3 && life!=0)
			{
				switch(life)
				{
					case 1:
					if(l1>0)
					{
						printf("\n You have already Selected life line 50-50.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y6;
					}
					    l1++;
						printf("Q6. From which of the following country the Indian constitution has borrowed the principles of equality, Liberty and Fraternity ?\n");
						printf("Remaining options are\n");
						printf("A       \t\t\tB  France   \n");
		                printf("C       \t\t\tD  USA    \n\n");
		               break;
					case 2:
					if(l2>0)
					{
						printf("\n You have already Selected life line AUDIANCE POLL.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y6;
					}
					    l2++;
					    printf("\n\nAccording to AUDIANCE POLL the BAR GRAPH is given as--\n\n");
					    printf("Option A  ||||||||                           20%%\n");
					    printf("Option B  |||||||||||||||||||||||            50%%\n");
					    printf("Option C  ||||                               10%%\n");
					    printf("Option D  ||||||||                           20%%\n");
					    
		                break;
		            case 3:
					if(l3>0)
					{
						printf("\n You have already Selected life line EXPERT ADVICE.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y6;
					}
					    l3++;
					    printf("\n\n^^^^^^^  According to EXPERT ADVICE the answer is definitely OPTION B  ^^^^^^^^\n\n");
						
						break;    
				}
			} 
			else
			{
				printf("\n-*-*-  You are selecting wrong option so,please select correct option  -*-*-\n");
				printf("\n Please press enter to continue");
				getch();
				goto y6;
			}
		}
		}
		printf("\nselect your option\n");
	
		fflush(stdin);
		scanf("%c",&option);
		if(option=='B'||option=='b')
		{
		    system("cls");
			printf("\n******  congratulation you won Rs.25,00,000  *****\n");
			printf("\n Please press enter to continue");
			getch();
		}
		else
		{
			printf("\n Sorry! Your answer is incorrect.\n GAME OVER");
			printf("\n******   you won Rs.5,00,000  *****\n");
			printf("\n****** We are very happy to have you with us******\n");
			printf("\n Please press enter to continue");
			getch();
		exit(0);
		}
		system("cls");
		printf("\nQ7. During World War 2, the axis powers consist of which of the following countries? ");
		printf("\noptions are\n");
		printf("A  USA, USSR, UK    \t\t\t\tB  Germany, Italy, Japan\n");
		printf("C  UK, France, Spain\t\t\t\tD  UK, Germany, USA\n\n");
		printf("\n######  IF YOU WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######\n");
	    fflush(stdin);
		scanf("%c",&l);
		if(l=='L'||l=='l')
		{
			if(l1>0 && l2>0 && l3>0)
			{
				printf("\n You have used all lifeline");
				getch();
			}
			else
			{
		y7:	
		system("cls");
			printf("[1]  50-50\n");
			printf("[2]  AUDIANCE POLL\n");
			printf("[3]  EXPERT ADVICE\n\n");
			printf("Select which lifeline you want to apply\n");
			scanf("%d",&life);
			if(life<=3 && life!=0)
			{
				switch(life)
				{
					case 1:
					if(l1>0)
					{
						printf("\n You have already Selected life line 50-50.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y7;
					}
					    l1++;
						printf("Q7. During World War 2, the axis powers consist of which of the following countries?\n");
						printf("Remaining options are\n");
						printf("A       \t\t\tB  Germany,Italy,Japan  \n");
		                printf("C       \t\t\tD  UK, Germany, USA   \n\n");
		                break;
					case 2:
					if(l2>0)
					{
						printf("\n You have already Selected life line AUDIANCE POLL.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y7;
					}
					    l2++;
					    printf("\n\nAccording to AUDIANCE POLL the BAR GRAPH is given as--\n\n");
					    printf("Option A  ||||||||                           20%%\n");
					    printf("Option B  ||||||||||||||||||||||||           60%%\n");
					    printf("Option C  ||||                               10%%\n");
					    printf("Option D  ||||                               10%%\n");
					    
		                break;
		            case 3:
					if(l3>0)
					{
						printf("\n You have already Selected life line EXPERT ADVICE.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y7;
					}
					    l3++;
					    printf("\n\n^^^^^^^  According to EXPERT ADVICE the answer is definitely OPTION B  ^^^^^^^^\n\n");
						printf("\n Please press enter to continue");
						getch();
						break;    
				}
			} 
			else
			{
				printf("\n-*-*-  You are selecting wrong option so,please select correct option  -*-*-\n");
				printf("\n Please press enter to continue");
				getch();
				goto y7;
			}
		}
		}
		printf("\nselect your option\n");
		
		fflush(stdin);
		scanf("%c",&option);
		if(option=='B'||option=='b')
		{
		    system("cls");
			printf("\n******  congratulation you won Rs.50,00,000  *****\n");
			printf("\n Please press enter to continue");
			getch();
		}
		else
		{
			printf("\n Sorry! Your answer is incorrect.\n GAME OVER");
			printf("\n******   you won Rs.25,00,000  *****\n");
			printf("\n****** We are very happy to have you with us******\n");
			printf("\n Please press enter to continue");
			getch();
		exit(0);
		}
		system("cls");
		printf("\nQ8. Who was First Chinese traveller to India ?");
		printf("\noptions are\n");
		printf("A  Fa-Hien \t\t\t\tB  Ho-Chin-Mi\n");
		printf("C  Sung-Jon\t\t\t\tD  Chun-Li Twang\n\n");
		printf("\n######  IF YOU WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######\n");
	    fflush(stdin);
		scanf("%c",&l);
		if(l=='L'||l=='l')
		{
			if(l1>0 && l2>0 && l3>0)
			{
				printf("\n You have used all lifeline");
				printf("\n Please press enter to continue");
				getch();
			}
			else
			{
		y8:	
		system("cls");
			printf("[1]  50-50\n");
			printf("[2]  AUDIANCE POLL\n");
			printf("[3]  EXPERT ADVICE\n\n");
			printf("Select which lifeline you want to apply\n");
			scanf("%d",&life);
			if(life<=3 && life!=0)
			{
				switch(life)
				{
					case 1:
					if(l1>0)
					{
						printf("\n You have already Selected life line 50-50.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y8;
					}
					    l1++;
						printf("Q8. Who was First Chinese traveller to India ?\n");
						printf("Remaining options are\n");
						printf("A  Fa-Hien\t\t\tB    \n");
		                printf("C         \t\t\tD  Chun-li-Twang\n\n");
		                break;
					case 2:
					if(l2>0)
					{
						printf("\n You have already Selected life line AUDIANCE POLL.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y8;
					}
					    l2++;
					    printf("\n\nAccording to AUDIANCE POLL the BAR GRAPH is given as--\n\n");
					    printf("Option A  ||||||||||||||||||||||||           85%%\n");
					    printf("Option B  ||||                               05%%\n");
					    printf("Option C  ||||                               05%%\n");
					    printf("Option D  ||||                               05%%\n");
					    
		                break;
		            case 3:
					if(l3>0)
					{
						printf("\n You have already Selected life line EXPERT ADVICE.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y8;
					}
					    l3++;
					    printf("\n\n^^^^^^^  According to EXPERT ADVICE the answer is definitely OPTION A  ^^^^^^^^\n\n");
						printf("\n Please press enter to continue");
						getch();
						break;    
				}
			} 
			else
			{
				printf("\n-*-*-  You are selecting wrong option so,please select correct option  -*-*-\n");
				printf("\n Please press enter to continue");
				getch();
				goto y8;
			}
		}
		}
		printf("\nselect your option\n");
		
		fflush(stdin);
		scanf("%c",&option);
		if(option=='A'||option=='a')
		{
		    system("cls");
			printf("\n******  congratulation you won Rs.75,00,000  *****\n");
			printf("\n Please press enter to continue");
			getch();
		}
		else
		{
			printf("\n Sorry! Your answer is incorrect.\n GAME OVER");
			printf("\n******   you won Rs.50,00,000  *****\n");
			printf("\n****** We are very happy to have you with us******\n");
			printf("\n Please press enter to continue");
			getch();
		exit(0);
		}
		system("cls");
		printf("\nQ9. When was the East India Company Formed ?");
		printf("\noptions are\n");
		printf("A  1584          \t\t\t\tB  1596\n");
		printf("C  1597          \t\t\t\tD  1600\n\n");
		printf("\n######  IF YOU WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######\n");
	    fflush(stdin);
		scanf("%c",&l);
		if(l=='L'||l=='l')
		{
			if(l1>0 && l2>0 && l3>0)
			{
				printf("\n You have used all lifeline");
				getch();
			}
			else
			{
		y9:	
		system("cls");
			printf("[1]  50-50\n");
			printf("[2]  AUDIANCE POLL\n");
			printf("[3]  EXPERT ADVICE\n\n");
			printf("Select which lifeline you want to apply\n");
			scanf("%d",&life);
			if(life<=3 && life!=0)
			{
				switch(life)
				{
					case 1:
					if(l1>0)
					{
						printf("\n You have already Selected life line 50-50.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y9;
					}
					    l1++;
						printf("Q9. When was the East India Company Formed ?\n");
						printf("Remaining options are\n");
						printf("A  1584 \t\t\tB    \n");
		                printf("C       \t\t\tD  1600\n\n");
		                break;
					case 2:
					if(l2>0)
					{
						printf("\n You have already Selected life line AUDIANCE POLL.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y9;
					}
					    l2++;
					    printf("\n\nAccording to AUDIANCE POLL the BAR GRAPH is given as--\n\n");
					    printf("Option A  ||||||||                           20%%\n");
					    printf("Option B  ||||                               10%%\n");
					    printf("Option C  ||||                               10%%\n");
					    printf("Option D  ||||||||||||||||||||||||           60%%\n");
					    
		                break;
		            case 3:
					if(l3>0)
					{
						printf("\n You have already Selected life line EXPERT ADVICE.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y9;
					}
					    l3++;
					    printf("\n\n^^^^^^^  According to EXPERT ADVICE the answer is definitely OPTION D  ^^^^^^^^\n\n");
						printf("\n Please press enter to continue");
						getch();
						break;    
				}
			} 
			else
			{
				printf("\n-*-*-  You are selecting wrong option so,please select correct option  -*-*-\n");
				printf("\n Please press enter to continue");
				getch();
				goto y9;
			}
		}
		}
		printf("\nselect your option\n");
		fflush(stdin);
		scanf("%c",&option);
		if(option=='D'||option=='d')
		{
		    system("cls");
			printf("\n******  congratulation you won Rs.1,00,00,000  *****\n");
			printf("\n Please press enter to continue");
			getch();
		}
		else
		{
			printf("\n Sorry! Your answer is incorrect.\n GAME OVER");
			printf("\n******   you won Rs.75,00,000  *****\n");
			printf("\n****** We are very happy to have you with us******\n");
			printf("\n Please press enter to continue");
			getch();
		exit(0);
		}
		system("cls");
		printf("\nQ10. What was the original name of the Great Indian Emperor Samrat Vikramaditya ?");
		printf("\noptions are\n");
		printf("A  Samudragupta I\t\t\t\tB  Chandragupta I\n");
		printf("C  Chandragupta II\t\t\t\tD  Samudragupta II\n\n");
		printf("\n######  IF YOU WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######\n");
	    fflush(stdin);
		scanf("%c",&l);
		if(l=='L'||l=='l')
		{
			if(l1>0 && l2>0 && l3>0)
			{
				printf("\n You have used all lifeline");
				printf("\n Please press enter to continue");
				getch();
			}
			else
			{
		y10:	
		system("cls");
			printf("[1]  50-50\n");
			printf("[2]  AUDIANCE POLL\n");
			printf("[3]  EXPERT ADVICE\n\n");
			printf("Select which lifeline you want to apply\n");
			scanf("%d",&life);
			if(life<=3 && life!=0)
			{
				switch(life)
				{
					case 1:
					if(l1>0)
					{
						printf("\n You have already Selected life line 50-50.\n Select any other");

						printf("\n Please press enter to continue");
						getch();
						goto y10;
					}
					    l1++;
						printf("\nQ10. What was the original name of the Great Indian Emperor Samrat Vikramaditya ?");
		                printf("\noptions are\n");
		                printf("A                 \t\t\t\tB  Chandragupta I\n");
		                printf("C  Chandragupta II\t\t\t\tD                \n\n");
						 break;
					case 2:
					if(l2>0)
					{
						printf("\n You have already Selected life line AUDIANCE POLL.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y10;
					}
					    l2++;
					    printf("\n\nAccording to AUDIANCE POLL the BAR GRAPH is given as--\n\n");
					    printf("Option A  ||||||||||                         20%%\n");
					    printf("Option B  ||||||||||                         20%%\n");
					    printf("Option C  ||||||||||||||||||||               40%%\n");
					    printf("Option D  ||||||||||                         20%%\n");
					    //printf("######  IF YOU {** AGAIN **} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######\n");
		              
		                break;
		            case 3:
					if(l3>0)
					{
						printf("\n You have already Selected life line EXPERT ADVICE.\n Select any other");
						printf("\n Please press enter to continue");
						getch();
						goto y10;
					}
					    l3++;
					    printf("\n\n^^^^^^^  According to EXPERT ADVICE the answer is definitely OPTION C  ^^^^^^^^\n\n");
						printf("\n Please press enter to continue");
						getch();
						break;    
				}
			} 
			else
			{
				printf("\n-*-*-  You are selecting wrong option so,please select correct option  -*-*-\n");
				printf("\n Please press enter to continue");
				getch();
				goto y10;
			}
		}
		}
		printf("\nselect your option\n");
		fflush(stdin);
		scanf("%c",&option);
		if(option=='C'||option=='c')
		{
		    system("cls");
			printf("\n******  congratulation you won Rs.7,00,00,000   JACKPOT! *****\n");
			printf("\n******  Congratulations you have completed the game.We are very happy to have you with us. *****");
			printf("\n Please press enter to continue");
			getch();
			exit(0);
		}
		else
		{
			printf("\n Sorry! Your answer is incorrect.\n GAME OVER");
			printf("\n******   you won Rs.1,00,00,000  *****\n");
			printf("\n****** We are very happy to have you with us******\n");
			printf("\n Please press enter to continue");
			getch();
		exit(0);
		}
		
}

