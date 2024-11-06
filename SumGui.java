package temp;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class TEst1 extends JFrame implements ActionListener {
	JLabel lobj;
	JTextField tobj;
	JLabel lobj2;
	JTextField tobj2;
	JButton b;
	JLabel lobj3;
	
	public Abc() {
		setLayout(new FlowLayout());
		
		lobj = new JLabel("First Number: ");
		tobj = new JTextField(20);
		
		lobj2 = new JLabel("Second Number: ");
		tobj2 = new JTextField(20);
	}
}

public class SumGui {

}
