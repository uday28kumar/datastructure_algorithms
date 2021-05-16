### 1. Find pairs of sum in an integer array.
**Approach:** 
* Iterate the array and keep storing {sum-arr[i] => i} if key in map not exists.
* if key is already exists the map key value and current index will be your answer.
### 2. Sort Binay Array in one place.
**Approach:**
* Count number of 0's and 1's in array
* Put all 0's to the begining and all 1's to the end of array.
### 3. Find equilibrium index of an array.
**Approach:**
* index such that sum of 0 to i-1 == sum of i+1 to n.
* find the sum of array as total
* iterate array and replace index value with sum of upto.
* if arr[i-1] == total - arr[i] - arr[i-1] push them in result.
* arr[i-1] = sum of left of i, 
total - arr[i] - arr[i-1] = sum of right of i

