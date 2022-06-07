
var randomnumber1 = Math.floor(Math.random() * 6) + 1;
var randomDiceimg = "img" + randomnumber1 + ".jpg";
var randomImageSource = "images/" + randomDiceimg;
var image1= document.querySelectorAll("img")[0];
image1.setAttribute("src", randomImageSource);

var randomnumber2 = Math.floor(Math.random() * 6) + 1;
var randomImageSource2 = "images/img" + randomnumber2 + ".jpg";
document.querySelectorAll("img")[1].setAttribute("src",randomImageSource2);

if(randomnumber1>randomnumber2)
{
    document.querySelectorAll("h1").innerHTML = "player1 wins!";

}

else if(randomnumber2>randomnumber1)
{
    document.querySelectorAll("h1").innerHTML = "player2 wins!";
}

else
{
    document.querySelectorAll("h1").innerHTML = "draw!";
}



