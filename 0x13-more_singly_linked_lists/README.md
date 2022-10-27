# C - More singly linked lists

* lists.h - Header file containing definitions and prototypes for all types and functions written for the project.
* 0-print_listint.c -prints all the elements of a `listint_t` linked list.
    * Returns the number of nodes in the `listint_t` list.
* 1-listint_len.c - returns the number of elements in a `listint_t` linked list.
* 2-add_nodeint.c - adds a new node at the beginning of a `listint_t` linked list.
    * If the function fails - returns `NULL`.
    * Otherwise - returns the address of the new element.
* 3-add_nodeint_end.c - adds a new node at the end of a `listint_t` linked list.
    * If the function fails - returns `NULL`.
    * Otherwise - returns the address of the new element.
* 4-free_listint.c - frees a `listint_t` linked list.
* 5-free_listint2.c - frees a `listint_t` linked list. Sets the `head` to `NULL`.
* 6-pop_listint.c - deletes the head node of a `listint_t` linked list.
    * If the linked list is empty - returns `0`.
* 7-get_nodeint.c - relocates a given node of a `listint_t` linked list.
    * If the node does not exist - returns `NULL`.
    * Otherwise - returns the located node.
* 8-sum_listint.c - returns the sum of all the data (`n`) of a `listint_t` linked list.
    * If the linked list is empty - returns `0`.
    * Otherwise - returns the sum of all the data (`n`).
* 9-insert_nodeint.c - inserts a new node to a `listint_t` linked list at a given position.
    * If it is not possible to add the new node at index `idx`, or the function
    fails - returns `NULL`.
    * Otherwise - returns the address of the new node.
* 10-delete_nodeint.c - deletes the node at a given index of a `listint_t` linked list.
    * If the function succeeds - returns `1`.
    * If the function fails - returns `-1`.
* 100-reverse_listint.c - reverses a `listint_t` linked list using a maximum of one loop and two variables.
    * Returns a pointer to the first node of the reversed list.
* 101-print_listint_safe.c - prints a `listint_t` linked list safely (ie. can free lists containing loops).
    * Returns the number of nodes in the `listint_t` list.
* 102-free_listint_safe.c - frees a `listint_t` linked list safely (ie. can free lists containing loops).
    * Returns the size of the list that was freed.
    * Sets the `head` to `NULL`.
* 103-find_loop.c - finds the loop contained in a `listint_t` linked list using a maximum of two variables.
    * If no loop is found - returns `NULL`.
    * Otherwise - returns the address of the node where the loop starts.
