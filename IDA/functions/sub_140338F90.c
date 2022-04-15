#include "../winhttp.h"

//----- (0000000140338F90) ----------------------------------------------------
__int64 __fastcall sub_140338F90(__int64 a1, SOCKET* a2)
{
	SOCKET v3; // rax
	SOCKET v4; // rbx
	int Error; // ebx
	const wchar_t* v6; // r9
	int v7; // eax
	__int64 v9; // [rsp+30h] [rbp-1028h] BYREF
	char optval[4]; // [rsp+38h] [rbp-1020h] BYREF
	char Buffer[4096]; // [rsp+40h] [rbp-1018h] BYREF

	v3 = socket(2, 1, 0);
	v4 = v3;
	if (v3 == -1i64)
	{
		Error = WSAGetLastError();
		sub_1401B3450(Buffer, 2048i64, Error);
		v6 = L"socket()";
		goto LABEL_8;
	}
	if (ioctlsocket(v3, -2147195266, &argp) == -1)
	{
		Error = WSAGetLastError();
		sub_1401B3450(Buffer, 2048i64, Error);
		v6 = L"ioctlsocket()";
	LABEL_8:
		v9 = 0x141DECD90i64;
		sub_1401A3130(11, 0, &v9, v6, Error, Buffer);
		return 2147500037i64;
	}
	*(_DWORD*)optval = 1;
	if (setsockopt(v4, 6, 1, optval, 4) != -1)
	{
		*a2 = v4;
		return 0i64;
	}
	v7 = WSAGetLastError();
	sub_140338EB0((__int64)L"setsockopt(TCP_NODELAY)", v7, 0i64);
	return 2147500037i64;
}
// 140AF28E8: using guessed type wchar_t aSocket[9];
// 140AF29D8: using guessed type wchar_t aIoctlsocket[14];
// 140AF2A28: using guessed type wchar_t aSetsockoptTcpN[24];
// 140338F90: using guessed type char Buffer[4096];

