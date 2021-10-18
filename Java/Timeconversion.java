import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

public class Timeconversion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
		String s = sc.nextLine(); //07:05:45PM
		DateFormat dateIn = new SimpleDateFormat( "hh:mm:ssaa");
		DateFormat dateOut = new SimpleDateFormat( "HH:mm:ss");

	 	Date date = null;
                try {
                    date = dateIn.parse(s);
                } catch (ParseException e) {
                    // TODO Auto-generated catch block
                    e.printStackTrace();
                }
            
		    if( date != null ){
			String myDate = dateOut.format(date);
			System.out.println(myDate);

            sc.close();
        }
    }
}
