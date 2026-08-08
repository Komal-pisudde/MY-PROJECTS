let a = Number(prompt("Enter first number:"));
let b = Number(prompt("Enter second number:"));
let op = prompt("Enter operation (+, -, *, /):");

let random = Math.random();

if (random < 0.1) {
    // Faulty calculator
    switch (op) {
        case "+":
            console.log(a - b);
            break;

        case "*":
            console.log(a + b);
            break;

        case "-":
            console.log(a / b);
            break;

        case "/":
            console.log(a ** b);
            break;

        default:
            console.log("Invalid operator");
    }
} else {
    // Correct calculator
    switch (op) {
        case "+":
            console.log(a + b);
            break;

        case "-":
            console.log(a - b);
            break;

        case "*":
            console.log(a * b);
            break;

        case "/":
            console.log(a / b);
            break;

        default:
            console.log("Invalid operator");
    }
} 