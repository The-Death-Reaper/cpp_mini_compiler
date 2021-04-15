#include <string>
#include <unordered_map>
#include <set>
#include <vector>
#include <iomanip>
using namespace std;

class node
{
	private:
		int line_no_;
		string identifier_;
		string type_;
		string value_;
		int size_;
		int scope_;
		int column_no_;

	public:
		//Constructors
		node();
		node(int line_no, string identifier, string type, string value, int size, int scope, int column_no);
		node(int line_no, string identifier, string type, string value, string size, int scope, int column_no);
		node(const node &copy_node);
		// node& operator=(const node&) = delete;

		//Getters
		int get_line_no() const;
		int get_col_no() const;
		string get_identifier() const;
		string get_type() const;
		string get_value() const;
		int get_size() const;
		int get_scope() const;

		//Setters
		void set_line_no(int line_no);
		void set_col_no(int col_no);
		void set_identifier(string identifier);
		void set_type(string type);
		void set_value(string value);
		void set_size(int size);
		void set_scope(int scope);

		//Displays all attributes
		friend ostream& operator<<(ostream& o, const node&);

		//Used for ordering in set
		bool operator<(const node &d) const;
		};

class st : public node
{
	// The Symbol Table is a hashmap. 
	// The key is the identifier. The value is a set(tree) with comparison done based on line number. 
	// Should be useful to find scope, by going to the closest line number which is lesser than the required line.
	vector<vector<unordered_map<string, node*>>> tree;
	

	public:
	//Default constructor
		st();
		//Overloaded insert functions, inserts into the hashmap.
		void create_map(int scope);
		void insert(int line_no, string identifier, string type, string value, int size, int scope, int column_no);
		void insert(node* _node);
		// void identifier_exists(int line_no, string identifier, int scope);
		node* get_node(string identifier, int scope);
		int declaration_exists(string identifier, int scope);
		int declaration_exists_scope(string identifier, int scope);
		char* identifier_value(string identifier,int scope);
		bool update_identifier(string identifier, int scope, string value);
		//Displays based on identi`fier, and the corresponding sorted line numbers.
		friend ostream& operator<<(ostream& o, const st&);
		void display();
};

char *conversion(vector<string> vec_s);

class quple
{
	
	public:
	string statement_;
	string op_;
	string arg1_;
	string arg2_;
	string result_;
	int line_no_;
	int col_no_;
	quple();
	quple(string statement, string op, string arg1, string arg2, string result, int line_no_, int col_no_);
	quple(string statement, string op, string arg1, string result);

};

class quple_list
{
private:
	vector<quple*> q_list;
public:
	quple_list();
	~quple_list();
	void insert_quple(quple*);
	string get_three_addr(quple*);
	void disp_three_addr();
	string get_previous_temp();
};

