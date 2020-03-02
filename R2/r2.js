const readline = require('readline');


var userinput = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function answer(r, s)
{
    return (s*2)-r;
}

function r2()
{
    //Get Numbers from user
    userinput.question('',function (numin) 
    {
        var split_numin = numin.split(' ')
        var r1 = parseInt(split_numin[0]);
        var s1 = parseInt(split_numin[1]);
        console.log(answer(r1, s1));
         userinput.close();     
    });
}

if (require.main == module)
{
    r2();    
}