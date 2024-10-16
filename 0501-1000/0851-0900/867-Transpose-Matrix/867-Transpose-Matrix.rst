###############################################################################
867. 转置矩阵
###############################################################################
..
    # with overline, for parts
    * with overline, for chapters
    =, for sections
    -, for subsections
    ^, for subsubsections
    ", for paragraphs

给你一个二维整数数组 ``matrix``， 返回 ``matrix` 的 **转置矩阵** 。

矩阵的 **转置** 是指将矩阵的主对角线翻转， 交换矩阵的行索引与列索引。

**示例 1：**

::

    输入：matrix = [[1,2,3],[4,5,6],[7,8,9]]
    输出：[[1,4,7],[2,5,8],[3,6,9]]

**示例 2：**

::

    输入：matrix = [[1,2,3],[4,5,6]]
    输出：[[1,4],[2,5],[3,6]]

**提示：**

- ``m == matrix.length``
- ``n == matrix[i].length``
- ``1 <= m, n <= 1000``
- ``1 <= m * n <= 105``
- ``-10^9 <= matrix[i][j] <= 10^9``


###############################################################################
867. Transpose Matrix
###############################################################################

Given a 2D integer array ``matrix``, return the **transpose** of ``matrix``.

The **transpose** of a matrix is the matrix flipped over its main diagonal, \
switching the matrix's row and column indices.

.. figure:: hint_transpose.png
    :name: hint_transpose

**Example 1:**

::

    Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
    Output: [[1,4,7],[2,5,8],[3,6,9]]

**Example 2:**

::

    Input: matrix = [[1,2,3],[4,5,6]]
    Output: [[1,4],[2,5],[3,6]]
 
**Constraints:**

- ``m == matrix.length``
- ``n == matrix[i].length``
- ``1 <= m, n <= 1000``
- ``1 <= m * n <= 105``
- ``-10^9 <= matrix[i][j] <= 10^9``
