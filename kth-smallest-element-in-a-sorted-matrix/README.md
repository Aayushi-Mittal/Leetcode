<h2>  Kth Smallest Element in a Sorted Matrix</h2><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an <code style="user-select: auto;">n x n</code> <code style="user-select: auto;">matrix</code> where each of the rows and columns is sorted in ascending order, return <em style="user-select: auto;">the</em> <code style="user-select: auto;">k<sup style="user-select: auto;">th</sup></code> <em style="user-select: auto;">smallest element in the matrix</em>.</p>

<p style="user-select: auto;">Note that it is the <code style="user-select: auto;">k<sup style="user-select: auto;">th</sup></code> smallest element <strong style="user-select: auto;">in the sorted order</strong>, not the <code style="user-select: auto;">k<sup style="user-select: auto;">th</sup></code> <strong style="user-select: auto;">distinct</strong> element.</p>

<p style="user-select: auto;">You must find a solution with a memory complexity better than <code style="user-select: auto;">O(n<sup style="user-select: auto;">2</sup>)</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> matrix = [[1,5,9],[10,11,13],[12,13,15]], k = 8
<strong style="user-select: auto;">Output:</strong> 13
<strong style="user-select: auto;">Explanation:</strong> The elements in the matrix are [1,5,9,10,11,12,13,<u style="user-select: auto;"><strong style="user-select: auto;">13</strong></u>,15], and the 8<sup style="user-select: auto;">th</sup> smallest number is 13
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> matrix = [[-5]], k = 1
<strong style="user-select: auto;">Output:</strong> -5
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == matrix.length == matrix[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 300</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">9</sup> &lt;= matrix[i][j] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;">All the rows and columns of <code style="user-select: auto;">matrix</code> are <strong style="user-select: auto;">guaranteed</strong> to be sorted in <strong style="user-select: auto;">non-decreasing order</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= n<sup style="user-select: auto;">2</sup></code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Follow up:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Could you solve the problem with a constant memory (i.e., <code style="user-select: auto;">O(1)</code> memory complexity)?</li>
	<li style="user-select: auto;">Could you solve the problem in <code style="user-select: auto;">O(n)</code> time complexity? The solution may be too advanced for an interview but you may find reading <a href="http://www.cse.yorku.ca/~andy/pubs/X+Y.pdf" target="_blank" style="user-select: auto;">this paper</a> fun.</li>
</ul>
</div>