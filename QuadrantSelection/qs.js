const readline = require('readline');


var userinput = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function ans(x, y)
{
    if( x > 0 && y > 0) return 1;
    else if( x < 0 && y > 0) return 2;
    else if( x < 0 && y < 0) return 3;
    else return 4;
}

function solve()
{
    userinput.question('', x =>  {
        userinput.question('', y => {
            console.log(ans(x, y));
            userinput.close();
        });
    });
}

if (require.main == module)
{
    solve();    
}