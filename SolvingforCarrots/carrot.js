//This is too slow
//I will work on making it faster later, but it does work using recursion
const readline = require('readline');

var userinput = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function ans(i, a, b)
{
    var p = b
    var n = a;
        userinput.question('', temp =>  {
            
            if(i == 0)
            {
                var split_temp = temp.split(' ')
                n = parseInt(split_temp[0]);
                p = parseInt(split_temp[1]);
            }
            if(i === n)
            {
                userinput.close();
            }
            else
            {
                i++;
                ans(i, n, p);
            }
        });
        userinput.on('close', function() {
            console.log(p);
            process.exit(1);
        });
}

if (require.main == module)
{ 

    ans(0, -1, -1);    
}