var array = [2,4,5,6,7,8,1,10]

var temp;
   for (i = 1; i < array.length; i++) {
    for (j = i; j > 0; j--) {
     if (array[j] < array [j - 1]) {
      temp = array[j];
      array[j] = array[j - 1];
      array[j - 1] = temp;
     }
    }
   }
   for (i = 0; i < array.length; i++) {
     console.log(array[i]);
   }