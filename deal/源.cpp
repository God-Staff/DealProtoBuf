#include<iostream>
#include "config.pb.h"
#include <fstream>
#include <string>
using namespace std;

int main ()
{
	qiuwanli::ConfigFile configfile;
	//configFile = &configfile;
	std::fstream input ("config", std::ios::in | std::ios::binary);
	if (!input) {
		std::cout << "fail" << endl;
	}

	if (!configfile.ParseFromIstream (&input))
	{	//打开失败
		std::cout << "Pares fail" << endl;
	}
	else
	{	//解析配置文件
		for (int i = 0; i < (configfile.config_size ()); ++i)
		{
			const qiuwanli::Config& config = configfile.config (i);
			//auto  ss=config.type();
			//auto ty = config.valuestring();
			if (qiuwanli::Config_Type_ThreadNumDown == config.type ())
			{
				cout << config.valuestring (); cout << config.type () << endl;
			}
			else if (qiuwanli::Config_Type_ThreadNumUp == config.type ())
			{
				cout << config.valuestring (); cout<< config.type () << endl;
			}
			else if (qiuwanli::Config_Type_FileUpSpeed == config.type ())
			{
				cout << config.valuestring (); cout<< config.type () << endl;
			}
			else if (qiuwanli::Config_Type_FileDownSpeed==config.type ())
			{
				cout << config.valuestring (); cout << config.type () << endl;
			}
			else if (qiuwanli::Config_Type_FilePath == config.type ())
			{
				cout << config.valuestring (); cout<< config.type () << endl;
			}
			else if (qiuwanli::Config_Type_DownFilePath == config.type ())
			{
				cout << config.valuestring (); cout<< config.type () << endl;
			}
		
		}
	}
	input.close ();

	return 0;
}