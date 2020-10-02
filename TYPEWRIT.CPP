//basic documentations for this project


#include<stdio.h>
#include<stdlib.h>
#include<mp.h>
void main()
{
clrscr();
int nCounter,nCount,y,x,x1,x2,x3,x4,x5,score=0,life=2;
char ch1,ch2,ch3,ch4,ch5,ch6;

setBackground(BLACK);
setcolor(CYAN,BLACK);
for(nCounter=0;nCounter>=0;nCounter++)
{
x1=pickRandom(1,15);
x2=pickRandom(16,31);
x3=pickRandom(22,64);
x4=pickRandom(48,63);
x5=pickRandom(64,79);
x=pickRandom(1,79);


ch1=pickRandom(1,15);
ch2=pickRandom(16,31);
ch3=pickRandom(22,64);
ch4=pickRandom(48,63);
ch5=pickRandom(64,79);
ch6=pickRandom(1,79);

for(y=0;y<24;y++)
{
print("Score:%d\n",score);
print("LIFE:%d",life);

for(nCount=0;nCount<1;nCount++)
{
gotoxy(x5,y);
printf("%c",ch1);
getkeypressed();
score++;
}
for(nCount,nCount<1;nCount++)
{
    gotoxy(x3,y);
printf("%c",ch1);
getkeypressed();
score++;
}
     for(nCount,nCount<1;nCount++)
{
    gotoxy(x1,y);
printf("%c",ch1);
getkeypressed();
score++;
}
 for(nCount,nCount<1;nCount++)
{
    gotoxy(x4,y);
printf("%c",ch1);
getkeypressed();
	 //getting insight of pressed key
score++;
}
 for(nCount,nCount<1;nCount++)
{
    gotoxy(x2,y);
printf("%c",ch1);
getkeypressed();
score++;
}
	 for(nCount,nCount<1;nCount++)
{
    gotoxy(x1,y);
printf("%c",ch1);
getkeypressed();
score++;
}
getch();
}

