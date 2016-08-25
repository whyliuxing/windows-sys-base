#pragma once

#pragma pack(1)

//////////////////////////////////////////////////////////////////////////
//结果码

enum DS_RES_CODE
{
	DS_RES_CODE_SUCCESS = 0,		//成功
};

//////////////////////////////////////////////////////////////////////////
//命令码

enum DS_CMD
{
    DS_CMD_KEEP_ALIVE = 0,      //心跳
};

//////////////////////////////////////////////////////////////////////////
//协议头

typedef struct tagDSHead
{
	unsigned int nSize;	        //数据总大小
	unsigned short sCmd;        //命令
    unsigned short sResv;       //保留
}DS_HEAD, *PDS_HEAD;

#pragma pack()