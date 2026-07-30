<h2><a href="https://www.geeksforgeeks.org/problems/range-gcd-queries3654/1?page=1&category=Segment-Tree&sortBy=difficulty">Range GCD Queries</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given an integer array <strong>arr[]</strong>&nbsp;and a 2D integer array <strong>queries[][]</strong> of size <strong>q × 3</strong>, process all the queries using 0-based indexing.</span></p>
<p><span style="font-size: 18px;">Each query is of one of the following two types:</span></p>
<ul>
<li><span style="font-size: 18px;"><strong>[0, l, r]</strong>: Find the GCD (Greatest Common Divisor) of all elements in the subarray <strong>arr[l...r]</strong>.</span></li>
<li><span style="font-size: 18px;"><strong>[1, index, value]</strong>: Update arr[index] to value.</span></li>
</ul>
<p><span style="font-size: 18px;">Return an array containing the answer for every Type 0 query in the order they appear.</span></p>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input: </span></strong><span style="font-size: 18px;">arr[] = [2, 3, 4, 6, 8, 16], queries[][] = [[0, 0, 2], [1, 3, 8], [0, 2, 5]]
<strong>Output: </strong>[1, 4]<strong>
Explanation: </strong>Initially, arr[] = [2, 3, 4, 6, 8, 16].
Query [0, 0, 2]: Find the GCD of the subarray arr[0...2] = [2, 3, 4]. The GCD is 1.
Query [1, 3, 8]: Update arr[3] from 6 to 8. The array becomes [2, 3, 4, 8, 8, 16].
Query [0, 2, 5]: Find the GCD of the subarray arr[2...5] = [4, 8, 8, 16]. The GCD is 4.
Therefore, the answers to all Type 0 queries are [1, 4].</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> arr[] = [12, 18, 24, 30, 36], queries[][] = [[0, 1, 3], [1, 2, 15], [0, 0, 2], [0, 2, 4]]</span><br><span style="font-size: 18px;"><strong>Output:</strong> [6, 3, 3]</span><br><span style="font-size: 18px;"><strong>Explanation:</strong> Initially, arr[] = [12, 18, 24, 30, 36].</span><br><span style="font-size: 18px;">Query [0, 1, 3]: Find the GCD of the subarray arr[1...3] = [18, 24, 30]. The GCD is 6.</span><br><span style="font-size: 18px;">Query [1, 2, 15]: Update arr[2] from 24 to 15. The array becomes [12, 18, 15, 30, 36].</span><br><span style="font-size: 18px;">Query [0, 0, 2]: Find the GCD of the subarray arr[0...2] = [12, 18, 15]. The GCD is 3.</span><br><span style="font-size: 18px;">Query [0, 2, 4]: Find the GCD of the subarray arr[2...4] = [15, 30, 36]. The GCD is 3.</span><br><span style="font-size: 18px;">Therefore, the answers to all Type 0 queries are [6, 3, 3].</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>5</sup><br>1 ≤ q ≤ 10<sup>5</sup><br>0 ≤ l, r, index ≤ arr.size()-1<br>1 ≤ arr[i], value<strong>&nbsp;</strong>≤ 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Segment-Tree</code>&nbsp;<code>Advanced Data Structure</code>&nbsp;<code>number-theory</code>&nbsp;<code>Mathematical</code>&nbsp;