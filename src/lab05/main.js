// Work on POSIX and Windows
var fs = require("fs");
var stdinBuffer = fs.readFileSync(0); // STDIN_FILENO = 0
var data = stdinBuffer.toString().trim().split(/\s+/);

// ========================================================
// DO NOT MODIFY ANY CODE ABOVE!
// ========================================================

// Input data is stored in the data array

function cal_min(arr) {
    let min = Number(arr[0]);

    for(let i=1; i<arr.length; i++)
        if (min>Number(arr[i]))
            min = Number(arr[i]);

    console.log(`min(${arr}) = ${min}`);
}


cal_min(data)
