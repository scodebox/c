#include<stdio.h>
#include<stdlib.h>

// Function for display entire array.
void show_array(int* ar, int size){
    if (size <= 0){
        printf("\nINVALID PARAMETERS.");
        return;
    }

    int i;
    printf("\nDISPLAY : ");

    for(i=0;i<size;i++)
        printf("%d ",ar[i]);
    printf("\n");
}


// Function to take array input.
int input_array(int* ar){
    int size;
    int i;

    printf("\nENTER THE SIZE : ");
    scanf("%d",&size);

    if(size <= 0){
        printf("\nINVALID INPUT");
        exit(1);
    }

    printf("\nENTER %d ELEMENTS : ",size);

    for (i=0;i<size;i++)
        scanf("%d",(ar+i));

    return size;
}


// Array display using recursion.
void recursive_display_array(int* ar, int size){
    if (size == 0)
        return;
    printf("%d ",*ar);
    recursive_display_array(ar+1,size-1);
}

// Array display in reverse order using recursion.
void recursive_reverse_display_array(int* ar, int size){
    if(size == 0 )
        return;
    printf("%d ",ar[size-1]);
    recursive_reverse_display_array(ar,size-1);
}


// Insertion of 2D Array.
void input_array2(int ar[100][100], int* m, int* n){
    int i,j;
    printf("\nENTER M x N : ");
    scanf("%d%d",m,n);

//    printf("%d",*m);
//    printf("%d",*n);

    printf("\nENTER ALL THE ELEMENTS : ");
    int c=1;
    for(i=0;i<*m;i++){
        for(j=0;j<*n;j++){
            scanf("%d",(*(ar+i)+j));
        }
    }
}

// Display of 2D array
void show_array2(int ar[100][100], int* m, int* n){
    printf("\nDISPLAY : \n");
    int i,j;
    for(i=0;i<*m;i++){
        for(j=0;j<*n;j++){
            printf(" %d",ar[i][j]);
        }
        printf("\n");
    }
}

// Q1 -  copy the elements of one array into another array.
void copy_array(int* from, int* to, int size){
    int i;
    for(i=0;i<size;i++)
        to[i] = from[i];

    printf("\nCopied.");
}

// Q2 - count a total number of duplicate elements in an array.
void count_duplicate(int* ar,int size){
    int min_element,i,j;
    int duplicate_counter=0;

    min_element = *ar;

    for(i=1;i<size;i++)
        if (min_element > ar[i])
            min_element = ar[i];

    //printf("%d",min_element);
    int discard = min_element-1;
    int flag;

    for(i=0; i<size-1; i++){
        flag = 1;
        if (ar[i]!=discard){
            for(j=i+1; j<size; j++){
                if (ar[i] == ar[j]){
                    if(flag){
                        ++duplicate_counter;
                        flag=0;
                    }
                    ar[j] = discard;
                }
            }
        }
    }

    printf("\nTOTAL NUMBER OF DUPLICATE ELEMENT(s) : %d",duplicate_counter);
}


// Q3 - print all unique elements in an array.
void print_unique(int* ar,int size){
    int min_element,i,j;

    min_element = *ar;

    for(i=1;i<size;i++)
        if (min_element > ar[i])
            min_element = ar[i];

    int discard = min_element-1;

    printf("\nUNIQUE ELEMENTS : ");

    for(i=0; i<size; i++){
        if (ar[i] != discard){
            printf("%d ",ar[i]);
            for(j=i+1; j<size; j++){
                if (ar[i] ==  ar[j]){
                    ar[j] = discard;
                }
            }
        }
    }
}


// Q4 - merge two arrays of same size sorted in decending order.
void merge_two_array(int* first, int* second, int size){
    int temp_size = size*2;
    int temp[temp_size];

    int first_index = 0, second_index = 0, temp_index = 0;

    while (first_index < size && second_index < size){

        if(first[first_index] < second[second_index])
            temp[temp_index++] = first[first_index++];

        else if(first[first_index] > second[second_index])
            temp[temp_index++] = second[second_index++];

        else if(first[first_index] == second[second_index]){
                temp[temp_index++] = second[second_index++];
                temp[temp_index++] = first[first_index++];
            }
    }

    while(first_index<size)
        temp[temp_index++] = first[first_index++];
    while(second_index<size)
        temp[temp_index++] = second[second_index++];

    printf("\nMERGED ARRAY : ");
    for(temp_index=0;temp_index<temp_size;)
        printf("%d ",temp[temp_index++]);
}

// Q5 - to count the frequency of each element of an array.
void frequency_count(int* ar, int size){
    int i,j,counter;
    int discard[size];

    for(i=0;i<size;)
        discard[i++] = 0;

    for(i=0;i<size;i++){
        if(discard[i] == -1)
            continue;
        counter=1;
        for(j=i+1;j<size;j++){
            if(ar[i] == ar[j]){
                ++counter;
                discard[j] = -1;
            }
        }
        printf("\nFREQUENCE OF %d :: %d ",ar[i],counter);
    }
}


// Q6 - find the maximum and minimum element in an array.
void find_max_min(int* ar, int size){
    int i;
    int max = *ar;
    int min = *ar;

    for(i=1;i<size;i++){
        if(max < ar[i])
            max = ar[i];
        if(min > ar[i])
            min = ar[i];
    }

    printf("\nMAX ELEMENT : %d",max);
    printf("\nMIN ELEMENT : %d",min);
}

// Q7 - separate odd and even integers in separate arrays.
void separate_odd_even(int* ar, int size){
    int odd[size], odd_index=0;
    int even[size], even_index=0;
    int i;
    for(i=0;i<size;i++){
        if(ar[i]%2==1)
            odd[odd_index++] = ar[i];
        else
            even[even_index++] = ar[i];
    }

    printf("\nTOTAL %d EVEN INTEGERS : ",even_index);
    for(i=0;i<even_index;i++)
        printf("%d ",even[i]);
    printf("\nTOTAL %d ODD INTEGERS : ",odd_index);
    for(i=0;i<odd_index;i++)
        printf("%d ",odd[i]);

}

// Q8 - sort elements of array in ascending order.
void sort_array_asc(int* ar, int size){
    int i,j,temp;

    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(ar[i] > ar[j]){
                temp=ar[j];
                ar[j] = ar[i];
                ar[i] = temp;
            }
        }
    }
}

// Q9 - sort elements of the array in descending order.
void sort_array_dsc(int* ar, int size){
    int i,j,temp;

    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(ar[i] < ar[j]){
                temp=ar[j];
                ar[j] = ar[i];
                ar[i] = temp;
            }
        }
    }
}

// Q10 - to insert New value in the array (sorted list).
int get_position(int* ar, int size, int new_element){
    int pos=0;

    while(pos<size){
        if(ar[pos] > new_element){
            return pos;
        }
        pos++;
    }
    return size;
}

int insert_new_sorted(int *ar,int size){
    int new_element;
    printf("\nENTER THE NEW ELEMENT : ");
    scanf("%d",&new_element);

    int pos = get_position(ar,size,new_element);
//    printf("%d",pos);
    int i;
    for(i=size-1;i>=pos;i--){
        ar[i+1] = ar[i];
    }
    ar[pos] = new_element;
    size+=1;
    return size;
}


// Q11 - to insert New value in the array (unsorted list).
int insert_new_unsorted(int *ar,int size){
    int new_element;
    printf("\nENTER THE NEW ELEMENT : ");
    scanf("%d",&new_element);
    ar[size] = new_element;
    size+=1;
    return size;
}

// Q12 - delete an element at desired position from an array.
int delete_by_position(int* ar, int size){
    int pos;
    printf("\nENTER THE POSITION : ");
    scanf("%d",&pos);
    pos-=1;

    if(pos > size-1 || pos < 0){
        printf("\nINVALID POSITION");
        exit(0);
    }

    int i;

    for(i=pos;i<size-1;i++)
        ar[i] = ar[i+1];

    return size-1;
}

// Q13 find the second largest element in an array.
void find_second_largest(int* ar, int size){
    int i,j,temp;

    for(i=0;i<3;i++)
        for(j=i+1;j<size;j++)
            if(ar[i] < ar[j]){
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
    printf("\nSECOND LARGEST ELEMENT IS : %d",ar[1]);
}


// Q14 find the second smallest element in an array.
void find_second_smallest(int* ar, int size){
    int i,j,temp;

    for(i=0;i<3;i++)
        for(j=i+1;j<size;j++)
            if(ar[i] > ar[j]){
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
    printf("\nSECOND SMALLEST ELEMENT IS : %d",ar[1]);
}


// Q15 - to find sum of rows an columns of a Matrix.
void find_sum_of_row_column(int ar[100][100],int *m, int*n){
    int i,j,temp;
    printf("\nSUM OF ROWS");
    for(i=0;i<*m;i++){
        temp=0;
        printf("\n ROW %d : ",i+1);
        for(j=0;j<*n;j++){
            temp+=ar[i][j];
        }
        printf(" %d ",temp);
    }

    printf("\nSUM OF COLUMNS");
    for(i=0;i<*m;i++){
        temp=0;
        printf("\n COLUMN %d : ",i+1);
        for(j=0;j<*n;j++){
            temp+=ar[j][i];
        }
        printf(" %d ",temp);
    }
}


// Q16 - print lower triangular of a given matrix.
void print_lower_triangular_matrix(int ar[100][100],int *m, int *n){
    int i,j;

    printf("\nLOWER TRIANGULAR MATRIX : \n");
    for(i=0;i<*m;i++){
        for(j=0;j<*n;j++){
            if(i >= j)
                printf(" %d",ar[i][j]);
        }
        printf("\n");
    }
}


// Q15 - print upper triangular of a given matrix.
void print_upper_triangular_matrix(int ar[100][100],int *m, int *n){
    int i,j;

    printf("\nUPPER TRIANGULAR MATRIX : \n");
    for(i=0;i<*m;i++){
        for(j=0;j<*n;j++){
            if(i <= j)
                printf(" %d",ar[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
}


// Q18 - find a pair with given sum in the array.
void find_pair_with_given_sum(int* ar,int size){

    sort_array_asc(ar,size);

    int sum;
    printf("\nENTER THE SUM : ");
    scanf("%d",&sum);


    int front = 0;
    int end = size-1;

    while(front <= end){
        if (ar[front] + ar[end] < sum)
            front++;
        if (ar[front] + ar[end] > sum)
            end--;
        if (ar[front] + ar[end] == sum){
            printf("\nPAIR FOUND :: %d %d",ar[front],ar[end]);
            return;
        }
    }

    printf("\nPAIR NOT FOUND!");
}

// Q19 - find the majority element of an array.
int find_first_occurrence(int* ar, int size){
    int mid = size/2;
    int element = ar[mid];

    while(ar[mid-1] == element && mid != 0)
        mid--;

    return mid;
}

void find_majority_elements(int* ar, int size){
    sort_array_asc(ar,size);

    int pos = find_first_occurrence(ar,size);
    if (ar[pos] == ar[pos+(size/2)])
        printf("\nMAJORITY ELEMENT : %d",ar[pos]);
    else
        printf("\nMAJORITY ELEMENT DOES\'T EXIST");

}


// Q20 - find the number occurring odd number of times in an array.
void find_odd_occurrence(int* ar, int size){
    int discard[size];
    int i,j;

    for(i=0;i<size;)
        discard[i++] = 0;

    int counter;
    printf("\nODD OCCURRENCE LIST :: \n");
    for(i=0;i<size;i++){
        if(discard[i] != -1){
            counter=1;
            for(j=i+1;j<size;j++){
                if(ar[i] == ar[j]){
                    counter++;
                    discard[j]=-1;
                }
            }
            if(counter%2 == 1){
                printf("\nNUMBER HAVING ODD OCCURRENCE : %d",ar[i]);
            }
        }
    }
}


// Q21 - find the largest sum of contiguous subarray of an array.
void find_largest_sum_of_contiguous_subarray(int* ar, int size){
    int i,j,n;
    int outer=0, inner=1;
    int sum = *ar, temp=0;

    for(n=0;n<size-1;n++){
        for(i=0;i<size-outer;i++){
            for(j=i;j<i+inner;j++){
                //printf(" %d",ar[j]);
                temp+=ar[j];
            }
            //printf(",");
            //printf(" -> %d",temp);
            if(sum<temp){
                sum = temp;
            }
            temp=0;
        }
        //printf("\n");
        outer++;
        inner++;
    }
    printf("\nLARGEST SUM OF CONTIGUOUS SUBARRAY OF THIS ARRAY :: %d ",sum);
}


//Q22 - find the missing number from a given array. There are no duplicates in list.
void find_missing_number(int* ar, int size){
    int max=*ar, min=*ar;
    int i,j,flag;

    for(i=1;i<size;i++){
        if(max<ar[i])
            max = ar[i];
        if(min>ar[i])
            min = ar[i];
    }

    printf("\nMISSING ELEMENTS :: ");
    for(i=min+1;i<max;i++){
        flag=0;
        for(j=0;j<size;j++){
            if(ar[j] == i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf(" %d",i);
        }
    }
}


// Q23 - rotate an array by N positions.
void rotate_by_position(int* ar, int size){
    int pos;
    printf("\nENTER THE POSITION : ");
    scanf("%d",&pos);

    int i, j,temp;

    for(i=0;i<pos;i++){
        temp = ar[0];
        for(j=1;j<size;j++){
            ar[j-1] = ar[j];
        }
        ar[size-1]=temp;
    }

    show_array(ar,size);
}


// Q24 - the ceiling in a sroted array.
void find_ceiling(int* ar, int size){
    sort_array_asc(ar,size);

    int ceiling_value=-1,x,i;

    printf("\nENTER THE X : ");
    scanf("%d",&x);

    for(i=size-1;i>=0;i--)
        if(ar[i] > x || x == ar[i])
            ceiling_value = ar[i];

    printf("\nCEILING VALUE IS : %d",ceiling_value);
}

// Q25 - next greater elements in a given unsorted array.
void find_next_greater_element(int* ar, int size){
    int i,input,flag=0;
    printf("\nENTER THE SEARCH KEY : ");
    scanf("%d",&input);

    int upper_bound;
    for(i=0;i<size;i++){
        if(ar[i] > input){
            upper_bound = ar[i];
            flag=1;
            break;
        }
    }

    if(flag==0){
        printf("\nNEXT GREATER ELEMENT IS : -1");
    }

    for(i=0;i<size;i++){
        if(ar[i] > input && ar[i] < upper_bound){
            upper_bound = ar[i];
        }
    }

    printf("\nNEXT GREATER ELEMENT IS : %d",upper_bound);
}

// Q26 - find the two repeating elements in a given array.
void find_two_repeating_elements(int* ar, int size){
    int i,j;
    int counter=0;

    for(i=0;i<size;i++){
        if (counter == 2)
            return;
        for(j=i+1;j<size;j++){
            if(ar[i] == ar[j]){
                counter++;
                printf("\nREPEATING ELEMENT %d",ar[i]);
                break;
            }
        }
    }
}

// Q27 - find two elements whose sum is closest to zero.
void find_sum_close_to_zero(int* ar, int size){
    int i,n,start=0;
    int min=*ar, min_index=-1;
    int temp;

    for(n=1;n<=2;n++){
        for(i=start;i<size;i++){
            if(min > ar[i]){
                min = ar[i];
                min_index=i;
            }
        }
        //printf(" %d",min);
        //printf(" %d",min_index);
        temp = ar[min_index];
        ar[min_index] = ar[start];
        ar[start] = temp;
        start++;
        min = ar[start];
    }
    printf("\nTWO ELEMENTS SUM CLOSEST TO ZERO %d %d :: %d",ar[0],ar[1],ar[0]+ar[1]);
}

// Q28 - to find the row with maximum number of 1s.The given 2D array
void find_max_one(int ar[100][100],int *m, int *n){
    int oldcounter=-1,counter=0,row=-1;
    int i,j;

    for(i=0;i<*m;i++){
        counter=0;
        for(j=0;j<*n;j++){
            if(ar[i][j] == 1){
                counter++;
            }
        }
        if(oldcounter < counter){
            oldcounter = counter;
            row = i;
        }
    }
    printf("\nROW %d HAVEING MAX NUMBER OF 1.",row+1);
}

// Q29 - count the number of inversion in a given array.
void inverse(int* ar, int size){
    int i,j,inverse=0;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(ar[i]>ar[j])
                inverse++;
        }
    }
    printf("\nNUMBER OF INVERSE IN THE ARRAY : %d",inverse);
}

// Union
void union_operation (int* ar1, int size1, int* ar2, int size2){
    int temp[size1+size2],temp_index=0;
    int index1=0,index2=0;

    sort_array_asc(ar1,size1);
    sort_array_asc(ar2,size2);

//    show_array(ar1,size1);
//    show_array(ar2,size2);

    while (index1<size1 && index2<size2){
        if(ar1[index1] < ar2[index2])
            temp[temp_index++] = ar1[index1++];
        if(ar1[index1] > ar2[index2])
            temp[temp_index++] = ar2[index2++];
        if (ar1[index1] == ar2[index2]){
            temp[temp_index++] = ar2[index2++];
            index1++;
        }
    }

    while(index1<size1)
        temp[temp_index++] = ar1[index1++];
    while(index2<size2)
        temp[temp_index++] = ar2[index2++];

    printf("\nUNION : ");
    int i;
    for(i=0;i<temp_index;i++)
        printf(" %d",temp[i]);

}

// Intersection
void intersection_operation (int* ar1, int size1, int* ar2, int size2){
    int temp[size1+size2],temp_index=0;
    int index1=0,index2=0;

    sort_array_asc(ar1,size1);
    sort_array_asc(ar2,size2);

    while (index1<size1 && index2<size2){
        if(ar1[index1] < ar2[index2])
            index1++;
        if(ar1[index1] > ar2[index2])
            index2++;
        if (ar1[index1] == ar2[index2]){
            temp[temp_index++] = ar2[index2++];
            index1++;
        }
    }

    printf("\nINTERSECTION : ");
    int i;
    for(i=0;i<temp_index;i++)
        printf(" %d",temp[i]);
}

// minus
void minus_operation (int* ar1, int size1, int* ar2, int size2){
    int temp[size1+size2],temp_index=0;
    int index1=0,index2=0;

    sort_array_asc(ar1,size1);
    sort_array_asc(ar2,size2);

    while (index1<size1 && index2<size2){
        if(ar1[index1] < ar2[index2])
            temp[temp_index++] = ar1[index1++];
        if(ar1[index1] > ar2[index2])
            index2++;
        if (ar1[index1] == ar2[index2]){
            index2++;
            index1++;
        }
    }

    while(index1<size1)
        temp[temp_index++] = ar1[index1++];

    printf("\nMINUS : ");
    int i;
    for(i=0;i<temp_index;i++)
        printf(" %d",temp[i]);

}


//find k th smallest element.
int find_kth_min_element(int* ar, int size){
    int k;
    printf("\nENTER k th VELUE : ");
    scanf("%d",&k);

    int i,j,temp;
    int min = 0,start_index=0;
    for(i=0;i<k;i++){
        min = start_index;
        for(j=start_index;j<size;j++){
            if(ar[min] > ar[j]){
                min = j;
            }
        }
        temp = ar[start_index];
        ar[start_index] = ar[min];
        ar[min] = temp;

        start_index++;
    }

    printf("\n%d th SMALLEST ELEMENT IS : %d ",k,ar[min]);

    return ar[min];
}