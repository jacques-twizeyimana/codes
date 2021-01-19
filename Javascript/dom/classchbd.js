function wishHBD(){
    var names =document
    .childNodes[0]//html
    .childNodes[1]//body
    .childNodes[0]//div
    .childNodes[1]//names

    var gender =document
    .childNodes[0]//html
    .childNodes[1]//body
    .childNodes[0]//div
    .childNodes[3]//gender

    var hbdMessage=""
    if(gender.value =="male"){
        hbdMessage = `Happy Birth day Mr.${names.value}`
    }else{
        hbdMessage = `Happy Birth day Miss.${names.value}`
    }

    // get hbd p
    var hbdP =document
    .childNodes[0]//html
    .childNodes[1]//body
    .childNodes[1]//div
    .childNodes[1]//hbd p
    hbdP.innerHTML =hbdMessage

    var hbdDiv = hbdP.parentNode
    hbdDiv.setAttribute("class", "green-bg")

}