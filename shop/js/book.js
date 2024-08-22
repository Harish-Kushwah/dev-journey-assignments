function getDescriptionInListHtml(str) {
    var arr = str.split(".");
    var li = "<ul>";
    for (let i = 0; i < arr.length - 1; i++) {
        li += "<li>" + arr[i] + "</li>";
    }
    li += "</ul>";
    return li;
}
function getHeadHtml(id) {
    let str = '<p class="product-name">' + list[id]["Name"] + '</p>' +
        '<p class="product-brand">' + list[id]["Brand"] + '</p>';
    return str;
}
function addHeadingOfDetails(id) {
    let head = document.getElementById(id + "-head");
    head.innerHTML = getHeadHtml(id);
}
function addProduct(number,container){
    console.log(container);
    container.innerHTML+=getProductHtml(number);
}
function getProductHtml(number){
  var product = '<div class="product">'+
        '<div class="product-img" id="p'+number+'-image"></div>'+
        '<div class="product-des">'+
          '<div class="product-des-head" id="p'+number+'-head"></div>'+
          '<button onclick="addDetails(this)" id="p'+number+'">Know More</button>'+
          '<button  class="buy-btn" onclick="purchase(this)" id="'+number+'">Buy Now</button>'+
          '<p id="p'+number+'-details"></p>'+
        '</div>'+
        '</div>';
      
  return product;
}
function addDetails(event) {
    let id = event.id;
    for (let i = 1; i <= Object.keys(list).length; i++) {
        if (id == "p" + i) {
            if(addFooterDetails(id))
                event.innerText = "Show Less";
            else
                event.innerHTML = "Know More";
        }
    }
}
function addFooterDetails(id) {
    let element = document.getElementById(id + "-details");
    if (element.innerText.length == 0) {
        element.innerHTML += getDescriptionInListHtml(list[id]["Description"]) + "<br>";
        element.innerHTML += "<span>Price :</span>" + list[id]["Price"] + "<br>";
        element.innerHTML += "<span>Availability Status :</span>" + list[id]["Availability"];
        return true;
    }
    else {
        element.innerHTML = "";
        return false;
    }
}
function getImageHtml(id){
    let str = '<img src= "'+""+list[id]["ImagePath"]+'"' +' alt="product image" />';
    return str;
    
}
function addImage(id){
    let imageDiv = document.getElementById(id +"-image");
    imageDiv.innerHTML += getImageHtml(id);

}
function addAllHeadData() {
    let container = document.getElementById("product-container");
    for (let i = 1; i <= Object.keys(list).length; i++) {
        addProduct(i,container);
        addImage("p"+i);
        addHeadingOfDetails("p" + i);
    }
}

function purchase(event) {
    window.location.href = '/buyproduct.html?id=' + event.id;
}