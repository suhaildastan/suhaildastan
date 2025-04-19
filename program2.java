public class program2 {
    import java.text.DateFormat;
    import java.text.SimpleDateFormat;
    import java.util.Scanner;
     
        public static void main(String[] args) 	{
            Scanner sc = new Scanner(System.in);
            System.out.print("\n Enter a date in dd/mm/yyyy format : ");
            String date = sc.next();
            if(dateValidation(date)==true)
                System.out.println(" Date is valid");
            else
                System.out.println(" Date is invalid");  }
    private static boolean dateValidation(String date)    {
    boolean status = false;
    String pattern = "(0?[1-9]|[12][0-9]|3[01])/(0?[1-9]|1[0-2])/([1-9][0-9]{3})";
        if (date.matches(pattern)) {
        DateFormat dateFormat = new SimpleDateFormat("dd/MM/yyyy");
        dateFormat.setLenient(false);
        try {
            dateFormat.parse(date);
            status = true;	} catch (Exception e) {	status = false;	}
            }  return status;    }    }
     

