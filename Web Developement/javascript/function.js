function getMilk()
{
    console.log("leavehome");
    console.log("moveright");
    console.log("moveright");
    console.log("moveleft");
    console.log("moveleft");
    console.log("buymilk");
    console.log("moveright");
    console.log("moveright");
    console.log("moveleft");
    console.log("reachedhome");
}
getMilk()

//function with parameter//

function getMilk(money)
{
    console.log("leavehome");
    console.log("moveright");
    console.log("moveright");
    console.log("moveleft");
    console.log("moveleft");
    var numberOfBottles = money/1.5; 
    console.log("buy" + numberOfBottles + "bottles of milk ");
    console.log("moveright");
    console.log("moveright");
    console.log("moveleft");
    console.log("reachedhome");
}
getMilk(5)

