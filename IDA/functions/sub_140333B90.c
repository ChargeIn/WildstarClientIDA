#include "../winhttp.h"

//----- (0000000140333B90) ----------------------------------------------------
signed int __fastcall sub_140333B90(IPAddr DestinationAddress, DWORD Timeout, _DWORD* a3)
{
	HANDLE File; // rbx
	signed int result; // eax
	__int16 RequestData[4]; // [rsp+40h] [rbp-58h] BYREF
	char ReplyBuffer[4]; // [rsp+48h] [rbp-50h] BYREF
	int v10; // [rsp+4Ch] [rbp-4Ch]
	int v11; // [rsp+50h] [rbp-48h]

	File = IcmpCreateFile();
	if (File == (HANDLE)-1i64)
		return -2147024890;
	strcpy((char*)RequestData, "W*");
	if (IcmpSendEcho(File, DestinationAddress, RequestData, 3u, 0i64, ReplyBuffer, 0x2Bu, Timeout))
	{
		if (!v10)
		{
			*a3 = v11;
			IcmpCloseHandle(File);
			return 0;
		}
		IcmpCloseHandle(File);
		result = v10;
	}
	else
	{
		IcmpCloseHandle(File);
		result = GetLastError();
	}
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}
// 140333B90: using guessed type char var_50[4];

