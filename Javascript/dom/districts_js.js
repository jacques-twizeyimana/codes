function arrangeDistricts(){
    var districts = document.getElementById("districts").getElementsByTagName("p")
    
    var kigali =  document.getElementById("kigali").getElementsByTagName("p")
    var eastern =  document.getElementById("eastern").getElementsByTagName("p")
    var western =  document.getElementById("western").getElementsByTagName("p")

    for(i=0;i<districts.length;i++){
        if(i==0 || i==1){
            kigali[i].innerText= districts[i].innerText
        }else if(i==2 || i==3){
            eastern[i-2].innerText= districts[i].innerText
        }else{
            western[i-4].innerText= districts[i].innerText
        }
    }
}