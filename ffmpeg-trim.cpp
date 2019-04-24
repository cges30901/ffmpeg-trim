#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    string start, duration, input, output;
    cout<<"輸入原始檔案名稱：";
    cin>>input;
    cout<<"輸入輸出檔案名稱：";
    cin>>output;
    cout<<"輸入開始時間：";
    cin>>start;
    cout<<"輸入長度：";
    cin>>duration;
    string command="ffmpeg ";
    if(start!="0"){
        command+="-ss "+start+" ";
    }
    command+="-i "+input+" -c copy ";
    if(duration!="0"){
        command+="-t "+duration+" ";
    }
    command+=output;
    cout<<command<<endl;
    system(command.c_str());
    return 0;
}
