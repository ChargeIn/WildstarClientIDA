#include "../winhttp.h"

//----- (00000001404CE560) ----------------------------------------------------
__int64 __fastcall sub_1404CE560(_QWORD* a1, unsigned int a2, __int64 a3)
{
	__int64 v5; // r11
	__int64 v6; // r9
	__int64 v7; // r10
	__int64 v8; // rax
	__int64 v9; // rcx
	int* v11; // rax
	int* v12; // [rsp+20h] [rbp-28h] BYREF
	_QWORD v13[4]; // [rsp+28h] [rbp-20h] BYREF
	__int64 v14; // [rsp+68h] [rbp+20h] BYREF

	if (a2 >= 0x200 || !a3)
		return 2147942487i64;
	v5 = a1[2];
	v6 = *(_QWORD*)(v5 + 8);
	v7 = v5;
	v8 = v6;
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < a2)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v7 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v7 == v5 || (v14 = v7, a2 < *(_DWORD*)(v7 + 32)))
		v14 = v5;
	if (v14 == v5 || (v9 = *(_QWORD*)(v14 + 40)) == 0)
	{
		v11 = (int*)v5;
		while (v6)
		{
			if (*(_DWORD*)(v6 + 32) < a2)
			{
				v6 = *(_QWORD*)(v6 + 24);
			}
			else
			{
				v11 = (int*)v6;
				v6 = *(_QWORD*)(v6 + 16);
			}
		}
		if (v11 == (int*)v5 || a2 < v11[8])
		{
			LODWORD(v13[0]) = a2;
			v13[1] = 0i64;
			v14 = (__int64)v11;
			sub_140055C60((__int64)(a1 + 1), &v12, &v14, v13);
			v11 = v12;
		}
		*((_QWORD*)v11 + 5) = a3;
		return 0i64;
	}
	else
	{
		(*(void(__fastcall**)(_QWORD*, __int64))(*a1 + 48i64))(a1, v9);
		(*(void(__fastcall**)(_QWORD*, __int64))(*a1 + 48i64))(a1, a3);
		return 2147500037i64;
	}
}

