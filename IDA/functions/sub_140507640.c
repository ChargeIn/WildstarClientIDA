#include "../winhttp.h"

//----- (0000000140507640) ----------------------------------------------------
__int64 __fastcall sub_140507640(_QWORD* a1)
{
	__int64 v2; // rsi
	__int64 v3; // rax
	unsigned int v5; // edi
	unsigned __int64 v6; // rdx
	_DWORD* v7; // rcx
	_DWORD* v8; // rax
	bool v9; // cf
	_QWORD* v10; // rdi
	int v11; // eax
	double v12; // xmm0_8
	unsigned __int64 v13; // rcx
	unsigned __int64 v14; // rax
	unsigned __int64 v15; // rcx
	bool v16; // zf
	char v17; // al
	__int64 v18; // rax
	unsigned __int64 v19; // [rsp+58h] [rbp+10h] BYREF

	v2 = sub_140506EA0(a1);
	v3 = a1[2];
	if (!v2)
	{
		*(_DWORD*)(v3 + 8) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v5 = 0;
	if ((int)((v3 - a1[3]) >> 4) >= 3)
	{
		v5 = (int)sub_140056C40(a1, 3u);
		if (v5 >= 2)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	v6 = a1[2];
	v7 = dword_140A12138;
	v8 = (_DWORD*)(a1[3] + 16i64);
	v9 = (unsigned __int64)v8 < v6;
	if ((unsigned __int64)v8 >= v6)
		goto LABEL_11;
	if (v8 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64))
	{
		v9 = (unsigned __int64)v8 < v6;
	LABEL_11:
		if (v9)
			v7 = (_DWORD*)(a1[3] + 16i64);
		v11 = v7[2];
		if (v11 == 3 || v11 == 4 && sub_14005AC80((char*)(*(_QWORD*)v7 + 32i64), &v19))
		{
			v10 = (_QWORD*)(v2 + 232i64 * v5);
			v12 = sub_140056C40(a1, 2u);
			v13 = 0i64;
			if (v12 >= 9.223372036854776e18)
			{
				v12 = v12 - 9.223372036854776e18;
				if (v12 < 9.223372036854776e18)
					v13 = 0x8000000000000000ui64;
			}
			v10[136] = v13 + (unsigned int)(int)v12;
		}
		else
		{
			v10 = (_QWORD*)(v2 + 232i64 * v5);
			v10[136] = *(_QWORD*)sub_140056AB0(a1, 2u);
		}
		goto LABEL_21;
	}
	v10 = (_QWORD*)(v2 + 232i64 * v5);
	v10[136] = -1i64;
LABEL_21:
	v14 = v10[136];
	if (v14)
	{
		v15 = *(_QWORD*)(v2 + 1080);
		if (v15 > v14)
			v15 = v10[136];
		v16 = v15 == v10[135];
		v17 = 0;
		v10[135] = v15;
		if (!v16)
			v17 = 1;
		if (v17)
		{
			v10[138] = v10[137];
			*(_BYTE*)(v2 + 1076) = 0;
			*(_DWORD*)(v2 + 1072) = 0;
		}
		v18 = v10[135];
		v10[137] = v18;
		v10[138] = v18;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v2 + 568i64))(v2, 1i64);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

