# Create minimal height binary search tree with elements of given sorted array

def minHeightBST(arr):
    if len(arr) == 0:
        return None
    mid = int(len(arr) / 2)
    left = minHeightBST(arr[:mid])
    right = minHeightBST(arr[(mid+1):])
    return BSTNode(arr[mid],left,right)


class BSTNode():
    def __init__(self, data=None, left=None, right=None):
        self.data, self.left, self.right = data, left ,right

    def __str__(self):
        string = "(" + str(self.data)
        if self.left:  string += str(self.left)
        else:          string += "."
        if self.right: string += str(self.right)
        else:          string += "."
        return string + ")"

import unittest

class Test(unittest.TestCase):
    def test_minimal_height_bst(self):
        Aarr = [1,2,3,4,5,6,7,8,9]
        bst = minHeightBST(Aarr)
        self.assertEqual(str(bst), "(5(3(2(1..).)(4..))(8(7(6..).)(9..)))")

if __name__ == "__main__":
    unittest.main()
 