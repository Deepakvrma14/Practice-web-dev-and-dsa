import java.awt.*; 

import javax.swing.*; 

import java.awt.event.*; 

public class menu extends JFrame { 

// menubar 

static JMenuBar mb; 



// JMenu 

static JMenu x; 



// Menu items 

static JMenuItem m1, m2, m3; 



// create a frame 

static JFrame f; 



public static void main(String[] args) 

{

{ 

f = new JFrame("Menu demo");    // create a frame 

mb = new JMenuBar();     // create a menubar 

x = new JMenu("Menu");    // create a menu

// create menuitems 

m1 = new JMenuItem("MenuItem1"); 

m2 = new JMenuItem("MenuItem2"); 

m3 = new JMenuItem("MenuItem3"); 



// add menu items to menu 

x.add(m1); 

x.add(m2); 

x.add(m3); 



// add menu to menu bar 

mb.add(x); 



// add menubar to frame 

f.setJMenuBar(mb); 



// set the size of the frame 

f.setSize(500, 500); 

f.setVisible(true); 

} 

} 