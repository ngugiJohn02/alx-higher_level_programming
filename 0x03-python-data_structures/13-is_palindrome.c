#include "lists.h"

/**
 * reverse_list - Reverses a linked list.
 * @head: Pointer to the first node of the list.
 * Return: Pointer to the new head of the reversed list.
 */
listint_t *reverse_list(listint_t *head)
{
    listint_t *prev = NULL, *next = NULL;

    while (head != NULL)
    {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return (prev);
}

/**
 * is_palindrome - Checks if a singly linked list is a palindrome.
 * @head: Double pointer to the head of the list.
 * Return: 1 if palindrome, 0 if not.
 */
int is_palindrome(listint_t **head)
{
    listint_t *slow = *head, *fast = *head;
    listint_t *first_half, *second_half;

    if (*head == NULL || (*head)->next == NULL)
        return (1);

    /* Find the middle of the list */
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    /* Reverse the second half of the list */
    second_half = reverse_list(slow);

    /* Compare the two halves */
    first_half = *head;
    while (second_half != NULL)
    {
        if (first_half->n != second_half->n)
            return (0);  /* Not a palindrome */
        first_half = first_half->next;
        second_half = second_half->next;
    }

    return (1);  /* Palindrome */
}

