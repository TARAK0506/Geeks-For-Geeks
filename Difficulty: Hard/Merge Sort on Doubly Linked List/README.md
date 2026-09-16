<h2><a href="https://www.geeksforgeeks.org/problems/merge-sort-on-doubly-linked-list/1">Merge Sort on Doubly Linked List</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 14pt;">Given a doubly linked list, the task is to sort it&nbsp;using Merge Sort. </span><span style="font-size: 14pt;">&nbsp;Return the head of the sorted non-decreasing doubly linked list. The driver code will print it forward and backward in both directions.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>LinkedList:<strong> </strong>7 ↔ 3 ↔ 5 ↔ 2 ↔ 6 ↔ 4 ↔ 1 ↔ 8
<strong>Output:
</strong>LinkedList: 1 ↔ 2 ↔ 3 ↔ 4 ↔ 5 ↔ 6 ↔ 7 ↔ 8
LinkedList: 8 ↔ 7 ↔ 6 ↔ 5 ↔ 4 ↔ 3 ↔ 2 ↔ 1<strong>
Explanation: </strong>After sorting the given linked list in both ways, the resultant matrix will be as shown in the first two lines of the output. The first line shows the output for non-decreasing order, and the next line shows the output for non-increasing order.<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700538/Web/Other/blobid0_1725342004.png" width="371" height="139"><br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>LinkedList: 9 ↔ 15 ↔ 0 ↔ -1 ↔ 0<br><strong>Output:</strong>
LinkedList: -1 ↔ 0 ↔ 0 ↔ 9 ↔ 15
LinkedList: 15 ↔ 9 ↔ 0 ↔ 0 ↔ -1<strong>
Explanation: </strong>After sorting the given linked list in both ways, the resultant list will be -1 → 0 → 0 → 9 → 15 in non-decreasing order and 15 → 9 → 0 → 0 → -1 in non-increasing order.<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700538/Web/Other/blobid1_1725342021.png" width="363" height="136"></span></pre>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Doubly Linked List</code>&nbsp;<code>Linked List</code>&nbsp;<code>Sorting</code>&nbsp;<code>Merge Sort</code>&nbsp;