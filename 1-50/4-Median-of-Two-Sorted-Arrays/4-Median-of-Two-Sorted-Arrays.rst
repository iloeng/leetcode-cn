###############################################################################
4. 寻找两个正序数组的中位数
###############################################################################
..
    # with overline, for parts
    * with overline, for chapters
    =, for sections
    -, for subsections
    ^, for subsubsections
    ", for paragraphs

给定两个大小分别为 ``m`` 和 ``n`` 的正序（从小到大）数组 ``nums1`` 和 ``nums2``\
。 请你找出并返回这两个正序数组的 **中位数**。

算法的时间复杂度应该为 ``O(log (m+n))`` 。

**示例 1：**

::

    输入：nums1 = [1,3], nums2 = [2]
    输出：2.00000
    解释：合并数组 = [1,2,3] ，中位数 2

**示例 2：**

::

    输入：nums1 = [1,2], nums2 = [3,4]
    输出：2.50000
    解释：合并数组 = [1,2,3,4] ，中位数 (2 + 3) / 2 = 2.5

**提示：**

- ``nums1.length == m``
- ``nums2.length == n``
- ``0 <= m <= 1000``
- ``0 <= n <= 1000``
- ``1 <= m + n <= 2000``
- ``-10^6 <= nums1[i], nums2[i] <= 10^6``


###############################################################################
4. Median of Two Sorted Arrays
###############################################################################

Given two sorted arrays ``nums1`` and ``nums2`` of size ``m`` and ``n`` \
respectively, return **the median** of the two sorted arrays.

The overall run time complexity should be ``O(log (m+n))``.

 

**Example 1:**

::

    Input: nums1 = [1,3], nums2 = [2]
    Output: 2.00000
    Explanation: merged array = [1,2,3] and median is 2.


**Example 2:**

::

    Input: nums1 = [1,2], nums2 = [3,4]
    Output: 2.50000
    Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.


**Constraints:**

- ``nums1.length == m``
- ``nums2.length == n``
- ``0 <= m <= 1000``
- ``0 <= n <= 1000``
- ``1 <= m + n <= 2000``
- ``-10^6 <= nums1[i], nums2[i] <= 10^6``
