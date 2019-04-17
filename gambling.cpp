#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
using namespace std;
void ball_display();
void spin_display();
void Move_Number();
int status();
int main_menu();
int i=0,wish;
int num[11]={10,11,12,13,14,15,16,17,18,19,20};


int main()

{
    cout<<"Welcome gamers to the gambling world"<<endl;
    main_menu();
    spin_display();
    return 0;
}

void SetCursorPosition(int X,INT Y)
{
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {X,Y};
    SetConsoleCursorPosition(output, pos);
}

void Move_Number()
{
    for(int i=0; i<7; i++)
    {
        char Number='X';
        SetCursorPosition(3,1);
        cout << Number;
        Sleep(100);
        SetCursorPosition(3,4);
        cout << Number;
        Sleep(100);
        SetCursorPosition(3,7);
        cout << Number;
        Sleep(100);
        SetCursorPosition(3,10);
        cout << Number;
        Sleep(100);
        SetCursorPosition(3,13);
        cout << Number;
        Sleep(100);
        SetCursorPosition(3,16);
        cout << Number;
        Sleep(100);
        SetCursorPosition(3,19);
        cout << Number;
        Sleep(100);
        SetCursorPosition(3,22);
        cout << Number;
        Sleep(100);
        SetCursorPosition(3,25);
        cout << Number;
        Sleep(100);
        SetCursorPosition(3,28);
        cout << Number;
        Sleep(100);

    for(int a=0; a<1; a++)
    {
        char space=' ';
        SetCursorPosition(3,1);
        cout << Number;
        Sleep(10);
        SetCursorPosition(3,4);
        cout << Number;
        Sleep(10);
        SetCursorPosition(3,7);
        cout << Number;
        Sleep(10);
        SetCursorPosition(3,10);
        cout << Number;
        Sleep(10);
        SetCursorPosition(3,13);
        cout << Number;
        Sleep(10);
        SetCursorPosition(3,16);
        cout << Number;
        Sleep(10);
        SetCursorPosition(3,19);
        cout << Number;
        Sleep(10);
        SetCursorPosition(3,22);
        cout << Number;
        Sleep(10);
        SetCursorPosition(3,25);
        cout << Number;
        Sleep(10);
        SetCursorPosition(3,28);
        cout << Number;
        Sleep(10);
        }
    }

    cout << endl << endl << endl << endl;
}
int main_menu()
{
    cout<<"1.Play"<<endl<<"2.Instructions"<<endl;
    int choice;
    cin>>choice;
    cout<<endl;
    switch(choice)
    {
      case 1:
        {

            system("cls");
             ball_display();
             break;
        }
      case 2:
        {
            system("cls");
            cout<<"Tap spin to play.If you are correct,then you can continue.But all your coins will be at stake"<<endl;
            return main_menu();
            break;
        }
    }

}
void ball_display()
{
 for(int n=0;n<10;n++)
    {

    i++;
    cout <<"+------+"<<endl<<"|  "<<num[i]<<"  |"<<endl<<"+------+"<<endl;
    Sleep(500);

    }
}
void spin_display()
{

    static int counter=0;
    counter++;
    cout<<endl;
    cout<<"Gambling "<<counter<<" what will be the value after spin ?"<<endl;
    cout<<"Select One of them"<<endl;
    cout<<"1.Greater than 15"<<endl;
    cout<<"2.Less than 15"<<endl;
    {
    int pick,coin;
    static int total_coin;
    int ans;
    cout<<"Choose Your option"<<endl;
    cin>>ans;
    system("cls");
    for(int n=0;n<10;n++)
    {
        cout <<"+------+"<<endl<<"| "<<"     |"<<endl<<"+------+"<<endl;
        Sleep(20);
    }
    Move_Number();
    cout<<"System has just finished spinning"<<endl;
   srand ( time(NULL) );
   for(int i=0;i<1;i++)
    {
        int RandIndex = rand() % 14;
       pick=num[RandIndex];
       cout<<"The system stopped in: "<<pick<<endl;
       cout<<endl;
    }

    if(pick!=15)
    {
    switch(ans)
     {
case 1:
    {
    if(pick>15)
       {
        cout<<"You are correct"<<endl;
        cout<<"You got 10000 coins"<<endl;
        coin=10000;
        coin=10000;
        total_coin=total_coin+coin;
        cout<<"Your current account balance is="<<total_coin<<endl;

        cout<<endl;
        cout<<"Do you want to continue ?.If continue,all your coins will be at stake"<<endl;
        cout<<"1.Continue"<<endl<<"2.quit"<<endl;
        cin>>wish;
        cout<<endl;
    switch(wish)
    {
      case 1:
        {
            system("cls");
            spin_display();

        break;
        }
      case 2:
        {
            cout<<"Game Over"<<endl;
         break;

        }
       }
       }
    else
       {
        cout<<"Sorry...You are incorrect"<<endl;
        cout<<"You loss all your coins"<<endl;
        total_coin=0;
        cout<<"Your current account balance is="<<total_coin<<endl;
        cout<<endl<<"Game Over"<<endl;
       }
    break;
    }
case 2:
    {
    if(pick<15)
        {
        cout<<"You are correct"<<endl;
        cout<<"You got 10000 coins"<<endl;
        coin=10000;
        total_coin=total_coin+coin;
        cout<<"Your current account balance is="<<total_coin<<endl;
        cout<<endl;
        cout<<"Do you want to continue ?.If continue,all your coins will be at stake"<<endl;
        cout<<"1.Continue"<<endl<<"2.quit"<<endl;
        cin>>wish;
        cout<<endl;
    switch(wish)
    {
      case 1:
        {
            system("cls");
            spin_display();

        break;
        }
      case 2:
        {
            cout<<"Game Over"<<endl;
         break;

        }
       }
        }
    else
        {
        cout<<"Sorry...You are incorrect"<<endl;
        cout<<"You loss all your coins"<<endl;
        total_coin=0;
        cout<<"Your current account balance is="<<total_coin<<endl;
        cout<<endl<<"Game Over"<<endl;
        }
   }
    }
     }
    else cout<<"You are lucky today.Got 15 ball rare box.Open it now"<<endl;

    }
}
int status()
{
    system("cls");
    cout<<"Game Over"<<endl;
    return 0;
}
