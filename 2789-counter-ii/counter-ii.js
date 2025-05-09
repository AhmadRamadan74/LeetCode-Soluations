/**
 * @param {number} init
 * @return {{ increment: Function, decrement: Function, reset: Function }}
 */
var createCounter = function(init) {
    let x = init;
    return {
        increment: function() {
            return ++x;
        },
        decrement: function() {
            return --x;
        },
        reset: function() {
            x = init;
            return x;
        }
    };
    let ans = createCounter(5);
    console.log(ans.increment()),  console.log(ans.reset()), console.log(ans.decrement()); 
};
