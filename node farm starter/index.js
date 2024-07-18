let fs = require("fs");
let http = require("http");

let text = fs.readFileSync("./dev-data/data.json", "UTF-8");
let vegetableObjArr = JSON.parse(text);

let templateOverviewText = 
fs.readFileSync("./templates/template-overview.html", "utf-8")

// console.log(templateOverviewText);
function replacePlaceHolderWithValue(templateHtml="", vegObj)
{
    let s = templateHtml;
    s = s.replace("{%PRODUCTNAME%}", vegObj.productName);

    s = s.replace("{%IMAGES%}", vegObj.images);
    s = s.replace("{%QUANTITY%}", vegObj.quantity);
    s = s.replace("{%PRICE%}", vegObj.price);
    return s; 
    
}


let overviewCards = []

for(let i = 0;i < vegetableObjArr.length; i++)
{
    let card = replacePlaceHolderWithValue(templateOverviewText, vegetableObjArr[i]); 
    card = card.replace("{%ID%}",i);
    console.log(card);
}



// console.log(vegetableObj);

// console.log(templateOverviewText);
// let p = templateOverviewText.replace("{%PRODUCTNAME%}", vegOne.productName )

// console.log(p);


// let server = http.createServer(function (request, response) {
// 	response.writeHead(200, 
//         {
//             "content-type":"application/json",
//             "my-own-header":"your header"
//         }
//     );
// 	response.end(`{"age":25, "name":"raj}`);
// });





// let port = 7889;
// server.listen(
// 	port,
// 	"127.0.0.1",

// 	function () {
// 		console.log(`server is running in port ${port}`);
// 	}
// );

// let text = fs.readFileSync("./dev-data/data.json", "UTF-8");
// fs.writeFileSync("./dev-data/newfile.txt",text);
