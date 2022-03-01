<h2><a href="https://leetcode.com/problems/squares-of-a-sorted-array/">977. Squares of a Sorted Array</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">nums</code> sorted in <strong style="user-select: auto;">non-decreasing</strong> order, return <em style="user-select: auto;">an array of <strong style="user-select: auto;">the squares of each number</strong> sorted in non-decreasing order</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [-4,-1,0,3,10]
<strong style="user-select: auto;">Output:</strong> [0,1,9,16,100]
<strong style="user-select: auto;">Explanation:</strong> After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [-7,-3,2,3,11]
<strong style="user-select: auto;">Output:</strong> [4,9,9,49,121]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;"><span style="user-select: auto;">1 &lt;= nums.length &lt;= </span>10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums</code> is sorted in <strong style="user-select: auto;">non-decreasing</strong> order.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<strong style="user-select: auto;">Follow up:</strong> Squaring each element and sorting the new array is very trivial, could you find an <code style="user-select: auto;">O(n)</code> solution using a different approach?</div>