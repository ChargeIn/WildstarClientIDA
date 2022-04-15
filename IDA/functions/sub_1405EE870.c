#include "../winhttp.h"

//----- (00000001405EE870) ----------------------------------------------------
__int64 __fastcall sub_1405EE870(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rdi
	int* v7; // rdx
	__int64 v8; // rcx
	int* v9; // rdi
	unsigned __int16* v10; // r14
	__int64 v11; // rax
	__int64 v12; // rax
	unsigned __int64* v13; // rdx
	unsigned __int64 v14; // r8
	__int64 v16; // [rsp+20h] [rbp-108h] BYREF
	unsigned __int16* v17; // [rsp+28h] [rbp-100h]
	unsigned __int16* v18; // [rsp+30h] [rbp-F8h]
	unsigned __int16* v19; // [rsp+38h] [rbp-F0h]
	__int64(__fastcall * *v20)(); // [rsp+40h] [rbp-E8h] BYREF
	char v21[184]; // [rsp+48h] [rbp-E0h] BYREF
	__int128 v22; // [rsp+100h] [rbp-28h]
	int* v23; // [rsp+110h] [rbp-18h]

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0
		&& (v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120)), (v6 = v5) != 0)
		&& *(_QWORD*)(v5 + 8))
	{
		sub_1400B6F30((__int64)&v20);
		v23 = 0i64;
		v22 = 0i64;
		v20 = off_140B69230;
		v7 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v22 = v7;
		*((_QWORD*)&v22 + 1) = v7;
		v23 = v7 + 4;
		if (v7)
			*(_WORD*)v7 = 0;
		v9 = (int*)sub_14034BDD0(v8, *(_DWORD*)(*(_QWORD*)(v6 + 8) + 52i64));
		v10 = (unsigned __int16*)sub_14018B280(16i64, 0);
		v17 = v10;
		v18 = v10;
		v19 = v10 + 8;
		if (v10)
			*v10 = 0;
		if (v9)
		{
			v11 = 0i64;
			if (*(_WORD*)v9)
			{
				do
					++v11;
				while (*((_WORD*)v9 + v11));
			}
			sub_14001C480((__int64)v21, v9, (int*)((char*)v9 + 2 * v11));
			v12 = sub_1400B7660(&v20);
			if ((__int64*)v12 != &v16)
			{
				sub_14001C480((__int64)&v16, *(int**)(v12 + 8), *(int**)(v12 + 16));
				v10 = v17;
			}
		}
		v13 = (unsigned __int64*)sub_14018F0E0(&v16, v10)[1];
		if (v13)
		{
			v14 = -1i64;
			do
				++v14;
			while (*((_BYTE*)v13 + v14));
			sub_140058710((__int64)a1, v13, v14);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v17)
			sub_14018B900((__int64)v17, 0);
		if (v10)
			sub_14018B900((__int64)v10, 0);
		if ((_QWORD)v22)
			sub_14018B900(v22, 0);
		sub_1400B7390(&v20);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 1405EE96C: variable 'v8' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 1405EE870: using guessed type char var_E0[184];

