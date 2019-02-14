//Bishal Khadka
//Simon
//JavaScript

const readline = require('readline');
const assert = require('assert').strict;

function solve() {
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    var lineNum = 1;
    rl.on('line', (line) => {
        if (lineNum == 1)
            lineNum++;
        else {
            var sentence = line.split();
            var final_answer = answer(sentence);
            console.log(final_answer);
        }
    });
}

function answer(sentence) {
    for (var i in sentence) {
        if ((sentence[i].substr(0,10)) === "simon says" )
            return sentence[i].substr(11,sentence[i].length);
        else
        {
            return sentence[i]=" ";
        }
        
    }
}

function test() {
    assert.strictEqual(answer(['Simon says man']), ' man');
    assert.strictEqual(answer(['Simon says hello']), ' hello');
    assert.strictEqual(answer(['Simon says why']), ' why');
    //assert.strictEqual(answer(['what the heck man']), undefined);
    console.log("all test cases passed...")
}

if (require.main == module) {
    if (process.argv.length > 2 && process.argv[2] === 'test') {
        test();
    }
    else
        solve();
}