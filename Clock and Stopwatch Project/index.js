setInterval(function showDate() {
    var today = new Date();
    var hours = today.getHours();
    var minutes = today.getMinutes();
    var seconds = today.getSeconds();
    var ampm = "AM";
    if (hours == 0) hours = 12;
    if (hours > 12) {
        ampm = "PM";
        hours = hours - 12;
    }
    document.getElementById("hr").innerHTML = hours;
    document.getElementById("min").innerHTML = minutes;
    document.getElementById("sec").innerHTML = seconds;
    document.getElementById("ampm").innerHTML = ampm;
}, 1000);
var sec = 00;
var min = 00;
var hrs = 00;
function stopTimer() {
    clearInterval(timer);
}
function startTimer() {
    document.getElementById("startTimer").disabled = true;
    timer = setInterval(update, 1000);
    function update() {
        sec = sec + 1;
        if (sec == 60) {
            min = min + 1;
            sec = 00;
        }
        if (min == 60) {
            hrs = hrs + 1;
            min = 00;
        }
        document.getElementById("timerHr").innerHTML = hrs;
        document.getElementById("timerMin").innerHTML = min;
        document.getElementById("timerSec").innerHTML = sec;
    }
}
function stopTimer() {
    window.clearInterval(timer);
    document.getElementById("startTimer").disabled = false;
}
function resetTimer() {
    window.clearInterval(timer);
    document.getElementById("timerHr").innerHTML = 00;
    document.getElementById("timerMin").innerHTML = 00;
    document.getElementById("timerSec").innerHTML = 00;
    document.getElementById("startTimer").disabled = false;
    sec = 00;
    min = 00;
    hrs = 00;
}
const hr = document.querySelector(".hr");
const mn = document.querySelector(".mn");
const sc = document.querySelector(".sc");
setInterval(startClock, 1000);
function startClock() {
    let date = new Date();
    let hour = date.getHours() * 30;
    let min = date.getMinutes() * 6;
    let sec = date.getSeconds() * 6;
    hr.style.transform = `rotateZ(${hour}deg)`;
    mn.style.transform = `rotateZ(${min}deg)`;
    sc.style.transform = `rotateZ(${sec}deg)`;
}
startClock();