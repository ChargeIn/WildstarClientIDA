#include "../winhttp.h"

//----- (00000001407F1418) ----------------------------------------------------
__int64 __fastcall sub_1407F1418(LPWSTR lpWideCharStr, LPCCH lpMultiByteStr, unsigned __int64 a3, _OWORD* a4)
{
	unsigned int v8; // ebx
	__int64 v9; // rcx
	int v10; // r9d
	int v11; // eax
	__int128 v12; // [rsp+30h] [rbp-28h] BYREF
	__int64 v13; // [rsp+40h] [rbp-18h]
	char v14; // [rsp+48h] [rbp-10h]

	if (!lpMultiByteStr || !a3)
		return 0i64;
	if (!*lpMultiByteStr)
	{
		if (lpWideCharStr)
			*lpWideCharStr = 0;
		return 0i64;
	}
	sub_1407DE348((__int64)&v12, a4);
	if (!*(_QWORD*)(v12 + 312))
	{
		if (lpWideCharStr)
			*lpWideCharStr = *(unsigned __int8*)lpMultiByteStr;
		v8 = 1;
		goto LABEL_20;
	}
	v8 = 1;
	if (!(unsigned int)sub_1407DFE88(*lpMultiByteStr, &v12))
	{
		if (MultiByteToWideChar(*(_DWORD*)(v12 + 4), 9u, lpMultiByteStr, 1, lpWideCharStr, lpWideCharStr != 0i64))
			goto LABEL_20;
	LABEL_19:
		v8 = -1;
		*(_DWORD*)sub_1407DE1B0() = 42;
		goto LABEL_20;
	}
	v9 = v12;
	v10 = *(_DWORD*)(v12 + 212);
	if (v10 <= 1
		|| (int)a3 < v10
		|| (v11 = MultiByteToWideChar(*(_DWORD*)(v12 + 4), 9u, lpMultiByteStr, v10, lpWideCharStr, lpWideCharStr != 0i64),
			v9 = v12,
			!v11))
	{
		if (a3 < *(int*)(v9 + 212) || !lpMultiByteStr[1])
			goto LABEL_19;
	}
	v8 = *(_DWORD*)(v9 + 212);
LABEL_20:
	if (v14)
		*(_DWORD*)(v13 + 200) &= ~2u;
	return v8;
}

