function wishdob(){
    var names = document
    .childNodes[0]//html
    .childNodes[1]//body
    .childNodes[0]//div
    .childNodes[1]//name input

    var gender = document
    .childNodes[0]//html
    .childNodes[1]//body
    .childNodes[0]//div
    .childNodes[4]//gender input

    var dob = document
    .childNodes[0]//html
    .childNodes[1]//body
    .childNodes[0]//div
    .childNodes[7]//name input

    var hbdMessage=""
    if(gender.value =="male"){
        hbdMessage = `Happy Birth Day Mr.${names.value}`
    }else{
        hbdMessage = `Happy Birth Day Miss.${names.value}`
    }

    var hbdParagraph = document
    .childNodes[0]//html
    .childNodes[1]//body
    .childNodes[1]//div
    .childNodes[1]//name input

    hbdParagraph.innerHTML = hbdMessage

    //set styles css
    hbdParagraph.parentNode.setAttribute("class","green-bg")

}