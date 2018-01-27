public class LinearSearch {

	public static void main(String[] args) {
//		int[] linearNums = {4,9,7,1,3,6,5};
		int[] linearNums = {24,19,77,1,305,46,55}; //test different nums
		
		int linLength = linearNums.length;
		int findNum = 46;
		int check = 0;
		int temp = 0;
		
		for (int i = 0; i < linLength; i++) {
			if (linearNums[i] == findNum) {
				check = 1;
				temp = i;
			} 			
		}
		
		if (check == 1 ) {
			System.out.println("The number is in position: " + (temp+1)); //add one to make more 'human logical'
		} else {
			System.out.println("The number cannot be found.");
		}

	}

}