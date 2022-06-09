
var numberofDrumButtons = document.querySelectorAll(".drum").length; 
for(var i = 0; i < numberofDrumButtons; i++) {

    document.querySelectorAll(".drum")[i].addEventListener("click", function() {
        
        alert("i got clicked!");
        var audio = new Audio("C:\Users\dell\internshipcfb\Web Developement\drum_kit_website\sounds\tom2.mp3.mp3");
        audio.play();
    });

}













