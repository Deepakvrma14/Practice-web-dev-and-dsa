// java program to access a oracle database using jdbc to enter and display the data

import java.sql.*;
import java.util.*;

public class jdbc {
    public static void main(String[] args) {
        try {
            Class.forName("oracle.jdbc.driver.OracleDriver");
            Connection con = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe", "system", "1234");
            Statement stmt = con.createStatement();
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter the name");
            String name = sc.nextLine();
            System.out.println("Enter the age");
            int age = sc.nextInt();
            System.out.println("Enter the address");
            String address = sc.nextLine();
            String query = "insert into student values('"+name+"',"+age+",'"+address+"')";
            stmt.executeUpdate(query);
            ResultSet rs = stmt.executeQuery("select * from student");
            while(rs.next()){
                System.out.println(rs.getString(1)+" "+rs.getInt(2)+" "+rs.getString(3));
            }
            con.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
