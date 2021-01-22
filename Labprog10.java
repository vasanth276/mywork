import java.awt.*;
import java.awt.event.*;
class frame implements ActionListener{
    Frame f;
    public void actionPerformed(ActionEvent e3){
        f.setVisible(false);
    }
    frame(String msg){
        f = new Frame("Error");
        f.setSize(300,200);
        f.setVisible(true);
        f.setLayout(null);
        TextField tf = new TextField(msg);
        tf.setBounds(10,30,280,40);
        f.add(tf);
        Button b = new Button("CLOSE");
        b.setBounds(10,80,70,30);
        b.addActionListener(this);
        f.add(b);
    }
    
}
class Division1 extends Frame implements ActionListener{
    TextField tf1;
    TextField tf2;
    TextField tf3;
    Button b;
    Division1(){
        setSize(300,300);
        setVisible(true);
        setLayout(null);
        //textfield1 initialization
        tf1 = new TextField("Number1");
        tf1.setBounds(10,30,200,30);
        add(tf1);
        //textfield2 initialization
        tf2 = new TextField("Number2");
        tf2.setBounds(10,70,200,30);
        add(tf2);
        //division button creation
        b = new Button("/");
        b.setBounds(10, 110, 200, 30);
        b.addActionListener(this);
        add(b);
        //textfield3 initialization
        tf3 = new TextField("Output");
        tf3.setBounds(10,150,200,30);
        add(tf3);
    }
    public void actionPerformed(ActionEvent e){
        try{
            String num1=tf1.getText();
            int nu1=Integer.parseInt(num1);
            String num2=tf2.getText();
            int nu2=Integer.parseInt(num2);
            int result = nu1/nu2;
            tf3.setText(Integer.toString(result));
        }
        catch(NumberFormatException e2){
            frame fr = new frame(""+e2);
        }
        catch(ArithmeticException e1){
            frame fr = new frame(""+e1);
        }
    }
}
public class Labprog10 {
    public static void main(String[] args) {
        Division1 d = new Division1();
    }
    
}
