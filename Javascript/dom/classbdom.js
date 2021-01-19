function getByChild(){
    var paragraph = document
    .childNodes[0]//html
    .childNodes[1]//body
    .childNodes[0]//div
    .childNodes[2]//targeted p

    console.log(paragraph.innerText)
}
function tryDOM(){
    var urParagraph = document
    .childNodes[0]//html
    .childNodes[1]//body
    .childNodes[1]//div for vasities
    .childNodes[3]
    var highHeading = document
    .childNodes[0] // html
    .lastChild//body
    .firstChild // div for highschools
    .firstChild
    
    var highSchoolDiv = document
    .childNodes[0] // html
    .lastChild//body
    .firstChild // div for highschools
    console.log(highSchoolDiv.hasAttribute("class"))
    console.log(highSchoolDiv.getAttribute("id"))
    highSchoolDiv.setAttribute("class","bg-green")

    var rcaPara = highHeading.nextSibling
    console.log("Node name..."+rcaPara.nodeName)
    console.log("Node name text..."+rcaPara.firstChild.nodeName)
    console.log("Node type.."+rcaPara.nodeType)
    console.log("Node type text.."+rcaPara.firstChild.nodeType)
    var ldkPara = rcaPara.nextSibling
}