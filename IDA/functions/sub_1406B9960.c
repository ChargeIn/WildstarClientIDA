#include "../winhttp.h"

//----- (00000001406B9960) ----------------------------------------------------
__int64 __fastcall sub_1406B9960(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rsi
	__int64 v5; // rsi
	__int64 v6; // rcx
	int* v7; // rcx
	int* v8; // rcx
	_QWORD* v9; // rax
	__int64 v10; // rcx
	int* v11; // rdx
	__int64 v12; // rax
	__int64 v13; // rax
	unsigned __int64* v14; // rdx
	unsigned __int64 v15; // r8
	unsigned __int64* v16; // rdx
	unsigned __int64 v17; // r8
	__int64 v19; // [rsp+20h] [rbp-108h] BYREF
	__int64 v20; // [rsp+28h] [rbp-100h]
	__int64(__fastcall * *v21)(); // [rsp+40h] [rbp-E8h] BYREF
	char v22[8]; // [rsp+48h] [rbp-E0h] BYREF
	_WORD* v23; // [rsp+50h] [rbp-D8h]
	_WORD* v24; // [rsp+58h] [rbp-D0h]
	__int128 v25; // [rsp+100h] [rbp-28h]
	int* v26; // [rsp+110h] [rbp-18h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& (v4 = *(_QWORD*)(v2 + 8)) != 0
		&& (v5 = *(_QWORD*)(v4 + 8)) != 0
		&& sub_14034BDD0(v3, *(_DWORD*)(*(_QWORD*)(v5 + 8) + 12i64))
		&& *sub_14034BDD0(v6, *(_DWORD*)(*(_QWORD*)(v5 + 8) + 12i64)))
	{
		sub_1400B6F30((__int64)&v21);
		v26 = 0i64;
		v25 = 0i64;
		v21 = off_140B69230;
		v7 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v25 = v7;
		*((_QWORD*)&v25 + 1) = v7;
		v26 = v7 + 4;
		if (v7)
			*(_WORD*)v7 = 0;
		v8 = sub_14018B280(96i64, 0);
		if (v8)
			v9 = (_QWORD*)sub_1404DB7E0((__int64)v8, *(_QWORD*)(qword_140C65898 + 120));
		else
			v9 = 0i64;
		sub_1400B7480((__int64)&v21, v9);
		v11 = (int*)sub_14034BDD0(v10, *(_DWORD*)(*(_QWORD*)(v5 + 8) + 12i64));
		if (v11)
		{
			v12 = 0i64;
			if (*(_WORD*)v11)
			{
				do
					++v12;
				while (*((_WORD*)v11 + v12));
			}
			sub_14001C480((__int64)v22, v11, (int*)((char*)v11 + 2 * v12));
		}
		else if (v23 != v24)
		{
			*v23 = 0;
			v24 = v23;
		}
		v13 = sub_1400B7660(&v21);
		v14 = (unsigned __int64*)sub_14018F0E0(&v19, *(unsigned __int16**)(v13 + 8))[1];
		if (v14)
		{
			v15 = -1i64;
			do
				++v15;
			while (*((_BYTE*)v14 + v15));
			sub_140058710((__int64)a1, v14, v15);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v20)
			sub_14018B900(v20, 0);
		if ((_QWORD)v25)
			sub_14018B900(v25, 0);
		sub_1400B7390(&v21);
	}
	else
	{
		v16 = (unsigned __int64*)sub_14018F0E0(&v19, word_1409F6DF4)[1];
		if (v16)
		{
			v17 = -1i64;
			do
				++v17;
			while (*((_BYTE*)v16 + v17));
			sub_140058710((__int64)a1, v16, v17);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v20)
			sub_14018B900(v20, 0);
	}
	return 1i64;
}
// 1406B99B0: variable 'v3' is possibly undefined
// 1406B99C5: variable 'v6' is possibly undefined
// 1406B9A6C: variable 'v10' is possibly undefined
// 1409F6DF4: using guessed type unsigned __int16 word_1409F6DF4[20];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 1406B9960: using guessed type char var_E0[8];

