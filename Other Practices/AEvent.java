import java.awt.*;  

import java.awt.event.*;  
 
public class AEvent extends Frame implements ActionListener{
  TextField tf ;
  AEvent(){
    tf = new TextField();
    tf.setBounds(30,100,50,50);

    Button b = new Button("Click Here");
    b.setBounds(30, 50, 20, 30);

    b.addActionListener(this);


    add(b);
    add(tf);
    setSize(50,50);
    setLayout(null);
    setVisible(true);

  }
  public void actionPerformed(ActionEvent e){
    System.out.println("hello");
  }
  public static void main(String[] args) {
    AEvent E = new AEvent();
  }
}