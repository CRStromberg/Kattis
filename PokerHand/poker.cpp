#include <iostream>

using namespace std;

int common(char one, char two, char three, char four, char five);

int main()
{
    char one[2], two[2], three[2], four[2], five[2];

    cin >> one >> two >> three >> four >> five;

    cout << common(one[0], two[0], three[0], four[0], five[0]) << endl;
    return 0;
}

int common(char one, char two, char three, char four, char five)
{
    
/*  one two three   four    five
    1   1   1       1       1           5
*/  if(one == two && two == three && three == four && four == five)  return 5;
/*  1   1   1       1       0           4
    1   1   1       0       1           4   
    1   1   0       1       1           4
    1   0   1       1       1           4
    0   1   1       1       1           4
*/  else if(one == two && two == three && three == four) return 4;
    else if(one == two && two == three && three == five) return 4;
    else if(one == two && two == four && four == five) return 4;
    else if(one == three && three == four && four == five) return 4;
    else if(two == three && three == four && four == five) return 4;
/*  1   1   1       0       0           3
    1   1   0       1       0           3
    1   1   0       0       1           3
    1   0   1       1       0           3
    1   0   1       0       1           3
    1   0   0       1       1           3
    0   1   1       1       0           3
    0   1   1       0       1           3
    0   1   0       1       1           3
    0   0   1       1       1           3
*/  else if(one == two && two == three) return 3;
    else if(one == two && two == four) return 3;
    else if(one == two && two == five) return 3;
    else if(one == three && three == four) return 3;
    else if(one == three && three == five) return 3;
    else if(one == four && four == five) return 3;
    else if(two == three && three == four) return 3;
    else if(two == three && three == five) return 3;
    else if(two == four && four == five) return 3;
    else if(three == four && four == five) return 3;
/*  1   1   0       0       0           2
    1   0   1       0       0           2
    1   0   0       1       0           2
    1   0   0       0       1           2
    0   1   1       0       0           2
    0   1   0       1       0           2
    0   1   0       0       1           2
    0   0   1       1       0           2
    0   0   1       0       1           2
    0   0   0       1       1           2
*/  else if(one == two) return 2;
    else if(one == three) return 2;
    else if(one == four) return 2;
    else if(one == five) return 2;
    else if(two == three) return 2;
    else if(two == four) return 2;
    else if(two == five) return 2;
    else if(three == four) return 2;
    else if(three == five) return 2;
    else if(four == five) return 2;

    else return 1;
}