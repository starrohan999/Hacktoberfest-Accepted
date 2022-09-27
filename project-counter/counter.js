//Alternative
/*

//html part
<body>
    <main>
      <div class="container">
        <h1>counter</h1>
        <span id="value">0</span>
        <div class="button-container">
          <button class="btn decrease">decrease</button>
          <button class="btn reset">reset</button>
          <button class="btn increase">increase</button>
        </div>
      </div>
    </main>
    
//js
let count = 0;
// select value and buttons
const value = document.querySelector("#value");
const btns = document.querySelectorAll(".btn");

btns.forEach(function (btn) {
  btn.addEventListener("click", function (e) {
    const styles = e.currentTarget.classList;
    if (styles.contains("decrease")) {
      count--;
    } else if (styles.contains("increase")) {
      count++;
    } else {
      count = 0;
    }

    if (count > 0) {
      value.style.color = "green";
    }
    if (count < 0) {
      value.style.color = "red";
    }
    if (count === 0) {
      value.style.color = "#222";
    }
    value.textContent = count;
  });
});
*/

let increase=document.getElementById('increase');
let decrease=document.getElementById('decrease');
let reset=document.getElementById('reset');

let value=document.querySelector('.value');
let curr=0;

increase.addEventListener('click',function(){
    curr++;
    value.textContent=curr;
    value.style.color='green';
    console.log('value');
});


decrease.addEventListener('click',function(){
    curr--;
    value.textContent=curr;
    value.style.color='red';
    console.log('value');
});

reset.addEventListener('click',function(){
    curr=0;
    value.textContent=curr;
    value.style.color='black';
});

