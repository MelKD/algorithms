import java.util.Arrays;

public class BubbleSort {

	public static void main(String[] args) {
		int[] lst = {4,7,9,1,3,6,5};
//		int[] lst = {24,19,77,1,305,46,55}; //test different nums

	    int n = lst.length;
	    int temp = 0;
	    boolean swap;
	    
	    do {
	    	swap = false;
	    	for (int i = 0; i < n-1; i++) {
	    		if (lst[i] > lst[i+1]) {
	    			temp = lst[i];
	    			lst[i] = lst[i+1];
	    			lst[i+1] = temp;
	    			swap = true;
	    		} 
	    	}
	    } while (swap == true);
	    
    System.out.println(Arrays.toString(lst));

	}
	
}
