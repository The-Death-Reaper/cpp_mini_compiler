#include "node.hpp"
#include <string>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

//Node
node::node() {}

node::node(int line_no, string identifier, string type, string value, int size, int scope, int column_no)
: line_no_(line_no), identifier_(identifier), type_(type), value_(value), size_(size), scope_(scope), column_no_(column_no) {}

node::node(int line_no, string identifier, string type, string value, string size, int scope, int column_no)
: line_no_(line_no), identifier_(identifier), type_(type), value_(value), size_(stoi(size)), scope_(scope), column_no_(column_no) {}

node::node(const node &copy_node)
: line_no_(copy_node.line_no_), identifier_(copy_node.identifier_), type_(copy_node.type_), value_(copy_node.value_), size_(copy_node.size_), scope_(copy_node.scope_), column_no_(copy_node.column_no_) {}

int node::get_line_no() const
{
    return line_no_;
}

string node::get_identifier() const
{
    return identifier_;
}

string node::get_type() const
{
    return type_;
}

string node::get_value() const
{
    return value_;
}

int node::get_size() const
{
    return size_;
}

int node::get_scope() const
{
    return scope_;
}

void node::set_scope(int scope)
{
    this->scope_ = scope;
}

void node::set_line_no(int line_no)
{
    this->line_no_ = line_no;
}

void node::set_col_no(int col_no)
{
    this->column_no_ = col_no;
}

void node::set_identifier(string identifier)
{
    this->identifier_ = identifier;
}

void node::set_type(string type)
{
    this->type_ = type;
}

void node::set_value(string value)
{
    this->value_ = value;
}

void node::set_size(int size)
{
    this->size_ = size;
}

ostream& operator<<(ostream& o, const node& n)
{
    o << left << setw(13) << n.identifier_;
    o << left << setw(15) << n.type_;
    o << left << setw(12) << n.value_;
    o << left << setw(12) << n.size_;
    o << left << setw(13) << n.line_no_;
    o << left << setw(15) << n.column_no_;
    o << left << setw(12) << n.scope_;

    return o << "\n";
}

bool node::operator<(const node& rhs) const
{

    if (this->get_scope() == rhs.get_scope())
        return this->get_line_no() < rhs.get_line_no();

    return this->get_scope() < rhs.get_scope();
}

// Abstract Syntax Tree
// The constructor creates the ast/symbol table for global scope
ast::ast()
{
    vector<unordered_map<string, node>> temp;
    tree.push_back(temp);
    unordered_map<string, node> temp1;
    tree[0].push_back(temp1);
}

void ast::create_map(int scope)
{
    if (scope >= tree.size())
    {
        vector<unordered_map<string, node>> temp;
        tree.push_back(temp);
    }
    unordered_map<string, node> temp1;
    tree[scope].push_back(temp1);
    return;
}
void ast::insert(int line_no, string identifier, string type, string value, int size, int scope, int column_no)
{
    unordered_map<string, node> &temp = tree[scope].back();
    temp[identifier] = node(line_no, identifier, type, value, size, scope, column_no);
}

void ast::insert(node _node)
{
    string identifier = _node.get_identifier();
    int scope = _node.get_scope();

    unordered_map<string, node> &temp = tree[scope].back();
    temp[identifier] = _node;
}

ostream& operator<<(ostream& o, const ast& tree_h)
{

	// o << tree_h.tree.size() << "\n\n";
	// tree_h.tree.size(): Max Scope Depth
    for (int i = 0; i < tree_h.tree.size(); ++i)
    {
        // o << "Symbol Table Number: " << i << "\n";

		// o << tree_h.tree[i].size() << "\n\n";
        for (int j = 0; j < tree_h.tree[i].size(); ++j)
        {
			// o << tree_h.tree[i][j].size() << "\n\n";
			o << "Symbol Table Number: " << i << "." << j << "\n";
			o << "---------------------------------------------------------------------------------------------------" << "\n";
			o << "SNo \t|\tToken \t|\tDatatype\t|\tValue\t|\tSize\t|\tLine No\t|\tColumn No\t|\tScope\t\n";
			o << "---------------------------------------------------------------------------------------------------" << "\n";
			int k = 0;
            for (auto &it1 : tree_h.tree[i][j])
            {	
				++k;
				o << left << setw(14) << k;
                o << it1.second;
            }
        }
        o << "\n";
    }
	return o << "\n";
}
// void ast::display()
// {
// 	// cout << tree.size() << "\n\n";
//     for (int i = 0; i < tree.size(); ++i)
//     {
//         cout << "Symbol Table Number: " << i << "\n";
// 		cout << "-----------------------------------------------------------" << "\n";
// 		cout << "SNo \t|\tToken \t|\tDatatype\t|\tValue\t|\tSize\t|\tLine No\t|\tColumn No\t|\tScope\t\n";
// 		cout << "-----------------------------------------------------------" << "\n";
// 		// cout << tree[i].size() << "\n\n";
//         for (int j = 0; j < tree[i].size(); ++j)
//         {	
// 			// cout << tree[i][j].size() << "\n\n";
// 			int k = 0;
//             for (auto &it1 : tree[i][j])
//             {	
// 				++k;
// 				cout << left << setw(14) << k;
//                 cout << it1.second;
//             }
//         }
//         cout << "\n";
//     }
// }

// void ast::identifier_exists(int line_no, string identifier, int scope)
// {
// if(tree.find(identifier)==tree.end()){
//     cout<<"Identifier Doesn't Exist\n";
//     return;
// }
// // auto set_iterator = tree.find(identifier)->second;
// // auto set_iterator = *temp1;
// auto set_iterator = tree[identifier];
// node temp_node;
// temp_node.set_line_no(line_no);
// temp_node.set_identifier(identifier);

// for(auto i:set_iterator){
//     i.disp_node();
// }
// auto set_element_iterator = set_iterator.lower_bound(temp_node);
// if(set_element_iterator == set_iterator.begin()){
//     if()
// }
// cout<<"NERE\n";
// set_element_iterator->disp_node();
// auto temp_
// }

int ast::declaration_exists(string identifier, int scope)
{
    // cout<<"INSIDE FUNCTIOn\n";

    // n is scope
    int n = scope;
    while (n >= 0)
    {
        unordered_map<string, node> &temp = tree[n].back();
        if (temp.find(identifier) != temp.end())
        {
            return 1;
        }
        n--;
    }
    return 0;
}


bool ast::update_identifier(string identifier, int scope, string value)
{
    // cout<<"INSIDE FUNCTIOn\n";

    // n is scope
    int n = scope;
    cout<< "\nID:"<<identifier<<"\n";
    while (n >= 0)
    {
        unordered_map<string, node> &temp = tree[n].back();
        if (temp.find(identifier) != temp.end())
        {
            temp[identifier].set_value(value);
            return 1;
        }
        n--;
    }
    return 0;
}



int ast::declaration_exists_scope(string identifier, int scope)
{
    // cout<<"INSIDE FUNCTIOn\n";

    // n is scope

    unordered_map<string, node> &temp = tree[scope].back();
    if (temp.find(identifier) != temp.end())
    {
        return 1;
    }
    return 0;
}

char* ast::identifier_value(string identifier, int scope)
{
    // cout<<"INSIDE FUNCTIOn\n";

    // n is scope
    int n = scope;
    while (n >= 0)
    {
        unordered_map<string, node> &temp = tree[n].back();
        if (temp.find(identifier) != temp.end())
        {
            vector <string> temp1{temp[identifier].get_value()};
            return conversion(temp1);
            // return 1;
        }
        n--;
    }
    char* temp1= new char[2];
    temp1[0]='0';
    temp1[1]='\0';
    return temp1;
}

char *conversion(vector<string> vec_s)
{
    string temp;
    for (auto &i : vec_s)
    {
        // cout << i << "\n";
        temp += i;
    }

    char *writable = new char[temp.size() + 1];
    std::copy(temp.begin(), temp.end(), writable);
    writable[temp.size()] = '\0'; // don't forget the terminating 0
    return writable;
}