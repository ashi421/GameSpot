#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Non - Class System.
//Returns a Natural Number
//Between 0 and 100
extern int NumberSystem()
{
    srand((unsigned) time(0));
    int GetRandom = (rand() % 100) + 1;;
    return GetRandom;
}

//Main Game Code. Use it for yes/no to replay the game
int MainGame()
{
    int UserInput;
    int TheNumber = NumberSystem();
    cout << "Welcome to Guess The Number v.1.0.0" << endl
         << "Type the number between 0 and 100" << endl;
    cin>>UserInput;
    while (true)
    {
        
        if (UserInput < 0 || UserInput > 100)
        {
            cout << "Enter The Number Between 0 and 100";
            cin >> UserInput;
        }
        if (UserInput >= 0 || UserInput <= 100)
        {
            if (UserInput > TheNumber)
            {
                cout << "The Number is Less Than: " << UserInput << endl;
                cin >> UserInput;
            }
            if (UserInput < TheNumber)
            {
                cout << "The Number is Greater Than: " << UserInput << endl;
                cin >> UserInput;
            }
            if (UserInput == TheNumber)
            {
                cout << "You Won. The Number is: " << TheNumber << endl;
                string YesOrNo;
                cout<<"Do You Want To Play Again"<<endl<<"Type Y for yes and N for No"<<endl;
                cin>>YesOrNo;
                if(YesOrNo == "Y" || YesOrNo == "y")
                {
                    MainGame();
                }
                if(YesOrNo == "N" || YesOrNo == "n")
                {
                    return 0;
                }
                else
                {
                    cout<<"Type Correct Option";
                }
                break;
            }
        }
    }
}
int main()
{
    MainGame();    
}