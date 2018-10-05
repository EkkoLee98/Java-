package User;
import java.awt.Color;
import java.awt.Dimension;
import java.awt.FlowLayout;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.concurrent.ScheduledExecutorService;

import javax.swing.*;
import javax.swing.event.TreeSelectionEvent;
import javax.swing.event.TreeSelectionListener;
import javax.swing.tree.DefaultMutableTreeNode;
import org.jb2011.lnf.beautyeye.ch3_button.BEButtonUI;

import User.TestJSch;
/**
 * ��Ŀ���ƣ�Try
 * �����ƣ�UI
 * ��������TODO
 * �����ˣ�������
 * ����ʱ�䣺2018��8��6�� ����2:14:04
 */
public class UI extends JFrame implements ActionListener, TreeSelectionListener{
	//����UI����
	JPanel user,welcome;					//�����
	JSplitPane function,main;				//�ָ���
	JButton message,pconsultation,oconsultation,register,appointment;	//��������ť
	JLabel welcomeLabel;
	//JTree����������
	JTree insert;	
	DefaultMutableTreeNode patient,A,A0,A1,A1_1,A2,A2_1,A3,B,B0,B1,B1_1,B2,B2_1,B3,C,C0,C1,C1_1,C2,C2_1,C3;
	
	String object;	//����JTree�¼�������String
	public UI() {
		super("�û���Ϣ");
		
		JDialog oconsultation1=new JDialog();
		oconsultation1.setTitle("��ѡ������Ҫ��ѯ��ҽ��");
		oconsultation1.setLayout(new GridLayout(3,1));
		JButton doctor1=new JButton("xxx");
		JButton doctor2=new JButton("xxx");
		JButton doctor3=new JButton("xxx");
		JPanel d1=new JPanel();
		d1.add(doctor1);
		JPanel d2=new JPanel();
		d2.add(doctor2);
		JPanel d3=new JPanel();
		d3.add(doctor3);
		oconsultation1.add(d1);
		oconsultation1.add(d2);
		oconsultation1.add(d3);
		oconsultation1.setLocationRelativeTo(this);
		
		JDialog register1=new JDialog();
		register1.setTitle("�Һ�");
		register1.setLayout(new GridLayout(7,1));
        JLabel uname=new JLabel("�໤���û�����");
        JTextField uname1=new JTextField(20);
        JLabel iname=new JLabel("���û��ţ�");
        JTextField iname1=new JTextField(20);
        JLabel tname=new JLabel("������ʵ������");
        JTextField tname1=new JTextField(20);
        JLabel sex=new JLabel("�Ա�");
        ButtonGroup c=new ButtonGroup();
        JRadioButton boy=new JRadioButton("��",true);
        JRadioButton gril=new JRadioButton("Ů");
        c.add(boy);
        c.add(gril);
        JLabel age=new JLabel("���䣺");
        JTextField age1=new JTextField(20);
        JLabel tel=new JLabel("�ֻ���");
        JTextField tel1=new JTextField(20);
        JButton submit=new JButton("�Һ�");
        JButton reset=new JButton("����");
        JPanel jp11=new JPanel();
        jp11.add(uname);
        jp11.add(uname1);
        JPanel jp12=new JPanel();
        jp12.add(iname);
        jp12.add(iname1);
        JPanel jp13=new JPanel();
        jp13.add(tname);
        jp13.add(tname1);
        JPanel psex=new JPanel();
        psex.add(sex);
        psex.add(boy);
        psex.add(gril);              
        JPanel jp14=new JPanel();
        jp14.add(age);
        jp14.add(age1);
        JPanel jp15=new JPanel();
        jp15.add(tel);
        jp15.add(tel1);
        JPanel jp16=new JPanel();
        jp16.add(submit);
        jp16.add(reset);
        register1.add(jp11);
        register1.add(jp12);
        register1.add(jp13);
        register1.add(psex);
        register1.add(jp14);
        register1.add(jp15);
        register1.add(jp16);
        register1.setLocationRelativeTo(this);
        
        JDialog appointment1=new JDialog();
        appointment1.setTitle("ԤԼ����");
        appointment1.setLayout(new GridLayout(9,1));
        JLabel uname2=new JLabel("�໤���û�����");
        JTextField uname3=new JTextField(20);
        JLabel iname2=new JLabel("���û��ţ�");
        JTextField iname3=new JTextField(20);
        JLabel tname2=new JLabel("������ʵ������");
        JTextField tname3=new JTextField(20);
        JLabel sex1=new JLabel("�Ա�");
        ButtonGroup c1=new ButtonGroup();
        JRadioButton boy1=new JRadioButton("��",true);
        JRadioButton gril1=new JRadioButton("Ů");
        c1.add(boy1);
        c1.add(gril1);
        JLabel age2=new JLabel("���䣺");
        JTextField age3=new JTextField(20);
        JLabel tel2=new JLabel("�ֻ���");
        JTextField tel3=new JTextField(20);
        JLabel address=new JLabel("��ַ��");
        JTextField address1=new JTextField(20);
        JLabel time=new JLabel("ԤԼʱ�䣺");
        JTextField time1=new JTextField(20);
        JButton submit1=new JButton("ԤԼ");
        JButton reset1=new JButton("����");
        JPanel jp111=new JPanel();
        jp111.add(uname2);
        jp111.add(uname3);
        JPanel jp121=new JPanel();
        jp121.add(iname2);
        jp121.add(iname3);
        JPanel jp131=new JPanel();
        jp131.add(tname2);
        jp131.add(tname3);
        JPanel psex1=new JPanel();
        psex1.add(sex1);
        psex1.add(boy1);
        psex1.add(gril1);              
        JPanel jp141=new JPanel();
        jp141.add(age2);
        jp141.add(age3);
        JPanel jp151=new JPanel();
        jp151.add(tel2);
        jp151.add(tel3);
        JPanel jp161=new JPanel();
        jp161.add(address);
        jp161.add(address1);
        JPanel jp171=new JPanel();
        jp171.add(time);
        jp171.add(time1);
        JPanel jp181=new JPanel();
        jp181.add(submit1);
        jp181.add(reset1);
        appointment1.add(jp111);
        appointment1.add(jp121);
        appointment1.add(jp131);
        appointment1.add(psex1);
        appointment1.add(jp141);
        appointment1.add(jp151);
        appointment1.add(jp161);
        appointment1.add(jp171);
        appointment1.add(jp181);
        appointment1.setLocationRelativeTo(this);

		function=new JSplitPane(JSplitPane.VERTICAL_SPLIT);	//�������·ָ��ķָ����
		function.setDividerLocation(50);	//�����Ϸָ�����С
		function.setEnabled(false);			//���÷ָ��������ƶ�
		
		//������
		user=new JPanel();
		user.setLayout(new FlowLayout(FlowLayout.LEFT));
		message=new JButton("�û���Ϣ");
		message.setUI(new BEButtonUI().setNormalColor(BEButtonUI.NormalColor.green));
		message.setForeground(Color.white);
		pconsultation=new JButton("������ѯ");
		pconsultation.setUI(new BEButtonUI().setNormalColor(BEButtonUI.NormalColor.lightBlue));
		pconsultation.setForeground(Color.white);
		oconsultation=new JButton("һ��һ��ѯ");
		oconsultation.setUI(new BEButtonUI().setNormalColor(BEButtonUI.NormalColor.blue));
		oconsultation.setForeground(Color.white);
		register=new JButton("�Һ�");
		register.setUI(new BEButtonUI().setNormalColor(BEButtonUI.NormalColor.red));
		register.setForeground(Color.white);
		appointment=new JButton("ԤԼ����");
		appointment.setUI(new BEButtonUI().setNormalColor(BEButtonUI.NormalColor.green));
		appointment.setForeground(Color.white);
		user.add(message);
		user.add(pconsultation);
		user.add(oconsultation);
		user.add(register);
		user.add(appointment);
		function.setLeftComponent(user);		//��������
		
		register.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				register1.setVisible(true);
				register1.pack();
				
			}
		});
		
		
		appointment.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				appointment1.setVisible(true);
				appointment1.pack();
				
			}
		});
		
		oconsultation.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				oconsultation1.setVisible(true);
				oconsultation1.setSize(300, 400);
				
			}
		});
		
		//��Ϣ��
		main=new JSplitPane();				//�������ҷָ�ķָ����
		main.setDividerLocation(0.0d);		//Ĭ�Ϻ�����ָ���
		function.setEnabled(false);
		//JTree�ӽڵ�Ķ��壬����Ϣ������������ʹ�ö�̬���
		patient=new DefaultMutableTreeNode("�û���Ϣ",true);
		A=new DefaultMutableTreeNode("���û�1");
		A0=new DefaultMutableTreeNode("���û�1�Ļ�����Ϣ");
		A1=new DefaultMutableTreeNode("���û�1����ϼ�¼");
		A1_1=new DefaultMutableTreeNode("��ϼ�¼");
		A2=new DefaultMutableTreeNode("���Ӵ���");
		A2_1=new DefaultMutableTreeNode("���Ӵ���");
		A3=new DefaultMutableTreeNode("��Ϣ��ʾ");
		A1.add(A1_1);
		A2.add(A2_1);
		A.add(A0);
		A.add(A3);
		A.add(A1);
		A.add(A2);
		
		B=new DefaultMutableTreeNode("���û�2");
		B0=new DefaultMutableTreeNode("���û�2�Ļ�����Ϣ");
		B1=new DefaultMutableTreeNode("���û�2����ϼ�¼");
		B1_1=new DefaultMutableTreeNode("��ϼ�¼");
		B2=new DefaultMutableTreeNode("���Ӵ���");
		B2_1=new DefaultMutableTreeNode("���Ӵ���");
		B3=new DefaultMutableTreeNode("��Ϣ��ʾ");
		B1.add(B1_1);
		B2.add(B2_1);
		B.add(B0);
		B.add(B3);
		B.add(B1);
		B.add(B2);
		
		C=new DefaultMutableTreeNode("���û�3");
		C0=new DefaultMutableTreeNode("���û�3�Ļ�����Ϣ");
		C1=new DefaultMutableTreeNode("���û�3����ϼ�¼");
		C1_1=new DefaultMutableTreeNode("��ϼ�¼");
		C2=new DefaultMutableTreeNode("���Ӵ���");
		C2_1=new DefaultMutableTreeNode("���Ӵ���");
		C3=new DefaultMutableTreeNode("��Ϣ��ʾ");
		C1.add(C1_1);
		C2.add(C2_1);
		C.add(C0);
		C.add(C3);
		C.add(C1);
		C.add(C2);
		
		patient.add(A);
		patient.add(B);
		patient.add(C);
		
		insert=new JTree(patient);			//���ӽڵ�ӽ�JTree��
		main.setLeftComponent(insert);		//��JTree�����·ָ��������
		//��ʼ����
		welcome=new JPanel();
		welcomeLabel=new JLabel("��ӭʹ��Accompanyϵͳ");
		welcome.add(welcomeLabel);
		main.setRightComponent(welcome);	//��������ӽ��·ָ������ұ�
		main.setEnabled(false);				
		//���÷ָ��������ƶ�
		function.setRightComponent(main);
		//���ָ������봰��
		add(function);
		setMinimumSize(new Dimension(1200, 800));	//������С̫С
		setLocationRelativeTo(null);
		setVisible(true);
		message.addActionListener(this);
		insert.addTreeSelectionListener(this);
	}
	
	
	
	/* 
	 * JTree�¼�����
	 */
	public void valueChanged(TreeSelectionEvent e) {
		 DefaultMutableTreeNode node = (DefaultMutableTreeNode) insert
	                .getLastSelectedPathComponent();		//������ѡ��ĸ��ڵ����

	        if (node == null)
	            return;

	        object = (String)node.getUserObject();	//����JTree��ѡ�ĸ��ڵ�����ֵ
	        if (node.isLeaf()) {
	        	JOptionPane.showMessageDialog(this,object,"��Ϣ",JOptionPane.INFORMATION_MESSAGE);
	        	main.remove(welcome);	//�Ƴ���ʼ���棬��Ȼ����Ӱ��
	        	if (object.contains("������Ϣ")) {
	        		Message message=new Message();	//����������Ϣ����壬�������ҷָ���
	        		main.setRightComponent(message);
				}else if (object.contains("��ϼ�¼")) {
					Diagnose diagnose=new Diagnose();	//������ϼ�¼����壬�������ҷָ���
					main.setRightComponent(diagnose);
				}else if (object.contains("���Ӵ���")) {
					Prescript prescript=new Prescript();	//�������Ӵ�������壬�������ҷָ���
					main.setRightComponent(prescript);
				}
	        }	
	}
	
	
	/* 
	 * �¼�����
	 */
	public void actionPerformed(ActionEvent e) {
		Object object=e.getSource();
		if (object==message) {	//���˹���ť���¼�����
			main.setDividerLocation(200);	//��JTree��Ϣ��
		}
		
	}
	
	
	
	
	public static void main(String[] args)
	{
	    try
	    {
	    	
	        org.jb2011.lnf.beautyeye.BeautyEyeLNFHelper.launchBeautyEyeLNF();
	    }
	    catch(Exception e)
	    {
	        //TODO exception
	    }
	    UI ui=new UI();
	}
	

}
