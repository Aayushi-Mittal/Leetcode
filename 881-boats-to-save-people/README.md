<h2><a href="https://leetcode.com/problems/boats-to-save-people/">881. Boats to Save People</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array <code style="user-select: auto;">people</code> where <code style="user-select: auto;">people[i]</code> is the weight of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> person, and an <strong style="user-select: auto;">infinite number of boats</strong> where each boat can carry a maximum weight of <code style="user-select: auto;">limit</code>. Each boat carries at most two people at the same time, provided the sum of the weight of those people is at most <code style="user-select: auto;">limit</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of boats to carry every given person</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> people = [1,2], limit = 3
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> 1 boat (1, 2)
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> people = [3,2,2,1], limit = 3
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> 3 boats (1, 2), (2) and (3)
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> people = [3,5,3,4], limit = 5
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> 4 boats (3), (3), (4), (5)
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= people.length &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= people[i] &lt;= limit &lt;= 3 * 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>