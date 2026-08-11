// Business Name Generator

let adjectives = ["Crazy", "Amazing", "Fire"];
let shopName = ["Engine", "Foods", "Garments"];
let anotherWord = ["Bros", "Limited", "Hub"];

// Generate random words
let randomAdjective = adjectives[Math.floor(Math.random() * adjectives.length)];
let randomShopName = shopName[Math.floor(Math.random() * shopName.length)];
let randomAnotherWord = anotherWord[Math.floor(Math.random() * anotherWord.length)];

// Create business name
let businessName = `${randomAdjective} ${randomShopName} ${randomAnotherWord}`;

console.log("Your Business Name is:", businessName);