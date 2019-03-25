# Singly Linked List
A node is a collection of two sub-elements or parts. A data part that stores the element and a next part that stores the link to the next node.

----
## What are Singly Linked List in C?
see [Singly Linked List](https://www.hackerearth.com/practice/data-structures/linked-list/singly-linked-list/tutorial/)

> A linked list is a way to store a collection of elements. Like an array these can be character or integers. Each element in a linked list is stored in the form of a node.

----
## usage example

![Singly Linked List](https://he-s3.s3.amazonaws.com/media/uploads/1b099fd.png)

    struct LinkedList{
    int data;
    struct LinkedList *next;
    };

![Singly Linked List](https://he-s3.s3.amazonaws.com/media/uploads/1b76d10.png)

A linked list is formed when many such nodes are linked together to form a chain. Each node points to the next node present in the order. The first node is always used as a reference to traverse the list and is called HEAD. The last node points to NULL.

In place of a data type, struct LinkedList is written before next. That's because its a self-referencing pointer. It means a pointer that points to whatever it is a part of. Here next is a part of a node and it will point to the next node.

----