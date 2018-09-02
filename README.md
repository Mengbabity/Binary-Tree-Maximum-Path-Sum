# Binary-Tree-Maximum-Path-Sum

问题：找出一棵树中值的和最大的路径。

思路：记录局部最大值value，返回一个分支，即max(left,right)+root->val。
