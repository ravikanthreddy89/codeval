import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Scanner;
import java.util.Stack;


public class PrefixExpression {

	public static float operation(float a, float b, char op){
		if(op=='*') return (float)a*b;
		if(op=='/') return (float)a/b;
		if(op=='+') return (float)a+b;
	
		return (float)0.0;
	}
	
	
	
	public static void main(String [] args){
		Scanner input=null;
		Stack<Float> stack=new Stack<Float>();
				
		try{
		
			input =new Scanner(new File(args[0]));
			String [] ips=input.nextLine().split(" ");
			
			for(int i=ips.length-1; i>=0;i--){
				if(ips[i].toCharArray()[0]== '*' || ips[i].toCharArray()[0]=='+' || ips[i].toCharArray()[0]=='/' ){
					float a=stack.pop();
					float b=stack.pop();
					float val=operation(a,b,ips[i].toCharArray()[0]);
					stack.push(operation(a,b,ips[i].toCharArray()[0]));
					
				}
				else stack.push(new Float(ips[i].toCharArray()[0]-48));
			}
			int out=(int)(float)stack.pop();
			System.out.println(out);
			
		}catch(FileNotFoundException e){
			System.out.println("File not found");
		}catch(IOException ioe){
			System.out.println("Error in i/o.");
		}catch(ArrayIndexOutOfBoundsException aoie){
			System.out.println("Array Index out of bounds");
		}catch(Exception e){
			e.printStackTrace();
		}
		
		
	}
}
