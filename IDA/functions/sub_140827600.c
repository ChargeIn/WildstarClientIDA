#include "../winhttp.h"

//----- (0000000140827600) ----------------------------------------------------
__int64 __fastcall sub_140827600(LPCWCH lpWideCharStr)
{
	__int64 result; // rax
	unsigned __int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rax
	int v5; // eax
	unsigned __int64 v6; // rdi
	CHAR v7; // cl
	CHAR* v8; // rdx
	CHAR* v9; // r8
	int v10; // ecx
	CHAR MultiByteStr[272]; // [rsp+40h] [rbp-118h] BYREF

	if (!lpWideCharStr)
		return 0i64;
	v2 = -1i64;
	v3 = -1i64;
	do
		++v3;
	while (lpWideCharStr[v3]);
	if ((unsigned int)(v3 + 1) >= 0x103)
	{
		v5 = 259;
	}
	else
	{
		v4 = -1i64;
		do
			++v4;
		while (lpWideCharStr[v4]);
		v5 = v4 + 1;
	}
	v6 = 0i64;
	WideCharToMultiByte(0, 0, lpWideCharStr, v5, MultiByteStr, 259, 0i64, 0i64);
	MultiByteStr[259] = 0;
	do
		++v2;
	while (MultiByteStr[v2]);
	if (v2)
	{
		do
		{
			v7 = MultiByteStr[v6];
			if ((unsigned __int8)(v7 - 65) <= 0x19u)
				MultiByteStr[v6] = v7 + 32;
			++v6;
		} while (v6 < v2);
	}
	v8 = MultiByteStr;
	v9 = &MultiByteStr[(unsigned int)v2];
	result = 2166136261i64;
	if (MultiByteStr < v9)
	{
		do
		{
			v10 = (unsigned __int8)*v8++;
			result = v10 ^ (unsigned int)(16777619 * result);
		} while (v8 < v9);
	}
	return result;
}

