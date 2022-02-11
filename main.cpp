#include <bits/stdc++.h>

using namespace std;

char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};

char wingame()
{
    if(matrix[0][0]=='x'&&matrix[0][1]=='x'&&matrix[0][2]=='x')
        return 'x';
    else if(matrix[1][0]=='x'&&matrix[1][1]=='x'&&matrix[1][2]=='x')
        return 'x';
    else if(matrix[2][0]=='x'&&matrix[2][1]=='x'&&matrix[2][2]=='x')
        return 'x';
    else if(matrix[0][0]=='x'&&matrix[1][0]=='x'&&matrix[2][0]=='x')
        return 'x';
    else if(matrix[0][1]=='x'&&matrix[1][1]=='x'&&matrix[2][1]=='x')
        return 'x';
    else if(matrix[0][2]=='x'&&matrix[1][2]=='x'&&matrix[2][2]=='x')
        return 'x';
    else if(matrix[0][0]=='x'&&matrix[1][1]=='x'&&matrix[2][2]=='x')
        return 'x';
    else if(matrix[0][2]=='x'&&matrix[1][1]=='x'&&matrix[2][0]=='x')
        return 'x';
    else if(matrix[0][0]=='o'&&matrix[0][1]=='o'&&matrix[0][2]=='o')
        return 'o';
    else if(matrix[1][0]=='o'&&matrix[1][1]=='o'&&matrix[1][2]=='o')
        return 'o';
    else if(matrix[2][0]=='o'&&matrix[2][1]=='o'&&matrix[2][2]=='o')
        return 'o';
    else if(matrix[0][0]=='o'&&matrix[1][0]=='o'&&matrix[2][0]=='o')
        return 'o';
    else if(matrix[0][1]=='o'&&matrix[1][1]=='o'&&matrix[2][1]=='o')
        return 'o';
    else if(matrix[0][2]=='o'&&matrix[1][2]=='o'&&matrix[2][2]=='o')
        return 'o';
    else if(matrix[0][0]=='o'&&matrix[1][1]=='o'&&matrix[2][2]=='o')
        return 'o';
    else if(matrix[0][2]=='o'&&matrix[1][1]=='o'&&matrix[2][0]=='o')
        return 'o';
    else
        return 0;
}
void board()
{
    system("cls");
    cout<<"This Game Is Made By Abdelrahman Abdelghany\n";

    cout<<"\t     |     |     \n";
    cout<<"\t  "<<matrix[0][0]<<"  |  "<<matrix[0][1]<<"  |  "<<matrix[0][2]<<" \n ";
    cout<<"\t_____|_____|_____\n";
    cout<<"\t     |     |     \n";
    cout<<"\t  "<<matrix[1][0]<<"  |  "<<matrix[1][1]<<"  |  "<<matrix[1][2]<<" \n ";
    cout<<"\t_____|_____|_____\n";
    cout<<"\t     |     |     \n";
    cout<<"\t  "<<matrix[2][0]<<"  |  "<<matrix[2][1]<<"  |  "<<matrix[2][2]<<" \n ";
    cout<<"\t     |     |     \n";
}

int main()
{
    system("color B0");
    int choice;
    char turn;

    for(int i=0;i<9;i++)
    {
        board();
        cout<<"Player.X who will start the Game then Player.O\n \n";
        cout<<"Please enter the field number you want \n";
        cin >> choice;
        if (i%2 == 0)
        {
            turn = 'x';
        }

        else
        {
            turn = 'o';
        }

        switch(choice)
        {
            case 1:
                if(choice==1&&matrix[0][0]!='x'&&matrix[0][0]!='o')
                {
                    matrix[0][0]=turn;
                }
                else
                {
                    cout<<"Invalid move?\n";
                    system("pause");
                    --i;
                }break;
            case 2:
                if(choice==2&&matrix[0][1]!='x'&&matrix[0][1]!='o')
                {
                    matrix[0][1]=turn;
                }
                else
                {
                    cout<<"Invalid move?\n";
                    system("pause");
                    --i;
                }break;
            case 3:
                if(choice==3&&matrix[0][2]!='x'&&matrix[0][2]!='o')
                {
                    matrix[0][2]=turn;
                }
                else
                {
                    cout<<"Invalid move?\n";
                    system("pause");
                    --i;
                }break;
            case 4:
                if(choice==4&&matrix[1][0]!='x'&&matrix[1][0]!='o')
                {
                    matrix[1][0]=turn;
                }
                else
                {
                    cout<<"Invalid move?\n";
                    system("pause");
                    --i;
                }break;
            case 5:
                if(choice==5&&matrix[1][1]!='x'&&matrix[1][1]!='o')
                {
                    matrix[1][1]=turn;
                }
                else
                {
                    cout<<"Invalid move?\n";
                    system("pause");
                    --i;
                }break;
            case 6:
                if(choice==6&&matrix[1][2]!='x'&&matrix[1][2]!='o')
                {
                    matrix[1][2]=turn;
                }
                else
                {
                    cout<<"Invalid move?\n";
                    system("pause");
                    --i;
                }break;
            case 7:
                if(choice==7&&matrix[2][0]!='x'&&matrix[2][0]!='o')
                {
                    matrix[2][0]=turn;
                }
                else
                {
                    cout<<"Invalid move?\n";
                    system("pause");
                    --i;
                }break;
            case 8:
                if(choice==8&&matrix[2][1]!='x'&&matrix[2][1]!='o')
                {
                    matrix[2][1]=turn;
                }
                else
                {
                    cout<<"Invalid move?\n";
                    system("pause");
                    --i;
                }break;
            case 9:
                if(choice==9&&matrix[2][2]!='x'&&matrix[2][2]!='o')
                {
                    matrix[2][2]=turn;
                }
                else
                {
                    cout<<"Invalid move?\n";
                    system("pause");
                    --i;
                }break;
        }

        char test = wingame();
        if (test == 'x'||test == 'o')
            break;

    }
    if(wingame()!=0)
        cout << wingame() <<" Won the game!"<<endl;
    else
        cout<<"X&O Are Equaled!";
    return 0;
}
