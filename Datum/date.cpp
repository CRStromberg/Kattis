#include <iostream>

using namespace std;
//Could also use built in functions or %

string jan(int day);
string feb(int day);
string mar(int day);
string apr(int day);
string may(int day);
string jun(int day);
string jul(int day);
string aug(int day);
string sep(int day);
string oct(int day);
string nov(int day);
string dec(int day);

int main()
{
    int day, month;

    cin >> day >> month;

    switch (month)
    {
    case 1:
        cout << jan(day) << endl;
        break;
    case 2:
        cout << feb(day) << endl;
        break;
    case 3:
        cout << mar(day) << endl;
        break;
    case 4:
        cout << apr(day) << endl;
        break;
    case 5:
        cout << may(day) << endl;
        break;
    case 6:
        cout << jun(day) << endl;
        break;
    case 7:
        cout << jul(day) << endl;
        break;
    case 8:
        cout << aug(day) << endl;
        break;
    case 9:
        cout << sep(day) << endl;
        break;
    case 10:
        cout << oct(day) << endl;
        break;
    case 11:
        cout << nov(day) << endl;
        break;
    default:
        cout << dec(day) << endl;
        break;
    }
    return 0;
}

string jan(int day)
{
    switch (day)
    {
    case 4:
    case 11:
    case 18:
    case 25:
        return "Sunday";
        break;
    case 5:
    case 12:
    case 19:
    case 26:
        return "Monday";
        break;
    case 6:
    case 13:
    case 20:
    case 27:
        return "Tuesday";
        break;
    case 7:
    case 14:
    case 21:
    case 28:
        return "Wednesday";
        break;
    case 1:
    case 8:
    case 15:
    case 22:
    case 29:
        return "Thursday";
        break;
    case 2:
    case 9:
    case 16:
    case 23:
    case 30:
        return "Friday";
        break;
    default:
        return "Saturday";
        break;
    }
}

string feb(int day)
{
    switch (day)
    {
    case 1:
    case 8:
    case 15:
    case 22:
        return "Sunday";
        break;
    case 2:
    case 9:
    case 16:
    case 23:
        return "Monday";
        break;
    case 3:
    case 10:
    case 17:
    case 24:
        return "Tuesday";
        break;
    case 4:
    case 11:
    case 18:
    case 25:
        return "Wednesday";
        break;
    case 5:
    case 12:
    case 19:
    case 26:
        return "Thursday";
        break;
    case 6:
    case 13:
    case 20:
    case 27:
        return "Friday";
        break;
    default:
        return "Saturday";
        break;
    }
}

string mar(int day)
{
    switch (day)
    {
    case 1:
    case 8:
    case 15:
    case 22:
    case 29:
        return "Sunday";
        break;
    case 2:
    case 9:
    case 16:
    case 23:
    case 30:
        return "Monday";
        break;
    case 3:
    case 10:
    case 17:
    case 24:
    case 31:
        return "Tuesday";
        break;
    case 4:
    case 11:
    case 18:
    case 25:
        return "Wednesday";
        break;
    case 5:
    case 12:
    case 19:
    case 26:
        return "Thursday";
        break;
    case 6:
    case 13:
    case 20:
    case 27:
        return "Friday";
        break;
    default:
    return "Saturday";
        break;
    }
}

string apr(int day)
{
    switch (day)
    {
    case 5:
    case 12:
    case 19:
    case 26:
        return "Sunday";
        break;
    case 6:
    case 13:
    case 20:
    case 27:
        return "Monday";
        break;
    case 7:
    case 14:
    case 21:
    case 28:
        return "Tuesday";
        break;
    case 1:
    case 8:
    case 15:
    case 22:
    case 29:
        return "Wednesday";
        break;
    case 2:
    case 9:
    case 16:
    case 23:
    case 30:
        return "Thursday";
        break;
    case 3:
    case 10:
    case 17:
    case 24:
        return "Friday";
        break;
    default:
        return "Saturday";
        break;
    }
}

string may(int day)
{
    switch (day)
    {
    case 3:
    case 10:
    case 17:
    case 24:
    case 31:
        return "Sunday";
        break;
    case 4:
    case 11:
    case 18:
    case 25:
        return "Monday";
        break;
    case 5:
    case 12:
    case 19:
    case 26:
        return "Tuesday";
        break;
    case 6:
    case 13:
    case 20:
    case 27:
        return "Wednesday";
        break;
    case 7:
    case 14:
    case 21:
    case 28:
        return "Thursday";
        break;
    case 1:
    case 8:
    case 15:
    case 22:
    case 29:
        return "Friday";
        break;
    default:
        return "Saturday";
        break;
    }
}

string jun(int day)
{
    switch (day)
    {
    case 7:
    case 14:
    case 21:
    case 28:
        return "Sunday";
        break;
    case 1:
    case 8:
    case 15:
    case 22:
    case 29:
        return "Monday";
        break;
    case 2:
    case 9:
    case 16:
    case 23:
    case 30:
        return "Tuesday";
        break;
    case 3:
    case 10:
    case 17:
    case 24:
        return "Wednesday";
        break;
    case 4:
    case 11:
    case 18:
    case 25:
        return "Thursday";
        break;
    case 5:
    case 12:
    case 19:
    case 26:
        return "Friday";
        break;
    default:
        return "Saturday";
        break;
    }
}

string jul(int day)
{
    switch (day)
    {
    case 5:
    case 12:
    case 19:
    case 26:
        return "Sunday";
        break;
    case 6:
    case 13:
    case 20:
    case 27:
        return "Monday";
        break;
    case 7:
    case 14:
    case 21:
    case 28:
        return "Tuesday";
        break;
    case 1:
    case 8:
    case 15:
    case 22:
    case 29:
        return "Wednesday";
        break;
    case 2:
    case 9:
    case 16:
    case 23:
    case 30:
        return "Thursday";
        break;
    case 3:
    case 10:
    case 17:
    case 24:
    case 31:
        return "Friday";
        break;
    default:
        return "Saturday";
        break;
    }
}

string aug(int day)
{
    switch (day)
    {
    case 2:
    case 9:
    case 16:
    case 23:
    case 30:
        return "Sunday";
        break;
    case 3:
    case 10:
    case 17:
    case 24:
    case 31:
        return "Monday";
        break;
    case 4:
    case 11:
    case 18:
    case 25:
        return "Tuesday";
        break;
    case 5:
    case 12:
    case 19:
    case 26:
        return "Wednesday";
        break;
    case 6:
    case 13:
    case 20:
    case 27:
        return "Thursday";
        break;
    case 7:
    case 14:
    case 21:
    case 28:
        return "Friday";
        break;
    default:
        return "Saturday";
        break;
    }
}

string sep(int day)
{
    switch (day)
    {
    case 6:
    case 13:
    case 20:
    case 27:
        return "Sunday";
        break;
    case 7:
    case 14:
    case 21:
    case 28:
        return "Monday";
        break;
    case 1:
    case 8:
    case 15:
    case 22:
    case 29:
        return "Tuesday";
        break;
    case 2:
    case 9:
    case 16:
    case 23:
    case 30:
        return "Wednesday";
        break;
    case 3:
    case 10:
    case 17:
    case 24:
        return "Thursday";
        break;
    case 4:
    case 11:
    case 18:
    case 25:
        return "Friday";
        break;
    default:
        return "Saturday";
        break;
    }
}

string oct(int day)
{
    switch (day)
    {
    case 4:
    case 11:
    case 18:
    case 25:
        return "Sunday";
        break;
    case 5:
    case 12:
    case 19:
    case 26:
        return "Monday";
        break;
    case 6:
    case 13:
    case 20:
    case 27:
        return "Tuesday";
        break;
    case 7:
    case 14:
    case 21:
    case 28:
        return "Wednesday";
        break;
    case 1:
    case 8:
    case 15:
    case 22:
    case 29:
        return "Thursday";
        break;
    case 2:
    case 9:
    case 16:
    case 23:
    case 30:
        return "Friday";
        break;
    default:
        return "Saturday";
        break;
    }
}

string nov(int day)
{
    switch (day)
    {
    case 1:
    case 8:
    case 15:
    case 22:
    case 29:
        return "Sunday";
        break;
    case 2:
    case 9:
    case 16:
    case 23:
    case 30:
        return "Monday";
        break;
    case 3:
    case 10:
    case 17:
    case 24:
        return "Tuesday";
        break;
    case 4:
    case 11:
    case 18:
    case 25:
        return "Wednesday";
        break;
    case 5:
    case 12:
    case 19:
    case 26:
        return "Thursday";
        break;
    case 6:
    case 13:
    case 20:
    case 27:
        return "Friday";
        break;
    default:
        return "Saturday";
        break;
    }
}

string dec(int day)
{
    switch (day)
    {
    case 6:
    case 13:
    case 20:
    case 27:
        return "Sunday";
        break;
    case 7:
    case 14:
    case 21:
    case 28:
        return "Monday";
        break;
    case 1:
    case 8:
    case 15:
    case 22:
    case 29:
        return "Tuesday";
        break;
    case 2:
    case 9:
    case 16:
    case 23:
    case 30:
        return "Wednesday";
        break;
    case 3:
    case 10:
    case 17:
    case 24:
    case 31:
        return "Thursday";
        break;
    case 4:
    case 11:
    case 18:
    case 25:
        return "Friday";
        break;
    default:
        return "Saturday";
        break;
    }
}