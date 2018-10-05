package User;
import java.awt.FlowLayout;
import java.awt.GridLayout;

import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextArea;
import javax.swing.JTextField;
/**
 * 项目名称：Try
 * 类名称：Diagnose
 * 类描述：TODO
 * 创建人：李政恩
 * 创建时间：2018年8月6日 上午2:15:17
 */
public class Diagnose extends JPanel {
	JLabel doctor,address,time,result;
	JTextField doctor1,address1,time1;
	JTextArea result1;
	public Diagnose() {		
		JPanel jp1=new JPanel(new FlowLayout(FlowLayout.LEFT));
		doctor=new JLabel("主治医生：");
		doctor1=new JTextField(10);
		jp1.add(doctor);
		jp1.add(doctor1);
		address=new JLabel("会诊地点：");
		address1=new JTextField(10);
		jp1.add(address);
		jp1.add(address1);
		add(jp1,"North");
		JPanel jp2=new JPanel(new FlowLayout(FlowLayout.LEFT));
		time=new JLabel("会诊时间：");
		time1=new JTextField(10);
		jp2.add(time);
		jp2.add(time1);
		add(jp2, "Center");
		JPanel jp3=new JPanel(new FlowLayout(FlowLayout.LEFT));
		result=new JLabel("诊断记录：");
		result1=new JTextArea(20, 20);
		jp3.add(result);
		jp3.add(result1);
		add(jp3, "South");
	}
}
