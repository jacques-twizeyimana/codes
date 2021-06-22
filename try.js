var con = this;
var productData = [];

function Product(name, brand, price, color) {
    this.Name = name;
    this.Brand = brand;
    this.Price = price;
    this.Color = color;

    this.getData = function () {
        console.log(this);
        return console.log("Name is " + this.Name + " Brand is " + this.Brand + " Price is " + this.Price
            + " & Description is  " + this.Color);
    }

    this.displayData = function () {
        console.log(this.Name);
        console.log(this.Price);
    }
    return;
}
this.displayData

productData.push(new Product("Bottle", "Tupperware", 550, "Purple"));
productData.push(new Product("Laptop", "Dell", 80000, "Black"));
productData.push(new Product("abf", "sdr", 550, "red"));
productData.push(new Product("csd", "pqrs", 550, "green"));

for (let i = 0; i < productData.length; i++) {
    console.log("forloop");
    console.log("HIII" + productData[i].getData());
    console.log(productData[i].displayData());
    console.log(productData);
}