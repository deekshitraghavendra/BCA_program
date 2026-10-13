 #include <stdio.h>

int main()
{
    int n, i, c;
    int r = 0, p = 0, rec = 0;
    int total = 0, final;

    printf("Enter number of tickets: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Enter category for ticket %d (1/2/3): ", i);
        scanf("%d", &c);

        if(c == 1)
        {
            total = total + 150;
            r++;
        }
        else if(c == 2)
        {
            total = total + 250;
            p++;
        }
        else if(c == 3)
        {
            total = total + 400;
            rec++;
        }
    }

    printf("\n--- Final Bill ---\n");
    printf("Regular tickets: %d\n", r);
    printf("Premium tickets: %d\n", p);
    printf("Recliner tickets: %d\n", rec);
    printf("Total (before discount): %d\n", total);

    if(n >= 5)
    {
        final = total - (total * 10 / 100);
        printf("Discount applied: Yes\n");
    }
    else
    {
        final = total;
        printf("Discount applied: No\n");
    }

    printf("Final Amount: %d\n", final);

    return 0;
}
