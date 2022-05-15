// a collection of cpp string functions.
// Source: https://blog.csdn.net/liunan199481/article/details/100033233 
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    char*p ="adcs";//char* 与string相互转换
    string s(p);
    cout<<s<<endl;
    cout<<s.c_str()<<endl;

    string s2 = to_string(10);//int->string
    cout<<s2<<endl;
    int a=88;
    stringstream ss;//int->string 需包含头文件<sstream>
    ss<<a;
    cout<<ss.str()<<endl;

    string s3("100dd");//string -> int
    cout<<atoi(s3.c_str())<<endl;

    for(int i=0; i<s3.size(); i++)//遍历
    {
        cout<<s3[i];
        if(i == s3.size()-1)
            cout<<endl;
    }

    string s4;
    getline(cin,s4);//接收带有空格的字符流
    cout<<s4<<endl;

    string s5("abcd");//增
    s5.insert(3,"e");//在第几个索引插入
    cout<<s5<<endl;//结果：abced

    s5.erase(0,1);//(pos,n)从pos开始删除n个
    cout<<s5<<endl;

    s5.replace(0,3,"test");//改，(pos,n) 从pos起，n个字符被后面的str代替
    cout<<s5<<endl;

    int pos =s5.find("test",0);//查，(find_str,pos),从pos位置找find_str,找到返回位置；默认pos==0
    cout<<pos<<endl;

    string sub_str = s5.substr(2,2);//截取子串(pos,n),从pos位置，截n长度的字串，不加n，默认截取到字符串尾；
    cout<<sub_str<<endl;
    return 0;
}



