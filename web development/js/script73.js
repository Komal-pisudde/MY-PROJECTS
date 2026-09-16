function createCard(title, cName, views, monthsOld, duration, thumbnail){

    let html = `
        <div class="card">

            <div class="image">
                <img src="${thumbnail}" alt="">
                <span>${duration}</span>
            </div>

            <div class="text">
                <h2>${title}</h2>
                <p>${cName} • ${views} views • ${monthsOld} months ago</p>
            </div>

        </div>
    `

    document.querySelector(".container").innerHTML =
        document.querySelector(".container").innerHTML + html
}


createCard(
    "installing vs code | Sigma Web Dev video #1",
    "CodeWithHarry",
    560000,
    7,
    "31:22",
    "https://i.ytimg.com/vi/tVzUXW6siu0/hqdefault.jpg"
)