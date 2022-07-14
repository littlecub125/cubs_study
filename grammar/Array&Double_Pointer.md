# Array
## Fixed Array
- <span style="color:yellow">data_type</span> <span style="color:red"> Array </span> <span style="color:green"> [index]</span> = {componet 1, componet 2, component 3, .....}
    - example

            int score[3]={1, 2, 3};

## Dynamic Array
- Depend on situation, length of array is changed

- example

        int size;
        printf("size: ");
        scanf_s("%d", &size);

        int* arr=(int*)malloc(sizeof(int)*size);

        for (int i=0; i<size;i++)
            arr[i]=i;
        

        for (int i=0; i<size; i++)
            printf("arr[%d] : %d\n", i, arr[i]);

        free(arr);

        //if size is 3, then arr[0]=0, arr[1]=1, arr[2]=2 

# Double Pointer
- example

        int value=5;
        int *ptr=&value;
        int **pptr=&ptr;

- *ptr is equal to "value"
    - 5

- *ptrptr is equal to ptr
    - address of "value"

- **ptrptr is equalt to "value"
    - double pointer
    - 5


