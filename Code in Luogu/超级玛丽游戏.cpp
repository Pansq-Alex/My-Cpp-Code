#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h> 
using namespace std;
int n,m,x,y,flag,score,cx,cy,l,bo,xx,yy,t;
int b[5000][5000],keng[5000];
char ch; 
void color(int a)
{
    if(a==0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
    if(a==1) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE);
    if(a==2) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
    if(a==3) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);
    if(a==4) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
    if(a==5) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
    if(a==6) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
    if(a==7) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN);
    if(a==8) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
    if(a==9) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|BACKGROUND_INTENSITY|BACKGROUND_RED);
    if(a==10) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_BLUE|BACKGROUND_INTENSITY|BACKGROUND_BLUE);
}
void lev1_1csh()
{
    cx=n;cy=1;
    b[10][14]=4;
    b[13][9]=2;
    b[13][12]=1;
    b[13][13]=2;
    b[13][14]=1;
    b[13][15]=2;
    b[13][16]=1;
    b[13][21]=9;
    b[14][21]=5; 
    b[15][21]=5; 
    b[12][25]=9; 
    b[13][25]=5;
    b[14][25]=5; 
    b[15][25]=5; 
    b[11][29]=9;
    b[12][29]=5; 
    b[13][29]=5;
    b[14][29]=5; 
    b[15][29]=5; 
    b[11][34]=9;
    b[12][34]=5; 
    b[13][34]=5;
    b[14][34]=5; 
    b[15][34]=5; 
    b[12][37]=2;
    b[13][45]=1;
    b[13][46]=2;
    b[13][47]=1;
    b[10][48]=1;
    b[10][49]=1;
    b[10][50]=1;
    b[10][51]=1;
    b[10][52]=1;
    b[10][53]=1;
    b[10][54]=1;
    b[10][55]=1;
    b[10][56]=1;
    b[10][59]=1;
    b[10][60]=1;
    b[10][61]=1;
    b[10][61]=2;
    b[13][61]=2;
    b[13][67]=1;
    b[13][68]=1;
    b[13][73]=2;
    b[10][75]=2;
    b[13][75]=2;
    b[13][77]=2;
    b[13][83]=1;
    b[10][86]=1;
    b[10][87]=1;
    b[10][88]=1;
    b[10][92]=1;
    b[10][93]=2;
    b[10][94]=2;
    b[10][95]=1;
    b[13][93]=1;
    b[13][94]=1;
    b[15][98]=10;
    b[14][99]=10;
    b[15][99]=10;
    b[13][100]=10;
    b[14][100]=10;
    b[15][100]=10; 
    b[12][101]=10; 
    b[13][101]=10;
    b[14][101]=10;
    b[15][101]=10; 
    b[12][104]=10;
    b[13][104]=10;
    b[14][104]=10;
    b[15][104]=10;
    b[13][105]=10;
    b[14][105]=10;
    b[15][105]=10;
    b[14][106]=10;
    b[15][106]=10;
    b[15][107]=10;
    b[15][112]=10;
    b[14][113]=10;
    b[15][113]=10;
    b[13][114]=10;
    b[14][114]=10;
    b[15][114]=10;
    b[12][115]=10;
    b[13][115]=10;
    b[14][115]=10;
    b[15][115]=10;
    b[12][116]=10;
    b[13][116]=10;
    b[14][116]=10;
    b[15][116]=10;
    b[12][119]=10;
    b[13][119]=10;
    b[14][119]=10;
    b[15][119]=10;
    b[13][120]=10;
    b[14][120]=10;
    b[15][120]=10;
    b[14][121]=10;
    b[15][121]=10;
    b[15][122]=10;
    b[14][127]=9;
    b[15][127]=5; 
    b[13][131]=1;
    b[13][132]=1;
    b[13][133]=2;
    b[13][134]=1;
    b[15][142]=5;
    b[14][142]=9;
    b[15][143]=10;
    b[14][144]=10;
    b[15][144]=10;
    b[13][145]=10;
    b[14][145]=10;
    b[15][145]=10;
    b[12][146]=10;
    b[13][146]=10;
    b[14][146]=10;
    b[15][146]=10;
    b[11][147]=10;
    b[12][147]=10;
    b[13][147]=10;
    b[14][147]=10;
    b[15][147]=10;
    b[10][148]=10;
    b[11][148]=10;
    b[12][148]=10;
    b[13][148]=10;
    b[14][148]=10;
    b[15][148]=10;
    b[9][149]=10;
    b[10][149]=10;
    b[11][149]=10;
    b[12][149]=10;
    b[13][149]=10;
    b[14][149]=10;
    b[15][149]=10;
    b[8][150]=10;
    b[9][150]=10;
    b[10][150]=10;
    b[11][150]=10;
    b[12][150]=10;
    b[13][150]=10;
    b[14][150]=10;
    b[15][150]=10;
    b[8][151]=10;
    b[9][151]=10;
    b[10][151]=10;
    b[11][151]=10;
    b[12][151]=10;
    b[13][151]=10;
    b[14][151]=10;
    b[15][151]=10;
    b[15][160]=10;
    b[6][159]=12;
    b[5][160]=13;
    b[6][160]=11;
    b[7][160]=11;
    b[8][160]=11;
    b[9][160]=11;
    b[10][160]=11;
    b[11][160]=11;
    b[12][160]=11;
    b[13][160]=11;
    b[14][160]=11;
    b[13][164]=14; 
    b[14][164]=14; 
    b[15][164]=14; 
    b[13][165]=14; 
    b[14][165]=14; 
    b[15][165]=14; 
    b[13][166]=14; 
    b[13][167]=14; 
    b[14][167]=14; 
    b[15][167]=14;
    b[13][168]=14; 
    b[14][168]=14; 
    b[15][168]=14;  
    b[11][165]=15;  
    b[12][165]=14; 
    b[11][166]=15; 
    b[12][166]=14; 
    b[11][167]=15; 
    b[12][167]=14; 
    keng[40]=1;
    keng[41]=1;
    keng[55]=1;
    keng[56]=1;
    keng[57]=1;
    keng[117]=1;
    keng[118]=1; 
}
void print()
{
    for(int i=2;i<=n;i++)
    {
          for(int j=1;j<=m;j++)if(i==cx&&j+l==cy){color(2);printf("♂");}else if(b[i][j+l]==1){color(7);printf("■");}else if(b[i][j+l]==2){color(5);printf("？");}else if(b[i][j+l]==3){color(5);printf("●");b[i][j+l]=0;}else if(b[i][j+l]==5){color(2);printf("■");} else if(b[i][j+l]==6){color(2);printf("◣");} else if(b[i][j+l]==7){color(2);printf("◢");} else if(b[i][j+l]==8){color(2);printf("▌");} else if(b[i][j+l]==9){color(2);printf("▄");} else if(b[i][j+l]==10){color(7);printf("█");} else if(b[i][j+l]==11){color(1);printf("‖");}else if(b[i][j+l]==12){color(1);printf("㊣");} else if(b[i][j+l]==13){color(2);printf("◎");} else if(b[i][j+l]==14){color(7);printf("▓");} else if(b[i][j+l]==15){color(7);printf("▲");}else putchar(32),putchar(32);
          putchar(10); 
    }
    for(int i=1;i<=2;i++)
    {
          for(int j=1;j<=m;j++)if(i+n==cx&&j+l==cy){color(2);printf("♂");}else if(!keng[j+l]){color(7);printf("■");}else putchar(32),putchar(32);
          putchar(10); 
    }
}
void down(int i)
{
    system("cls");
    b[i+6][159]=b[i+5][159];
    b[i+5][159]=0;
    for(int i=2;i<=n;i++)
    {
          for(int j=1;j<=m;j++)if(i==cx&&j+l==cy){color(2);printf("♂");}else if(b[i][j+l]==1){color(7);printf("■");}else if(b[i][j+l]==2){color(5);printf("？");}else if(b[i][j+l]==3){color(5);printf("●");b[i][j+l]=0;}else if(b[i][j+l]==5){color(2);printf("■");} else if(b[i][j+l]==6){color(2);printf("◣");} else if(b[i][j+l]==7){color(2);printf("◢");} else if(b[i][j+l]==8){color(2);printf("▌");} else if(b[i][j+l]==9){color(2);printf("▄");} else if(b[i][j+l]==10){color(7);printf("█");} else if(b[i][j+l]==11){color(1);printf("‖");} else if(b[i][j+l]==12){color(1);printf("㊣");} else if(b[i][j+l]==13){color(2);printf("◎");}else putchar(32),putchar(32);
          putchar(10); 
    }
    for(int i=1;i<=2;i++)
    {
          for(int j=1;j<=m;j++)if(i+n==cx&&j+l==cy){color(2);printf("♂");}else if(!keng[j+l]){color(7);printf("■");}else putchar(32),putchar(32);
          putchar(10); 
    }
    Sleep(50);
}
void check()
{
    if(flag<=3&&flag)
    {
        if(b[cx-1][cy])
        {
            flag=0;
            if(b[cx-1][cy]==2||b[cx-1][cy]==4)
            {
                b[cx-1][cy]=1;
                score+=100;
                b[cx-2][cy]=3;
            }
        }
          else cx--;
    }
      else if(flag!=4&&(cx<n||keng[cy])&&(!b[cx+1][cy]||b[cx+1][cy]==4))cx++;
}
void lev1_1()
{
    if(!bo)while(1)
    {
        system("cls");
        check();
        if(flag)flag++;
        if(flag>4)flag=0;
        color(5);printf("score:%d\n",score); 
        print();
        while(cx==xx&&cy==yy&&!kbhit()){Sleep(50);check();}
        if(kbhit())
        {
            ch=getch();
            if(ch=='w'&&!flag&&(cx==n||b[cx+1][cy]))flag=1; 
            if(ch=='a'&&cy!=1&&(!b[cx][cy-1]||b[cx][cy-1]==4||b[cx][cy-1]==11||b[cx][cy-1]==14))cy--;
            if(ch=='d'&&(!b[cx][cy+1]||b[cx][cy+1]==4||b[cx][cy+1]==11||b[cx][cy+1]==14))
            {
                int bo=0;
                if(b[cx][cy+1]==11&&b[6][159]==12)
                {
                    Sleep(1000);
                    for(int i=1;i<=7;i++)
                    down(i);
                    cy++;
                    cy++;
                    Sleep(50);
                    print();
                    bo=1;
                    down(8);
                }
                else cy++;
            }
            if(ch=='r')
            {
                l=0;
                t=0; 
                cx=n;
                cy=1;
                score=0;
                lev1_1csh();
            }
        }
        l=max(cy-m/2,l);
        xx=cx;
        yy=cy;
        Sleep(50);
        t++;
        if(cx>=n+2)
        {
            system("cls");
            color(4);
            cout<<"You Died!"; 
            Sleep(1000);
            return;
        }
        if(cx==15&&cy==166)
        {
            system("cls");
            color(5);
            cout<<"You Win Lev 1-1!"; 
            Sleep(1000);
            return;
        }
    }  
    else
    while(1)
    {
        system("cls");
        color(5);printf("score:%d\n",score); 
        print(); 
        while(cx==xx&&cy==yy&&!kbhit()){Sleep(50);}
        if(kbhit())
        {
            ch=getch();
            if(ch=='w'&&cx!=1)cx--;
            if(ch=='a'&&cy!=1)cy--;
            if(ch=='d')cy++;
            if(ch=='s'&&cx!=n)cx++;
            if(ch=='r')
            {
                l=0;
                t=0;
                cx=n;
                cy=1;
                score=0; 
                lev1_1csh();
            }
        }
        l=max(cy-m/2,0);
        xx=cx;
        yy=cy;
        Sleep(50);
        if(cx==15&&cy==166)
        {
            system("cls");
            color(5);
            cout<<"You Win Lev 1-1!"; 
            Sleep(1000);
            return;
        }
        t++;
    }  
} 
int main()
{   
    system("mode con cols=65 lines=23");
    CONSOLE_CURSOR_INFO cursor_info = {1, 0}; 
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
    SetConsoleTitle("超级玛绿");
    color(2);printf("                ********\n"
"               ************\n"
"               ####....#.         ");
    color(5),cout<<"超级玛";color(2);printf("绿 ");color(4),cout<<"重温童年回忆";color(0);putchar(10);
color(2);printf("             #..###.....##....\n");
color(2);printf("             ###.......######            ");color(5);printf("  ###            ###\n");color(0);
color(2);printf("                ...........              ");color(5);printf(" #...#          #...#\n");color(0);
color(2);printf("               ##*#######                ");color(5);printf(" #.#.#          #.#.#\n");color(0);
color(2);printf("            ####*******######            ");color(5);printf(" #.#.#          #.#.#\n");color(0);
color(2);printf("           ...#***.****.*###....         ");color(5);printf(" #...#          #...#\n");color(0);
color(2);printf("           ....**********##.....         ");color(5);printf("  ###            ###\n");color(0);
color(2);printf("           ....****    *****....\n"); 
color(2);printf("             ####        ####\n"
"           ######        ######\n");color(0);
color(7);printf("##########################################");color(2);printf("####################\n");
color(7);printf("#...#......#.##...#......#.##...#......#.#");color(2);printf("#------------------#\n");
color(7);printf("##########################################");color(2);printf("#------------------#\n");
color(7);printf("#..#....#....##..#....#....##..#....#....#");color(2);printf("####################\n");
color(7);printf("##########################################");color(2);printf("    #----------#\n");
color(7);printf("#.....#......##.....#......##.....#......#");color(2);printf("    #----------#\n");
color(7);printf("##########################################");color(2);printf("    #----------#\n");
color(7);printf("#.#..#....#..##.#..#....#..##.#..#....#..#");color(2);printf("    #----------#\n");
color(7);printf("##########################################");color(2);printf("    ############\n");
    n=15;m=20;
    lev1_1csh();
    Sleep(3000);
    system("cls");
    color(6);
    printf("1.新手风暴"); 
    Sleep(1500);
    system("mode con cols=45 lines=20");
    //bo=1;
    //下面是地图部分，棕色部分表示方块，？表示幸运方块，还有隐藏方块 
    lev1_1();
    return 0;
}