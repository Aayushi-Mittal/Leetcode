<h2><a href="https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/">2114. Maximum Number of Words Found in Sentences</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A <strong style="user-select: auto;">sentence</strong> is a list of <strong style="user-select: auto;">words</strong> that are separated by a single space&nbsp;with no leading or trailing spaces.</p>

<p style="user-select: auto;">You are given an array of strings <code style="user-select: auto;">sentences</code>, where each <code style="user-select: auto;">sentences[i]</code> represents a single <strong style="user-select: auto;">sentence</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum number of words</strong> that appear in a single sentence</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> sentences = ["alice and bob love leetcode", "i think so too", <u style="user-select: auto;">"this is great thanks very much"</u>]
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> 
- The first sentence, "alice and bob love leetcode", has 5 words in total.
- The second sentence, "i think so too", has 4 words in total.
- The third sentence, "this is great thanks very much", has 6 words in total.
Thus, the maximum number of words in a single sentence comes from the third sentence, which has 6 words.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> sentences = ["please wait", <u style="user-select: auto;">"continue to fight"</u>, <u style="user-select: auto;">"continue to win"</u>]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> It is possible that multiple sentences contain the same number of words. 
In this example, the second and third sentences (underlined) have the same number of words.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= sentences.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= sentences[i].length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">sentences[i]</code> consists only of lowercase English letters and <code style="user-select: auto;">' '</code> only.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">sentences[i]</code> does not have leading or trailing spaces.</li>
	<li style="user-select: auto;">All the words in <code style="user-select: auto;">sentences[i]</code> are separated by a single space.</li>
</ul>
</div>