#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>

using namespace std;

void errorMoment()
{
    cout << "sus. rerun and enter an INTEGER this time. smh.\n";
    Sleep(2000);
    exit(0);
}
void cringeyLongBreak()
{
    cout << endl
         << "------------------------------------------\n\n";
}
void speech()
{
    cout << "hello! i'm the host of this overexaggerated program!\n";
    cringeyLongBreak();
    Sleep(2000);
    cout << "today i'll tell your age thru the plain old algebra trikc...\n";
    cringeyLongBreak();
    Sleep(2000);
    cout << "first, take your age. done? (psst... press any key to continue...)\n";
    cringeyLongBreak();
    getch();
    cout << "now, multiply it by 2. done?\n";
    cringeyLongBreak();
    getch();
    cout << "then, add 2. done?\n";
    cringeyLongBreak();
    getch();
    cout << "lastly, multiply again by 3. done?\n";
    cringeyLongBreak();
    getch();
    cout << "ok pog.\n";
    cringeyLongBreak();
}

float calculashions(float x)
{
    float answer;
    answer = (((x / 3) - 2) / 2);

    int intpart = (int)answer;
    float decpart = answer - intpart;
    if (decpart == 0.0f)
    {
        return answer;
    }
    else
    {
        cout << "i think you made a calculashion error... run again.\n";
        cringeyLongBreak();
        getch();
        exit(0);
    }
}

int main()
{
    // Variables
    float x;

    // Workings
    speech();

    cout << "so, what's your number?(pls submit an integer)\n";
    cringeyLongBreak();

    cin >> x;
    cringeyLongBreak();

    if (x == 0)
    {
        errorMoment();
    }
    else
    {
        cout << "ok. great. u did submit an integer.\n";
        cringeyLongBreak();
        Sleep(2000);
        float answer = calculashions(x);
        cout << "pog. your age is " << answer << ".\n";
        cringeyLongBreak();
    }

    // Key Press Catcher //

    getch();
    return 0;
}