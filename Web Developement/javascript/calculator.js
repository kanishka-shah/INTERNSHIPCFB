prompt("enter your name");
prompt("enter your friemds's name");
var lovescore = Math.random() *100;
lovescore = Math.floor(lovescore) + 1;
alert ("your love score is " + lovescore);
if(lovescore > 70)
{
    alert("your love score is " + lovescore + "%" + "you love eachother");

}
if(lovescore > 30 && lovescore <=70)
{
    alert("your love score is " + lovescore + "%");
}
if(lovescore<=30)
{
    alert("your ove score is " + lovescore + "%" + " you go like oil and water");
}
else{
    alert("your love score is " + lovescore + "%");
}
