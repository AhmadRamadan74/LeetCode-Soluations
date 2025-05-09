/**
 * @param {number} init
 * @return {{ increment: Function, decrement: Function, reset: Function }}
 */
var createCounter = function(init) {
    let cur = init;
    return {
        increment: function() {
            return ++cur;
        },
        decrement: function() {
            return --cur;
        },
        reset: function() {
            cur = init;
            return cur;
        }
    };
    let ans = createCounter(5);
    console.log(ans.increment()); 
    console.log(ans.reset());      
    console.log(ans.decrement()); 
};
