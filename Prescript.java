package User;
import java.awt.BorderLayout;

import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.table.DefaultTableModel;

/**
 * ��Ŀ���ƣ�Try
 * �����ƣ�Prescript
 * ��������TODO
 * �����ˣ�������
 * ����ʱ�䣺2018��8��6�� ����2:15:51
 */
public class Prescript extends JScrollPane {
	DefaultTableModel model;
	JTable jTable;
	JButton note;
	public Prescript() {
		JPanel jp=new JPanel(new BorderLayout());
		model=new DefaultTableModel();
		model.setColumnIdentifiers(new Object[] {"���ʱ��","ҩ������","��ҩʱ��","�Ƿ�������ҩ","��ҩ����"});
		model.addRow(new Object[] {"","","","",""});
		jTable=new JTable(model);
		JScrollPane jScrollPane=new JScrollPane(jTable);
		jp.add(jScrollPane, "Center");
		JPanel jp1=new JPanel();
		note=new JButton("���ѷ�ҩ");
		jp1.add(note);
		jp.add(jp1,"South");
		setViewportView(jp);		
	}
}
