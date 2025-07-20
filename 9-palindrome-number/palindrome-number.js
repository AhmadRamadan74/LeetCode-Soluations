/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    let z = x.toString();
    let i = 0, j = z.length - 1;
    while(i < j){
        if(z[i] == z[j]) i++,j--;
        else return false;
    } 
    return true;
};