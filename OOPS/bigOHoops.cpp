/*
  Sourabh Has two vehicle, one is honda accord car and another is Ducati Bike

·  Honda accord car runs on fuel called diesel

·  Ducati runs on fuel called petrol

·  Ducati is used and imported vehicle

·  Honda accord is new and made in India

*/

/*.........................*/
//Vehicles having these common attributes 
//car as well as bike are vehicle
protocol Vehicle{

	var name:String{ get set }    	
	//name of the vehicle
    //get the name & set the name


	var FuelType:String{ get set }	
	//Fuel type - petrol/diesel
	//get Fuel type	& set Fuel type


	var UsedNew:String{ get set }
		//Either the vehicle is New or Used 
		//get value & set value

	var creation:String{	get set }	
	    //Country where it created (either imported or made in India)
 		//get & set creation country

}

class Bike:Vehicle{			//Now expand protocol Vehicle
	internal var name:String
	internal var FuelType:String
	internal var UsedNew:String
	internal var creation:String

	init(name:String, FuelType:String, UsedNew:String, creation:String){
		self.name     = name
		self.FuelType = FuelType
		set.UsedNew  = UsedNew
		self.creation  = creation
	}

	func getDetails(){
		//return all the details of Bike
	}
}

class Car:Vehicle{       	// Now expand the protocol Vehicle

	internal var name:String
	internal var FuelType:String
	internal var UsedNew:String
	internal var creation:String

//You can assign initial values to properties in the init() method via self.
//self keyword refers to the current object inside the type that implements the object
	init(name:String, FuelType:String, UsedNew:String, creation:String){
		self.name     = name  //under init name is same to this rhs name
		self.FuelType = FuelType
		set.UsedNew  = UsedNew
		self.creation = creation
	}

	func getDetails(){
		//return all the details of Car
	}

}


class Answer{
	var Honda_Car = Car(name:"accord",FuelType:"diesel",UsedNew:"New",creation:"India")

	var Ducati_Bike = Bike(name:"Ducati",FuelType:"petrol",UsedNew:"Used",creation:"Imported")
}