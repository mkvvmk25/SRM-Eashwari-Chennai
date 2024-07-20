let express = require("express");
let mongoose = require("mongoose");

let app = express();

// 127.0.0.1:8000/api/v1/products
app.use(express.json()); //middleware



app.get("/products", function (req, res) {
	res.status(500);
	res.json({ app: 3.21, age: 656 });
});

app.get("/", function (req, res) {
	res.status(500);
	res.json({ status: "sucess", messages: "nothing to show" });
});

app.get("/aboutme", function (req, res) {
	res.status(500);
	res.json({ status: "sucess", messages: "this is about me" });
});

app.get("/aboutme/:roll/:id/:age", function (req, res) {
	console.log(req.params);
	res.status(500);
	res.json({ status: "sucess" });
});

// middleware
app.post("/create", function (req, res) {
	console.log(req.body.name);
	res.status(201).send("post sent");
});

mongoose.connect("mongodb://localhost:27017/work")
.then(function (con) {
	// console.log(con);
	console.log("connection success with mongoDB");
});

let StudentSchema = mongoose.Schema({
	nickname: String,
	roll: Number,
	age: Number
});

let student = mongoose.model("student",StudentSchema);

let facultySchema = mongoose.Schema({
	"fname": String,
	"joindate": Number,
	"dept": Number
});

let faculty = mongoose.model("facultqwert",facultySchema);

faculty.create({}).then((c)=>{console.log("saved");});
//////////////////////////////////////////////////////////////////////
app.post("/student/post", function (req, res) {
	console.log(req.body);
	student.create(req.body	).then((obj)=> console.log(obj, "saved")); 
	res.send("post sent");}
);

app.patch("/student/:name/:age", function (req, res) 
{
	student.findOneAndUpdate( {nickname:"raj"}, {$set:{nickname:"abcdef"}}).then( () => "saved");
	res.send("updated");  
});


///////////////////////////////////////////////////////////////////////////
app.get("/student/get", 
	async function (req, res) 
	{
		let obj = await student.find();
		console.log(obj, "arr of objs");
		res.status(400);
		res.json(obj);
	}
);

app.get("/student/:name/:age", function (req, res) {
	console.log(req.params , req.params.age * 1);
	student.find( {"nickname":req.params.name, "age":{$eq:req.params.age * 1} })
	// student.find( {"nickname":"raj", "age":{$eq:65} })
	.then( 
		(obj) => {
			// console.log(obj, "arr of objs");
			res.status(200);
			res.json(obj);
		}
	);
})

app.delete("/student/delete/:nickname", 
	async function(req, res)
	{
		let _nickname = req.params.nickname; 
		let obj = await student.findOneAndDelete({"nickname":_nickname}).exec();
		res.json(obj); 

	}
); 


app.listen(8000, () => {
	console.log("server is running on port 8000");
});

// https://bit.ly/NM-190724
