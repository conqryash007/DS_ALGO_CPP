# Binary Tree Traversal

Types of traversal 
1. Depth First 
2. Breadth First/Level Order Traversal

Depth First
    |
    |
    |-> Inorder   [left,root,right]
    |-> Preorder  [root,left,right]
    |-> Postorder [left,right,root]
    
Example : 

                             (1)
                            /   \
                           /     \
                        (15)      (3)
                        / \       / \   
                     (21) NULL (33)  (45) 


Result
    |
    |
    |-> Inorder   [21,15,1,33,3,45]
    |-> Preorder  [1,15,21,3,33,45]
    |-> Postorder [21,15,33,45,3,1]