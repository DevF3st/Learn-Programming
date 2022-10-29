let unsortedArray = [10, 80, 30, 90, 40, 50, 70];

function quicksort(array) {
  if (array.length <= 1) {
    return array;
  }
  var pivot = array[0];
  var left = [];
  var right = [];
  for (var i = 1; i < array.length; i++) {
    array[i] < pivot ? left.push(array[i]) : right.push(array[i]);
  }
  return quicksort(left).concat(pivot, quicksort(right));
}

let sorted = quicksort(unsortedArray);
console.log('Sorted array', sorted);



