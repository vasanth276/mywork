import java.util.*;

class game {
    private int noOfGuesses;
    private int number;
    private int guessNumber;

    game() {
        Random rand = new Random();
        number = rand.nextInt(101);
        noOfGuesses = 0;
        guessNumber = 0;
    }

    public int getGuess() {
        return guessNumber;
    }

    public int getNoGuess() {
        return noOfGuesses;
    }

    public void takeUserInput(int guess) {
        guessNumber = guess;
        noOfGuesses += 1;
    }

    public int isCorrect() {
        if (guessNumber == number)
            return 1;
        else if (guessNumber > number)
            return 2;
        else
            return 3;
    }
}

public class game1 {
    public static void main(String[] args) {
        int x;
        Scanner in = new Scanner(System.in);
        game player = new game();
        while (true) {
            System.out.print("Guess Number between (0-100) : ");
            player.takeUserInput(in.nextInt());
            System.out.println(player.getGuess());
            x = player.isCorrect();
            if (x == 1) {
                System.out.println("got the Number, Your score : " + (player.getNoGuess()));
                System.exit(0);
            } else if (x == 2)
                System.out.println("Guessed number is high");
            else
                System.out.println("Guessed number is low");
        }
    }

}
