package User;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.nio.channels.NonWritableChannelException;
import java.sql.ResultSet;

import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTextField;

//import javafx.scene.text.Font;
/**
 * ��Ŀ���ƣ�Try
 * �����ƣ�Message
 * ��������TODO
 * �����ˣ�������
 * ����ʱ�䣺2018��8��6�� ����2:16:24
 */
public class Message extends JScrollPane {
	JLabel patient_message,patient_name,patient_age,patient_gender,patient_guardian,patient_guardian_phone,
		   patient_phone,patient_number,patient_id,patient_id_type,patient_work,patient_blood,patient_address,patient_note;	
	JTextField name,age,gender,guardian,guardian_phone,phone,number,id,id_type,work,blood,address,note;
	public Message() {
		
		JPanel JJ=new JPanel();
		JJ.setLayout(new GridLayout(3, 1));
		JLabel J=new JLabel("�������ţ�");
		JTextField number1=new JTextField();
		JButton JB=new JButton("ȷ��");
		JJ.add(J);
		JJ.add(number1);
		JJ.add(JB);
		setViewportView(JJ);
		
		JB.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				JPanel jPanel=new JPanel();
				jPanel.setLayout(new GridLayout(8, 3));
				patient_message=new JLabel("������Ϣ��");
				jPanel.add(patient_message);
				jPanel.add(new JLabel(""));
				jPanel.add(new JLabel(""));
				String c=number1.getText();
				//System.out.println(c);
				
				DBHelper b=new DBHelper();	
				String sql="select * from doctor where ID="+c;
				b.select(sql);
				//System.out.println(DBHelper.ss);
				JPanel jp1=new JPanel();
				patient_name=new JLabel(" �������� ��");
				JLabel name1=new JLabel(DBHelper.ss);
				jp1.add(patient_name);
				jp1.add(name1);
				jPanel.add(jp1);
				
				JPanel jp2=new JPanel();
				patient_gender=new JLabel(" �����Ա� ��");
				gender=new JTextField(20);
				jp2.add(patient_gender);
				jp2.add(gender);
				jPanel.add(jp2);
				jPanel.add(new JLabel(""));
				
				
				DBHelper a=new DBHelper();
				String sql1="select * from doctor where ID="+c;
				a.select(sql1);
				//System.out.println(DBHelper.s);
				JPanel jp3=new JPanel();
				patient_age=new JLabel(" �������� ��");
				JLabel JLabel = new JLabel(DBHelper.s);//�����ݿ������������ʾ������ϣ������ݿ��д�����������
				jp3.add(patient_age);
				jp3.add(JLabel);
				jPanel.add(jp3);
				

				DBHelper d=new DBHelper();
				String sql2="select * from doctor where ID="+c;
				d.select(sql2);
				JPanel jp4=new JPanel();
				patient_number=new JLabel(" ������� ��");
				JLabel JLabel1 = new JLabel(DBHelper.sss);
				//number=new JTextField(20);
				jp4.add(patient_number);
				jp4.add(JLabel1);
				//jp4.add(number);
				jPanel.add(jp4);
				jPanel.add(new JLabel(""));
				
				JPanel jp5=new JPanel();
				patient_phone=new JLabel(" �ֻ����� ��");
				phone=new JTextField(20);
				jp5.add(patient_phone);
				jp5.add(phone);
				jPanel.add(jp5);
				
				JPanel jp6=new JPanel();
				patient_address=new JLabel(" סլ��ַ ��");
				address=new JTextField(20);
				jp6.add(patient_address);
				jp6.add(address);
				jPanel.add(jp6);
				jPanel.add(new JLabel(""));
				
				JPanel jp7=new JPanel();
				patient_id_type=new JLabel(" ֤������ ��");//
				id_type=new JTextField(20);
				jp7.add(patient_id_type);
				jp7.add(id_type);
				jPanel.add(jp7);
				
				JPanel jp8=new JPanel();
				patient_id=new JLabel(" ֤������ ��");
				id=new JTextField(20);
				jp8.add(patient_id);
				jp8.add(id);
				jPanel.add(jp8);
				jPanel.add(new JLabel(""));
				
				JPanel jp9=new JPanel();
				patient_guardian=new JLabel("  �໤��  ��");
				guardian=new JTextField(20);
				jp9.add(patient_guardian);
				jp9.add(guardian);
				jPanel.add(jp9);
				
				JPanel jp10=new JPanel();
				patient_guardian_phone=new JLabel("�໤�˺��룺");
				guardian_phone=new JTextField(20);
				jp10.add(patient_guardian_phone);
				jp10.add(guardian_phone);
				jPanel.add(jp10);
				jPanel.add(new JLabel(""));
				
				JPanel jp11=new JPanel();
				patient_blood=new JLabel(" Ѫ  ��   ��");
				blood=new JTextField(20);
				jp11.add(patient_blood);
				jp11.add(blood);
				jPanel.add(jp11);
				
				JPanel jp12=new JPanel();
				patient_note=new JLabel(" ��  ע   ��");
				note=new JTextField(20);
				jp12.add(patient_note);
				jp12.add(note);
				jPanel.add(jp12);
				setViewportView(jPanel);
				//TestJSch dbUtil = new TestJSch();
		    	//dbUtil.querryByid(TestJSch.SQL);
				
			}
		});
		
		
	}
}

