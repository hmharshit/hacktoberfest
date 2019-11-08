import java.util.*;

class Multiples_of_3_and_5{
	public static void main(String [] args){
		Scanner scan = new Scanner(System.in);
		while(scan.hasNext()){
			long num = scan.nextLong();
			long total =0;
			for(int i=3;i<num;i++){
				if(i%3==0 || i%5==0){
					total += i;
				}
			}
			System.out.println(total);
		}
	}

}