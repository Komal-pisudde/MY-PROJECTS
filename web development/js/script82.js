
console.log(a1);

const sleep = async () => {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve(45);
        }, 1000);
    });
};

const sum = async (a, b, c) => {
    return a + b + c;
};

(async function main() {

    let obj = {
        a: 1,
        b: 2,
        c: 3
    };

    let { a, b } = obj;
    console.log(a, b);

    let arr = [1, 4, 6];

    console.log(await sum(arr[0], arr[1], arr[2]));

    console.log(await sum(...arr));

    let result = await sleep();
    console.log(result);

})();

var a1 = 6;
