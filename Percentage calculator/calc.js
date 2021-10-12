var numField1 = document.getElementById('numField1');
var numField2 = document.getElementById('numField2');
var resultField = document.getElementById('resultField');
var form = document.getElementById('xIsWhatPercentOfY');

form.addEventListener('submit', function(event) {
    if (!numField1.value || !numField2.value) {
        alert("Please enter your values");
    }
    else {
        var x = parseFloat(numField1.value);
        var y = parseFloat(numField2.value);
        var result = x*100/y;
        resultField.innerText = "Result: "+result+"%";
        event.preventDefault();
    }
});