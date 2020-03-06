"use strict";
const asrt = require('assert').strict;
const readline = require('readline');

var userinput = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function solve()
{
    var user_in = [];
    
    userinput.on('line', function(input) {
        user_in.push(input);
    }).on('close', () => {
    
        ans(user_in);
        process.exit(0); 
    });   
}

function ans(user_in)
{
    var test_cases = user_in[0];
    user_in.splice(0, 1);

    while(test_cases > 0)
    {
        var noises = user_in[0].split(' ');
        user_in.splice(0, 1);

        var i = 0;
        while(i < user_in.length)
        {
            var temp = user_in[i];

            if(temp === 'what does the fox say?')
            {
                user_in.splice(0, i + 1);
                break;
            }
            var del = temp.split(' ');
            noises = resize_noise(noises, del[2]);   
            i++;
        }
        var ans = noises.join(' ');
        console.log(ans);
        test_cases--;
    }
}

function resize_noise(noise, del)
{
    for(var i = 0; i < noise.length; i++)
    {
        if(noise[i] === del)
        {
            noise.splice(i, 1);
            i--;
        }
    }

    return noise;    
}

if (require.main == module)
{
    solve();    
}