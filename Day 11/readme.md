The Eleventh Day of 100 Days of Coding Challenge
---------------------------------------------------
π πππ² 11: #100daysofcodechallenge

Problem Solved: Search in Rotated Sorted Array
---------------------------------------------------
Problem Link: https://leetcode.com/problems/search-in-rotated-sorted-array/

π ππ©π©π«π¨πππ‘ 1 (π©ππππ π­ππππ):

β‘ We simply use Linear Search and traverse through the array.

β‘ Check if the current element matches the target element.

β‘ If yes, then return the index otherwise return -1.



However, the problem was demanded to be solved in O(log n) instead of O(n) for better optimization.



π ππ©π©π«π¨πππ‘ 2 (π©πππππ πΊπππππ):

β‘ We start with the general approach of Binary Search, and check if middle element is the target. 

β‘ However, in the next step if they are not the same, we check if the start contains small element than the mid, basically checking if the pivot element lies to the right or left.

β‘If it lies to the right, check if target lies between start and mid, if yes then update the end otherwise update the start.

β‘ Similarly, if pivot element resides in left, we update the start otherwise update end.

β‘ Lastly, if the target element is not present in the array then return -1.
