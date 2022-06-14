const express = require("express");
const { request } = require("http");
const https = require("https");
const bodyparser = require("body-parser");


const app = express();

app.use(bodyparser.urlencoded ( { extended : true }));

app.get ("/", function(req, res)
{
    res.sendFile(__dirname + "/index.html" );
});

app.post("/" , function(req , res){

     
     const query = req.body.cityName;
    
    const url = "https://api.openweathermap.org/data/2.5/weather?q + query + &APPID=ef6b9110c468efca9603a8925526a0bd" ;
    https.get(url , function (response){
    console.log(response.statuscode);

    response.on("data" , function(data){
        const weatherData = JSON.parse(data);
        const temp = weatherData.main.temp;
        const weatherDescription = weatherData.weather[0].description;
        //const icon = weatherData.weather[0].icon;
        //res.write("<p> The weather is currently " + weatherDescription + "<p>");
        //res.write("<h1> The temperature in  London is " +  temp  +  " degress celsius . </h1>");
        res.send();

        console.log(weatherData);
    })
})

   
})









app.listen(3000, function ()
{
    console.log("server is running on port 3000");
})
