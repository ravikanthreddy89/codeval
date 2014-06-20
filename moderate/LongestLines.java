import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.*;
import java.util.Scanner;
import java.lang.*;


public class Main {


	
	public static void main(final String[] args)throws IOException{
		if(args.length<1){
			throw new RuntimeException("Must specify the path to the input file");
		}else if(args.length>1){
			throw new RuntimeException("Illegal input arguments specified");
		}
		
		Scanner input=null;
		int n;
		
		//open the file for reading...
		try {
			input=new Scanner(new File(args[0]));
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		
		// read the number of lines to be stored
		try{
			n=Integer.parseInt(input.nextLine());
		}catch(final NumberFormatException e){
			throw new RuntimeException("First line should be an integer");
		}
		
		//create a priority queue with that initial capacity
		Comparator<String> str=new Main.LengthComparator();
		java.util.PriorityQueue<String> pq= new java.util.PriorityQueue<String>(n, str);
		
		while(input.hasNext()){
			pq.add(input.nextLine());
		}
		
		for(int i=0;i<n;i++){
			final String print=pq.poll();
			if(print==null) break;
			System.out.println(print);
		}
		
		
	}// end of main method
	private static class LengthComparator implements Comparator<String>{
		@Override
		public int compare(final String a, final String b){
			if(a.length()< b.length()){
				return 1;
			}else{
				return -1;
			}
		}
	}
}
