The Sixth Day of 100 Days of Coding Challenge
------------------------------------------------

📌 𝐃𝐚𝐲 6: #100daysofcodechallenge

Problem Solved: Find All Duplicates in an Array
------------------------------------------------
Problem Link: https://leetcode.com/problems/find-all-duplicates-in-an-array/description/


📌 𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡:

➡ The approach was fairly simple, we initialize a 𝐯𝐞𝐜𝐭𝐨𝐫 for storing the answer and then, first begin with sorting the 𝐧𝐮𝐦𝐬 array from start to end. 

➡ Next, we iterate through the elements present and check for the condition if 𝐧𝐮𝐦𝐬[𝐢] == 𝐧𝐮𝐦[𝐢 + 1], which basically checks for the element currently the pointer is at with the element next to it.

➡ If the condition satisfies, then store the answer and push it back to the declared vector for storing the answer. 

