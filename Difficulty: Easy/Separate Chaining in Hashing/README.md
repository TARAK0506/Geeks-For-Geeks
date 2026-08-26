<h2><a href="https://www.geeksforgeeks.org/problems/separate-chaining-in-hashing-1587115621/1">Separate Chaining in Hashing</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given an integer <strong>m</strong> representing the size of a hash table and an array <strong>arr[]</strong> of <strong>distinct</strong> integers, insert all the elements of the array into the hash table using the <strong>Separate Chaining </strong>technique.</span></p>
<p><span style="font-size: 18px;">Return a 2D array, where each index of the outer array represents a slot in the hash table, and the corresponding inner array contains all the elements stored in that slot, in the <strong>order</strong> they were inserted.</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong> In the Separate Chaining technique, each slot of the hash table is implemented as a linked list. If multiple elements map to the same slot (i.e., a collision occurs), they are stored in the linked list for that slot in the order they are inserted.</span></p>
<p><span style="font-size: 18px;"><strong>Examples :<br></strong></span></p>
<pre><span style="font-size: 18px;"><strong style="font-size: 18px;">Input: </strong><span style="font-size: 18px;">arr[] = [6, 4, 10, 13, 5], <strong> </strong>m = 4
</span><strong style="font-size: 18px;">Output: </strong><span style="font-size: 18px;">[[4], [13, 5], [6, 10], []]</span><strong style="font-size: 18px;">
Explanation:<br></strong><span style="font-size: 18px;">6 % 4 = 2, so 6 is inserted into slot 2.
4 % 4 = 0, so 4 is inserted into slot 0.
10 % 4 = 2, so it is appended to the linked list at slot 2 after 6.
13 % 4 = 1, so it is inserted into slot 1.
5 % 4 = 1, so it is appended to the linked list at slot 1 after 13.</span></span></pre>
<pre><span style="font-size: 18px;"><strong style="font-size: 18px;">Input: </strong><span style="font-size: 18px;">arr[] = [12, 45, 36, 86, 10], m = 3
</span><strong style="font-size: 18px;">Output: </strong><span style="font-size: 18px;">[[12, 45, 36], [10], [86]]
</span><strong style="font-size: 18px;">Explanation:</strong><span style="font-size: 18px;"><br>12 % 3 = 0, so 12 is inserted into slot 0.
45 % 3 = 0, so it is appended to the linked list at slot 0.
36 % 3 = 0, so it is appended after 45 in slot 0.
86 % 3 = 2, so it is inserted into slot 2.
10 % 3 = 1, so it is inserted into slot 1.</span></span></pre>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Hash</code>&nbsp;<code>Linked List</code>&nbsp;<code>Arrays</code>&nbsp;