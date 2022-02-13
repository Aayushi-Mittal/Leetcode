<h2>  Kth Largest Element in a Stream</h2><hr><div style="user-select: auto;"><p style="user-select: auto;">Design a class to find the <code style="user-select: auto;">k<sup style="user-select: auto;">th</sup></code> largest element in a stream. Note that it is the <code style="user-select: auto;">k<sup style="user-select: auto;">th</sup></code> largest element in the sorted order, not the <code style="user-select: auto;">k<sup style="user-select: auto;">th</sup></code> distinct element.</p>

<p style="user-select: auto;">Implement <code style="user-select: auto;">KthLargest</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">KthLargest(int k, int[] nums)</code> Initializes the object with the integer <code style="user-select: auto;">k</code> and the stream of integers <code style="user-select: auto;">nums</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int add(int val)</code> Appends the integer <code style="user-select: auto;">val</code> to the stream and returns the element representing the <code style="user-select: auto;">k<sup style="user-select: auto;">th</sup></code> largest element in the stream.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["KthLargest", "add", "add", "add", "add", "add"]
[[3, [4, 5, 8, 2]], [3], [5], [10], [9], [4]]
<strong style="user-select: auto;">Output</strong>
[null, 4, 5, 5, 8, 8]

<strong style="user-select: auto;">Explanation</strong>
KthLargest kthLargest = new KthLargest(3, [4, 5, 8, 2]);
kthLargest.add(3);   // return 4
kthLargest.add(5);   // return 5
kthLargest.add(10);  // return 5
kthLargest.add(9);   // return 8
kthLargest.add(4);   // return 8
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt;= val &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">10<sup style="user-select: auto;">4</sup></code> calls will be made to <code style="user-select: auto;">add</code>.</li>
	<li style="user-select: auto;">It is guaranteed that there will be at least <code style="user-select: auto;">k</code> elements in the array when you search for the <code style="user-select: auto;">k<sup style="user-select: auto;">th</sup></code> element.</li>
</ul>
</div>