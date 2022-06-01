var guestlist =["Ram", "Shyam", "Seeta" , "Jack" , "Daniel"];
console.log(guestlist);
console.log(guestlist[0]);


//to check if the enetered name is present in the list or not//

var guestname = prompt("what is your name?");
guestlist.includes(guestname);


//to include condition n give a welcome meassage accprdingly//

if(guestlist.includes(guestname))
{
    alert("welome");
}
else
{
    alert(" sorry, may be next time");
}
