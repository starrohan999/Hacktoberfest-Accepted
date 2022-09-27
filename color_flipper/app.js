
const colors = ["pink", "green", "red", "rgba(133,122,200)", "#f15025", "#42a8f8"];

const btn = document.getElementById('btn');
const colorName = document.querySelector(".colorName");

btn.addEventListener('click', function() {
    // get random number between 0 and 3
    const randomNumber = getRandomNumber();
    console.log(randomNumber);
    document.body.style.backgroundColor = colors[randomNumber];
    colorName.textContent = colors[randomNumber];
})

function getRandomNumber() {
    return Math.floor(Math.random() * colors.length);
}