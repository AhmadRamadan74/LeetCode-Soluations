/**
 * @param {number[]} arr
 * @param {number} k
 * @return {number}
 */
var findKthPositive = function(arr, k) {
    let cnt = 0, ans = 1, i = 0;
    while(cnt < k){
        if(i < arr.length && arr[i] == ans){
            i++;
        } 
        else{
            cnt++;
            if(cnt == k)return ans;
        }
        ans++;
    }
    return 0;
};