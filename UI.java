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
 * 项目名称：Try
 * 类名称：UI
 * 类描述：TODO
 * 创建人：李政恩
 * 创建时间：2018年8月6日 上午2:14:04
 */
public class UI extends JFrame implements ActionListener, TreeSelectionListener{
	//定义UI界面
	JPanel user,welcome;					//主面板
	JSplitPane function,main;				//分隔区
	JButton message,pconsultation,oconsultation,register,appointment;	//功能区按钮
	JLabel welcomeLabel;
	//JTree相关组件定义
	JTree insert;	
	DefaultMutableTreeNode patient,A,A0,A1,A1_1,A2,A2_1,A3,B,B0,B1,B1_1,B2,B2_1,B3,C,C0,C1,C1_1,C2,C2_1,C3;
	
	String object;	//用作JTree事件侦听的String
	public UI() {
		super("用户信息");
		
		JDialog oconsultation1=new JDialog();
		oconsultation1.setTitle("请选择您想要咨询的医生");
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
		register1.setTitle("挂号");
		register1.setLayout(new GridLayout(7,1));
        JLabel uname=new JLabel("监护人用户名：");
        JTextField uname1=new JTextField(20);
        JLabel iname=new JLabel("子用户号：");
        JTextField iname1=new JTextField(20);
        JLabel tname=new JLabel("病人真实姓名：");
        JTextField tname1=new JTextField(20);
        JLabel sex=new JLabel("性别：");
        ButtonGroup c=new ButtonGroup();
        JRadioButton boy=new JRadioButton("男",true);
        JRadioButton gril=new JRadioButton("女");
        c.add(boy);
        c.add(gril);
        JLabel age=new JLabel("年龄：");
        JTextField age1=new JTextField(20);
        JLabel tel=new JLabel("手机：");
        JTextField tel1=new JTextField(20);
        JButton submit=new JButton("挂号");
        JButton reset=new JButton("重置");
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
        appointment1.setTitle("预约上门");
        appointment1.setLayout(new GridLayout(9,1));
        JLabel uname2=new JLabel("监护人用户名：");
        JTextField uname3=new JTextField(20);
        JLabel iname2=new JLabel("子用户号：");
        JTextField iname3=new JTextField(20);
        JLabel tname2=new JLabel("病人真实姓名：");
        JTextField tname3=new JTextField(20);
        JLabel sex1=new JLabel("性别：");
        ButtonGroup c1=new ButtonGroup();
        JRadioButton boy1=new JRadioButton("男",true);
        JRadioButton gril1=new JRadioButton("女");
        c1.add(boy1);
        c1.add(gril1);
        JLabel age2=new JLabel("年龄：");
        JTextField age3=new JTextField(20);
        JLabel tel2=new JLabel("手机：");
        JTextField tel3=new JTextField(20);
        JLabel address=new JLabel("地址：");
        JTextField address1=new JTextField(20);
        JLabel time=new JLabel("预约时间：");
        JTextField time1=new JTextField(20);
        JButton submit1=new JButton("预约");
        JButton reset1=new JButton("重置");
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

		function=new JSplitPane(JSplitPane.VERTICAL_SPLIT);	//定义上下分隔的分隔面板
		function.setDividerLocation(50);	//设置上分隔区大小
		function.setEnabled(false);			//设置分割条不可移动
		
		//功能区
		user=new JPanel();
		user.setLayout(new FlowLayout(FlowLayout.LEFT));
		message=new JButton("用户信息");
		message.setUI(new BEButtonUI().setNormalColor(BEButtonUI.NormalColor.green));
		message.setForeground(Color.white);
		pconsultation=new JButton("公共咨询");
		pconsultation.setUI(new BEButtonUI().setNormalColor(BEButtonUI.NormalColor.lightBlue));
		pconsultation.setForeground(Color.white);
		oconsultation=new JButton("一对一咨询");
		oconsultation.setUI(new BEButtonUI().setNormalColor(BEButtonUI.NormalColor.blue));
		oconsultation.setForeground(Color.white);
		register=new JButton("挂号");
		register.setUI(new BEButtonUI().setNormalColor(BEButtonUI.NormalColor.red));
		register.setForeground(Color.white);
		appointment=new JButton("预约上门");
		appointment.setUI(new BEButtonUI().setNormalColor(BEButtonUI.NormalColor.green));
		appointment.setForeground(Color.white);
		user.add(message);
		user.add(pconsultation);
		user.add(oconsultation);
		user.add(register);
		user.add(appointment);
		function.setLeftComponent(user);		//将功能区
		
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
		
		//信息区
		main=new JSplitPane();				//定义左右分割的分隔面板
		main.setDividerLocation(0.0d);		//默认合上左分隔区
		function.setEnabled(false);
		//JTree子节点的定义，将信息条理化管理，后期使用动态添加
		patient=new DefaultMutableTreeNode("用户信息",true);
		A=new DefaultMutableTreeNode("子用户1");
		A0=new DefaultMutableTreeNode("子用户1的基本信息");
		A1=new DefaultMutableTreeNode("子用户1的诊断记录");
		A1_1=new DefaultMutableTreeNode("诊断记录");
		A2=new DefaultMutableTreeNode("电子处方");
		A2_1=new DefaultMutableTreeNode("电子处方");
		A3=new DefaultMutableTreeNode("消息提示");
		A1.add(A1_1);
		A2.add(A2_1);
		A.add(A0);
		A.add(A3);
		A.add(A1);
		A.add(A2);
		
		B=new DefaultMutableTreeNode("子用户2");
		B0=new DefaultMutableTreeNode("子用户2的基本信息");
		B1=new DefaultMutableTreeNode("子用户2的诊断记录");
		B1_1=new DefaultMutableTreeNode("诊断记录");
		B2=new DefaultMutableTreeNode("电子处方");
		B2_1=new DefaultMutableTreeNode("电子处方");
		B3=new DefaultMutableTreeNode("消息提示");
		B1.add(B1_1);
		B2.add(B2_1);
		B.add(B0);
		B.add(B3);
		B.add(B1);
		B.add(B2);
		
		C=new DefaultMutableTreeNode("子用户3");
		C0=new DefaultMutableTreeNode("子用户3的基本信息");
		C1=new DefaultMutableTreeNode("子用户3的诊断记录");
		C1_1=new DefaultMutableTreeNode("诊断记录");
		C2=new DefaultMutableTreeNode("电子处方");
		C2_1=new DefaultMutableTreeNode("电子处方");
		C3=new DefaultMutableTreeNode("消息提示");
		C1.add(C1_1);
		C2.add(C2_1);
		C.add(C0);
		C.add(C3);
		C.add(C1);
		C.add(C2);
		
		patient.add(A);
		patient.add(B);
		patient.add(C);
		
		insert=new JTree(patient);			//将子节点加进JTree中
		main.setLeftComponent(insert);		//将JTree放入下分隔区的左边
		//初始界面
		welcome=new JPanel();
		welcomeLabel=new JLabel("欢迎使用Accompany系统");
		welcome.add(welcomeLabel);
		main.setRightComponent(welcome);	//将界面添加进下分隔区的右边
		main.setEnabled(false);				
		//设置分隔条不可移动
		function.setRightComponent(main);
		//将分隔面板加入窗口
		add(function);
		setMinimumSize(new Dimension(1200, 800));	//窗口最小太小
		setLocationRelativeTo(null);
		setVisible(true);
		message.addActionListener(this);
		insert.addTreeSelectionListener(this);
	}
	
	
	
	/* 
	 * JTree事件处理
	 */
	public void valueChanged(TreeSelectionEvent e) {
		 DefaultMutableTreeNode node = (DefaultMutableTreeNode) insert
	                .getLastSelectedPathComponent();		//获得最后选择的根节点对象

	        if (node == null)
	            return;

	        object = (String)node.getUserObject();	//根据JTree所选的根节点来赋值
	        if (node.isLeaf()) {
	        	JOptionPane.showMessageDialog(this,object,"消息",JOptionPane.INFORMATION_MESSAGE);
	        	main.remove(welcome);	//移除初始界面，虽然好像不影响
	        	if (object.contains("基本信息")) {
	        		Message message=new Message();	//创建基本信息的面板，放入下右分隔区
	        		main.setRightComponent(message);
				}else if (object.contains("诊断记录")) {
					Diagnose diagnose=new Diagnose();	//创建诊断记录的面板，放入下右分隔区
					main.setRightComponent(diagnose);
				}else if (object.contains("电子处方")) {
					Prescript prescript=new Prescript();	//创建电子处方的面板，放入下右分隔区
					main.setRightComponent(prescript);
				}
	        }	
	}
	
	
	/* 
	 * 事件处理
	 */
	public void actionPerformed(ActionEvent e) {
		Object object=e.getSource();
		if (object==message) {	//病人管理按钮的事件处理
			main.setDividerLocation(200);	//打开JTree信息区
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
