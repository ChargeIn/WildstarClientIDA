#include "../winhttp.h"

//----- (00000001408273A0) ----------------------------------------------------
__int64 __fastcall sub_1408273A0(LPCWCH lpWideCharStr)
{
	__int64 v1; // rbx
	__int64 v2; // rax
	__int64 v3; // rax
	int v4; // eax
	unsigned __int64 v5; // rbx
	int* v6; // rax
	unsigned int v7; // ebx
	int v9[68]; // [rsp+40h] [rbp-228h] BYREF
	CHAR MultiByteStr[280]; // [rsp+150h] [rbp-118h] BYREF

	v1 = -1i64;
	v2 = -1i64;
	do
		++v2;
	while (lpWideCharStr[v2]);
	if ((unsigned int)(v2 + 1) >= 0x103)
	{
		v4 = 259;
	}
	else
	{
		v3 = -1i64;
		do
			++v3;
		while (lpWideCharStr[v3]);
		v4 = v3 + 1;
	}
	WideCharToMultiByte(0, 0, lpWideCharStr, v4, MultiByteStr, 259, 0i64, 0i64);
	MultiByteStr[259] = 0;
	do
		++v1;
	while (MultiByteStr[v1]);
	v5 = v1 + 1;
	if (v5 > 0x103)
		v5 = 259i64;
	sub_1407EA1F8(v9, 260i64, MultiByteStr, v5);
	*((_BYTE*)v9 + v5) = 0;
	v6 = v9;
	if (LOBYTE(v9[0]))
	{
		while (*(_BYTE*)v6 != 46)
		{
			v6 = (int*)((char*)v6 + 1);
			if (!*(_BYTE*)v6)
				goto LABEL_17;
		}
		*(_BYTE*)v6 = 0;
	}
LABEL_17:
	v7 = sub_140827510((char*)v9);
	sub_140843830(qword_140C61B58, v7, v9);
	return v7;
}
// 140C61B58: using guessed type __int64 qword_140C61B58;

