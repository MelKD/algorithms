import java.util.Arrays;

public class SelectionSortingAlg {

	public static void main(String[] args) {
		int[] lst = {4,9,7,1,3,6,5};
//		int[] lst = {24,19,77,1,305,46,55}; //test different nums

		    int n = lst.length;
		    int temp;
		    for (int i = 0; i < n; i++) {
		        int smallest = lst[i];
		        for (int j = i+1; j < n; j++) {
		            if (lst[j] < smallest) {
		            	smallest = lst[j];
		                temp = lst[i];
		                lst[i] = smallest;
		                lst[j] = temp;
		            }
		        } 
		    }
	    System.out.println(Arrays.toString(lst));

	}

}
