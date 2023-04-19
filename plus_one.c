
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry = 1;
    int digits_array[digitsSize];
    for(int i=digitsSize-1; i>=0; i--) {
        int sum = digits[i] + carry;
        digits_array[i] = sum % 10;
        carry = sum / 10;
    }
    
    if(carry > 0) {
        *returnSize = digitsSize + 1;
        int* final = malloc((*returnSize) * sizeof(int));
        final[0] = carry;
        for(int i=0; i<digitsSize; i++) {
            final[i+1] = digits_array[i];
        }
        return final;
    } else {
        *returnSize = digitsSize;
        int* final = malloc(digitsSize * sizeof(int));
        for(int i=0; i<digitsSize; i++) {
            final[i] = digits_array[i];
        }
        return final;
    }
}

//easy