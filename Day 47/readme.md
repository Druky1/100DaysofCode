The 47th Day of 100 Days of Coding Challenge
------------------------------------------------

📌𝐃𝐚𝐲 47: #100daysofcodechallenge

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Nim Game
------------------------------------------------
𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://lnkd.in/dJxsaWkJ

📌 𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡:

✅ If the number of stones are 1,2 or 3, then player 1 will win.
✅ If the number of stones are 4, then player 1 will lose irrespective of the number of stones he/she removes.
✅ For num_stones=5, the player can either remove 1, 2 or 3 stones i.e. the other player (player 2) will win if the number of stones left are 1, 2 or 3 and will lose only when the number of stones left are 4.
✅ So, if Player 1 removes 1 stone, the number of stones left will be 4, which will defeat Player 2. So, now the lookup entry for 𝐧𝐮𝐦_𝐬𝐭𝐨𝐧𝐞𝐬=5 will be W.
✅ Lookup now will look like this : W->W->W->L->W (being in order for player 1 who is taking the first chance).
✅ Likewise, we can fill the complete lookup table by looking at the values at last three index. If anyone of them is L => Player 1 will win the game as he will remove only that many number of stones which will bring player 2 to the L position.
✅ Lastly, we can notice that only specific positions 4->8->12->16 will contain L for player 1. Thus, answer will be multiple of 4, hence we simply return the value of 𝐧 % 4.
