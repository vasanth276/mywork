import java.util.*;
public class dec2bin{
  public static void main(String[] args){
    Scanner in=new Scanner(System.in);
    System.out.print("Enter the binary number : ");
    int bin=in.nextInt();
    int[] arr=new int[15];
    int quotient=0;
    int remainder=0;
    int i=0;
    do{
      quotient=bin/2;
      remainder=bin%2;
      arr[i++]=remainder;
      bin=quotient;
    }while(quotient!=0);
    System.out.print("binary : ");
    for(int j=i-1;j>=0;j--){
      System.out.print(arr[j]);
    }
  }
}
