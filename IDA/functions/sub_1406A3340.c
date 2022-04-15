#include "../winhttp.h"

//----- (00000001406A3340) ----------------------------------------------------
__int64 __fastcall sub_1406A3340(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // rax
	_QWORD* v7; // rax
	_QWORD* v8; // rdi
	__int64 v9; // rax
	__int64 v10; // rax
	int v11; // eax
	__int64 v12; // rax
	int v13; // eax
	__int64 v14; // rax
	int v15; // eax
	__int64 v16; // rax
	int v17; // r9d
	int v18; // edx
	__int64 v19; // rcx

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& (v4 = *(_QWORD*)(v2 + 8)) != 0
		&& (v5 = sub_1405A8A40(v3, *(_DWORD*)(v4 + 8))) != 0
		&& (v6 = *(_QWORD*)(v5 + 8)) != 0
		&& (v7 = (_QWORD*)sub_140489580(qword_140C65930, *(_DWORD*)(v6 + 428)), (v8 = v7) != 0i64)
		&& (v9 = *v7, *(_DWORD*)(v9 + 20))
		&& *(_DWORD*)(v9 + 24))
	{
		if ((dword_140DC4B10 & 1) != 0)
		{
			v17 = dword_140C8B02C;
		}
		else
		{
			dword_140DC4B10 |= 1u;
			v10 = sub_140200220(0x4A9u);
			if (v10)
				v11 = *(_DWORD*)(v10 + 4);
			else
				v11 = 20;
			dword_140C8B020 = v11;
			v12 = sub_140200220(0x4A9u);
			if (v12)
				v13 = *(_DWORD*)(v12 + 8);
			else
				v13 = 100;
			dword_140C8B024 = v13;
			v14 = sub_140200220(0x4A9u);
			if (v14)
				v15 = *(_DWORD*)(v14 + 12);
			else
				v15 = 200;
			dword_140C8B028 = v15;
			v16 = sub_140200220(0x4A9u);
			if (v16)
			{
				v17 = *(_DWORD*)(v16 + 16);
				dword_140C8B02C = v17;
			}
			else
			{
				v17 = 500;
				dword_140C8B02C = 500;
			}
		}
		v18 = 0;
		switch (*(_DWORD*)(*v8 + 24i64))
		{
		case 1:
			v18 = dword_140C8B020;
			break;
		case 2:
			v18 = dword_140C8B024;
			break;
		case 3:
			v18 = dword_140C8B028;
			break;
		case 4:
			v18 = v17;
			break;
		}
		v19 = a1[2];
		*(_DWORD*)(v19 + 8) = 3;
		*(double*)v19 = (double)v18;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 1406A3377: variable 'v3' is possibly undefined
// 140C65930: using guessed type __int64 qword_140C65930;
// 140C8B020: using guessed type int dword_140C8B020;
// 140C8B024: using guessed type int dword_140C8B024;
// 140C8B028: using guessed type int dword_140C8B028;
// 140C8B02C: using guessed type int dword_140C8B02C;
// 140DC4B10: using guessed type int dword_140DC4B10;

