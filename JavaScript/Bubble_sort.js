BUBBLE SORT CODE :

function bubbleSort(array){
	
    for(var i = 0; i <= array.length-1; i++){
        // Last i elements are already in place
        for(var j = 0; j < ( array.length - i -1); j++){

            // Comparing two adjacent numbers 
            // and see if first is greater than second
            if(array[j] > array[j+1]){

            // Swap them if the condition is true 
            var temp = array[j]
            array[j] = array[j + 1]
            array[j+1] = temp
            }
        }
    }
    // Print the sorted array
    console.log(array);
}

var array = [23, 43, 12, 56, 35];
bubbleSort(array);
