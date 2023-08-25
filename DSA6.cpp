struct node
{
    int data;
    struct node link;
}
void push(int item)
{
    struct node p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL)
    {
        printf("Memory Error");
    }
    else
    {
        if(head==NULL)  
                     {      
                              p→data=item   
                                                   p→link=NULL;
                                          head=p;
                                      
                             }   
            else
            {
                p→data=item;
                p→link=head;
                head=p;
            }

    }

