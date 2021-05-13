#include<stdio.h>
#include "FunctionCollection.h"

void main(){

    int ar[100];
    int cpy[50];
    int matrix[100][100],m,n;
    int size, size2;

    size = input_array(ar);
    // size2 = input_array(cpy);
//    input_array2(matrix,&m,&n);

//    recursive_display_array(ar,size);
//    recursive_reverse_display_array(ar,size);
//    copy_array(ar, cpy, size);
//    count_duplicate(ar,size);
//    print_unique(ar,size);
//    merge_two_array(ar,cpy,size);
//    frequency_count(ar,size);
//    separate_odd_even(ar,size);
//    find_second_largest(ar,size);
//    find_second_smallest(ar,size);

//    print_upper_triangular_matrix(matrix,&m,&n);
//    print_lower_triangular_matrix(matrix,&m,&n);

//    find_pair_with_given_sum(ar,size);
//    find_majority_elements(ar,size);
//    find_odd_occurrence(ar,size);
//    find_largest_sum_of_contiguous_subarray(ar,size);
//    find_missing_number(ar,size);
//    rotate_by_position(ar,size);
//    find_ceiling(ar,size);
//    find_next_greater_element(ar,size);
//    find_two_repeating_elements(ar,size);
//    find_sum_close_to_zero(ar,size);

//    find_max_one(matrix,&m,&n);
//    inverse(ar,size);

//    union_operation(ar,size,cpy,size2);
//    intersection_operation(ar,size,cpy,size2);
    // minus_operation(ar,size,cpy,size2);

    find_kth_min_element(ar,size);

//    show_array2(matrix,&m,&n);
//    show_array(ar,size);

    printf("\n");
}
