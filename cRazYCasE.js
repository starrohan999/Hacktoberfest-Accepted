function crazyCase(text){
    var newText = "";
    for (var i = 0; i < text.length; i++){
        if (Math.random() > 0.5){
        newText += text[i].toUpperCase();
        } else {
        newText += text[i].toLowerCase();
        }
    }
    return newText
}

console.log(crazyCase("Can you read me?"))