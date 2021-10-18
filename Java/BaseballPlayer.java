public class BaseballPlayer
{
   private static int countOfPlayers = 0;
   private int number;
   private double battingAverage;
   public BaseballPlayer(int id, double avg)
   {
      number = id;
      battingAverage = avg;
      countOfPlayers = countOfPlayers + 1;
   }
   public void showPlayer()
   {
      System.out.println("Player #" + number +
        " batting average is " + battingAverage +
        " There are " + countOfPlayers + " players");
   }


   public static void main(String[] args)
   {
      BaseballPlayer aCatcher = new BaseballPlayer(12, .218);
      BaseballPlayer aShortstop = new BaseballPlayer(31, .385);
      aCatcher.showPlayer();
      aShortstop.showPlayer();
      BaseballPlayer anOutfielder = new BaseballPlayer(44, .505);
      anOutfielder.showPlayer();
      aCatcher.showPlayer();
   }
}
