int maxArea(int* height, int heightSize) {
    int result = 0;
    int i = 0;
    int j = heightSize-1;

    while(i<j) {
        int d = j-i;
        int h = 0;
        if (height[i]<height[j]) {
            h = height[i]; //cari terendah kedua
            i++;
        } else {
            h = height[j];
            j--;
        }

        int water = h*d;

        if (result<water) {
            result = water;
        }
    } 
    return result;
}