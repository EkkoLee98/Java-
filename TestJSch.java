package User;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

/**
 * ��Ŀ���ƣ�Try
 * �����ƣ�TestJSch
 * ��������TODO
 * �����ˣ�������
 * ����ʱ�䣺2018��8��6�� ����1:40:50
 */
public class TestJSch {

//  public  DBTest(){};
//  public  DBTest(String a){};

    //ip+port
    static String URL ="jdbc:mysql://111.230.72.15:3306/mydb";
    //uid
    static String userName="root"; //
    //pwd
    static String userPassword="root";   //���������Լ�������
    //mysql SQL;
    static String SQL="select age from doctor";
    //mysql connection
    static Connection conn =null;
    //prestatement
    static PreparedStatement pst = null;
    //resultSet
    static ResultSet rs = null;

    static {
        try {
            Class.forName("com.mysql.jdbc.Driver");
            System.out.println("�������سɹ���");
        } catch (ClassNotFoundException e) {
            System.out.println("û���ҵ�������");
            e.printStackTrace();
        }
    }
    public static void conectDB(String URL,String userName,String userPassword){
        try {
            conn = DriverManager.getConnection(URL, userName, userPassword);
            System.out.println("��������"+URL+"��\n���ݿ�"+conn);
        } catch (SQLException e) {
            System.out.println("��ȡ����ʧ��");
            e.printStackTrace();
        }
    }
    public static void querryByid(String SQL){
        try {
            pst = conn.prepareStatement(SQL);
            System.out.println("ִ�в�ѯ��");
            rs = pst.executeQuery();
            while(rs.next()){
                System.out.println( rs.getInt(1));
            }
        } catch (SQLException e) {
            System.out.println("��ѯʧ��");
            e.printStackTrace();
        }
    }
    public static void close(Connection conn,PreparedStatement pst, ResultSet rs){
        if(rs!=null){
            try {
                rs.close();
            } catch (SQLException e) {
                e.printStackTrace();
            }finally{
                if(pst!=null){
                    try {
                        pst.close();
                    } catch (SQLException e) {
                        e.printStackTrace();
                    }finally{
                        if(conn!=null){
                            try {
                                conn.close();
                                System.out.println("���ݿ������ѹرգ���Դ���ͷ�");
                            } catch (SQLException e) {
                                e.printStackTrace();
                            }finally{
                                conn=null;
                                pst= null;
                                rs = null;
                            }
                        }
                    }
                }
            }
        }
    }

    public static void main(String[] args) {
       /* TestJSch dbUtil = new TestJSch();
        dbUtil.conectDB(URL, userName, userPassword);
        dbUtil.querryByid(SQL);
        dbUtil.close(conn, pst, rs);*/
    }
}
