package User;
import java.awt.BorderLayout;

import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.table.DefaultTableModel;

/**
 * 项目名称：Try
 * 类名称：Prescript
 * 类描述：TODO
 * 创建人：李政恩
 * 创建时间：2018年8月6日 上午2:15:51
 */
public class Prescript extends JScrollPane {
	DefaultTableModel model;
	JTable jTable;
	JButton note;
	public Prescript() {
		JPanel jp=new JPanel(new BorderLayout());
		model=new DefaultTableModel();
		model.setColumnIdentifiers(new Object[] {"诊断时间","药物名称","服药时间","是否正常服药","服药进度"});
		model.addRow(new Object[] {"","","","",""});
		jTable=new JTable(model);
		JScrollPane jScrollPane=new JScrollPane(jTable);
		jp.add(jScrollPane, "Center");
		JPanel jp1=new JPanel();
		note=new JButton("提醒服药");
		jp1.add(note);
		jp.add(jp1,"South");
		setViewportView(jp);		
	}
}
