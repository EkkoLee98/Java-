package User;

/**
 * 项目名称：Try
 * 类名称：DBConfig
 * 类描述：TODO
 * 创建人：李政恩
 * 创建时间：2018年8月6日 下午2:05:45
 */
public interface DBConfig {
	//jdbc驱动
	String driver="com.mysql.jdbc.Driver";
	//连接到数据库，使用utf8字符集
	String url="jdbc:mysql://111.230.72.15:3306/mydb?useUnicode=true&characterEncoding=utf8";
	String user="root";
	String password="root";
	
}
