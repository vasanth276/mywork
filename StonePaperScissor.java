import java.util.Random;
import java.util.*;
public class StonePaperScissor {
    public static void main(String[] args){
        Random rand = new Random();
        Scanner in = new Scanner(System.in);
        int compInp=0;
        int computerScore=0,userScore=0;
        System.out.println("1.stone\n2.paper\n3.sissor");
        do{
            compInp = rand.nextInt(3);
            System.out.print("Enter the choice : ");
            switch(in.nextInt()){
                case 1 :
                if(compInp==1){
                    System.out.println("computer win");
                    computerScore++;
                }
                else{
                    System.out.println("user win");
                    userScore++;
                }
                break;
                case 2 :
                if(compInp==2){
                    System.out.println("computer win");
                    computerScore++;
                }
                else{
                    System.out.println("user win");
                    userScore++;
                }
                break;
                case 3 :
                if(compInp==0){
                    System.out.println("computer win");
                    computerScore++;
                }
                else{
                    System.out.println("user win");
                    userScore++;
                }
                break;
            }
            System.out.println("To end game press 0 : ");

        }while(in.nextInt()!=0);
        System.out.println("user score :"+userScore+"\ncomputer score :"+computerScore);
    }
}
