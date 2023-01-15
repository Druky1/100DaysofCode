The Eleventh Day of 100 Days of Coding Challenge
---------------------------------------------------
📌 𝐃𝐚𝐲 11: #100daysofcodechallenge

Problem Solved: Search in Rotated Sorted Array
---------------------------------------------------
Problem Link: https://leetcode.com/problems/search-in-rotated-sorted-array/

📌 𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡 1 (𝑩𝒓𝒖𝒕𝒆 𝑭𝒐𝒓𝒄𝒆):

➡ We simply use Linear Search and traverse through the array.

➡ Check if the current element matches the target element.

➡ If yes, then return the index otherwise return -1.



However, the problem was demanded to be solved in O(log n) instead of O(n) for better optimization.



📌 𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡 2 (𝑩𝒊𝒏𝒂𝒓𝒚 𝑺𝒆𝒂𝒓𝒄𝒉):

➡ We start with the general approach of Binary Search, and check if middle element is the target. 

➡ However, in the next step if they are not the same, we check if the start contains small element than the mid, basically checking if the pivot element lies to the right or left.

➡If it lies to the right, check if target lies between start and mid, if yes then update the end otherwise update the start.

➡ Similarly, if pivot element resides in left, we update the start otherwise update end.

➡ Lastly, if the target element is not present in the array then return -1.
