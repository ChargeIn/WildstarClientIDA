#include "../winhttp.h"

//----- (0000000140685DB0) ----------------------------------------------------
__int64 __fastcall sub_140685DB0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	int* v5; // rcx
	int* v6; // rdx
	__int64 v7; // rax
	__int64 v8; // rax
	unsigned __int64* v9; // rdx
	unsigned __int64 v10; // r8
	__int64(__fastcall * *v12)(); // [rsp+20h] [rbp-108h] BYREF
	char v13[8]; // [rsp+28h] [rbp-100h] BYREF
	_WORD* v14; // [rsp+30h] [rbp-F8h]
	_WORD* v15; // [rsp+38h] [rbp-F0h]
	__int128 v16; // [rsp+E0h] [rbp-48h]
	int* v17; // [rsp+F0h] [rbp-38h]
	__int64 v18; // [rsp+100h] [rbp-28h] BYREF
	__int64 v19; // [rsp+108h] [rbp-20h]

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		sub_1400B6F30((__int64)&v12);
		v17 = 0i64;
		v16 = 0i64;
		v12 = off_140B69230;
		v5 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v16 = v5;
		*((_QWORD*)&v16 + 1) = v5;
		v17 = v5 + 4;
		if (v5)
			*(_WORD*)v5 = 0;
		v6 = (int*)sub_14034BDD0((__int64)v5, *(_DWORD*)(v4 + 72));
		if (v6)
		{
			v7 = 0i64;
			if (*(_WORD*)v6)
			{
				do
					++v7;
				while (*((_WORD*)v6 + v7));
			}
			sub_14001C480((__int64)v13, v6, (int*)((char*)v6 + 2 * v7));
		}
		else if (v14 != v15)
		{
			*v14 = 0;
			v15 = v14;
		}
		v8 = sub_1400B7660(&v12);
		v9 = (unsigned __int64*)sub_14018F0E0(&v18, *(unsigned __int16**)(v8 + 8))[1];
		if (v9)
		{
			v10 = -1i64;
			do
				++v10;
			while (*((_BYTE*)v9 + v10));
			sub_140058710((__int64)a1, v9, v10);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v19)
			sub_14018B900(v19, 0);
		if ((_QWORD)v16)
			sub_14018B900(v16, 0);
		sub_1400B7390(&v12);
	}
	else
	{
		sub_140058710((__int64)a1, (unsigned __int64*)&unk_1409D14C2, 0i64);
	}
	return 1i64;
}
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140685DB0: using guessed type char var_100[8];

