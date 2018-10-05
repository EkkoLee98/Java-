package User;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

import org.jfree.chart.axis.StandardTickUnitSource;

import com.mysql.fabric.xmlrpc.base.Value;

/**
 * 项目名称：Try
 * 类名称：DBHelper
 * 类描述：TODO
 * 创建人：李政恩
 * 创建时间：2018年8月6日 下午2:07:27
 */
public class DBHelper implements DBConfig {

	static int b;
	static int bb;
	static String s;
	static String ss;
	static String sss;
	public static void main(String[] args) {
			
	}
	public static Connection cons;
	public static Statement stats;
	public static ResultSet result;
	public static ResultSet result1;
	
	public DBHelper() {
		
		try {
			Class.forName("com.mysql.jdbc.Driver");
			cons= DriverManager.getConnection(url,user,password);
			stats=cons.createStatement();
		} catch (Exception e) {
			
			e.printStackTrace();
		}
	}
	public ResultSet select(String sql) {	
		 
		//String sql = "select * from keshe2 where uid=" + String.valueOf(uid);
		//String sql = "select age from doctor";
		try {
			result = stats.executeQuery(sql);	
			while(result.next()){
                //System.out.println( result.getString(5));
                s=result.getString(5);
                ss=result.getString(4);
                b=result.getInt(1);
                sss=String.valueOf(b);
            }
		} catch (Exception e) {		
			e.printStackTrace();
		}
		return result;
	}
	

/*	public ResultSet select1(String sql) {	
		 
		//String sql = "select * from keshe2 where uid=" + String.valueOf(uid);
		//String sql = "select age from doctor";
		try {
			result1 = stats.executeQuery(sql);	
			while(result1.next()){
               // System.out.println( result1.getString(4));
                bb=result1.getInt(1);
                ss=String.valueOf(bb);
            }
		} catch (Exception e) {		
			e.printStackTrace();
		}
		return result1;
	}*/
}	
