import java.awt.*;

public class awt extends Frame{
    awt(){
        Button b = new Button("Click me mf");
        b.setBounds(30,100,80,30);
        add(b);
        setSize(300,300);
        setLayout(null);
        setVisible(true);

    }
    public static void main(String[] args) {
        awt a  = new awt();
    }
}