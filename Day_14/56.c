#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    
    int arr[n], checked[n];
    printf("Enter the array elements: \n");
    for (int i = 0; i < n; i++)
    {   printf("Element %d:",i+1);
        scanf("%d", &arr[i]);
        checked[i] = 0; // Initialize all elements as unchecked (0)
    }
    
    for (int i = 0; i < n; i++)
    {
        // If this element was already checked as a duplicate before, skip it
        if (checked[i] == 1)
        {
            continue;
        }

        int count = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                checked[j] = 1; // Mark this specific duplicate as checked
            }
        }
        
        if (count > 0)
        {
            printf("%d duplicates found for element %d\n", count, arr[i]);
        }
    }
    
    return 0;
}