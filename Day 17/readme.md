The Seventeenth Day of 100 Days of Coding Challenge
------------------------------------------------------

📌 𝐃𝐚𝐲 17: #100daysofcodechallenge

Problem Solved: Gas Station
------------------------------------------------------
Problem Link: https://lnkd.in/efNmDw5c

📌 𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡:

➡ First, we initialized the variables 𝐬𝐭𝐚𝐫𝐭, 𝐭𝐨𝐭𝐚𝐥 and 𝐜𝐮𝐫𝐫𝐞𝐧𝐭. The entire state depends on the 𝐠𝐚𝐬 size for completing one circuit.

➡ Keeping the above step in mind, we iterate through the 𝐠𝐚𝐬 array and store the remaining as the difference of 𝐠𝐚𝐬 and 𝐜𝐨𝐬𝐭 of [𝐢]th travelled station.

➡ If current 𝐠𝐚𝐬 is less than zero, that means circuit can't be completed and that particular gas station is 𝐬𝐭𝐚𝐫𝐭 again with current 𝐠𝐚𝐬 exhausted.

➡ Otherwise, 𝐜𝐮𝐫𝐫𝐞𝐧𝐭 & 𝐭𝐨𝐭𝐚𝐥 gas is added along with the 𝐫𝐞𝐦𝐚𝐢𝐧𝐢𝐧𝐠 gas travelled station to station.

➡ Finally, if successfully completed circuit then return the ending point same as starting point 𝐬𝐭𝐚𝐫𝐭 otherwise return -1.
