function nice(name) {
    console.log("Hey " + name + " Live as if you were to die tomorrow.")
    console.log("Hey " + name + " Happiness depends upon ourselves")
    console.log("Hey " + name + " Hope tastes like sweet satisfaction.")
    console.log("Hey " + name + " Hope looks like the bright morning sun.")
}

function sum(a, b, c = 3) {
    // console.log(a + b)
    console.log(a, b, c)
    return a + b + c
}


result1 = sum(3, 2)
result2 = sum(7, 5)
result3 = sum(3, 13, 1)

console.log("The sum of these numbers is: ", result1)
console.log("The sum of these numbers is: ", result2)
console.log("The sum of these numbers is: ", result3)


const func1 = (x)=>{
    console.log("I am an arrow function", x)
}

func1(34);
func1(66);
func1(84);