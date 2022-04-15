#include "../winhttp.h"

//----- (00000001405C2FD0) ----------------------------------------------------
__int64 __fastcall sub_1405C2FD0(_DWORD* a1, unsigned int a2, __int64 a3, unsigned int* a4)
{
	__int64 v4; // rbp
	__int64 v7; // r13
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rsi
	unsigned __int64 v12; // rbx
	__int64 v13; // rsi
	char* v14; // rax
	__int64 v15; // r15
	int v16; // eax
	int v17; // eax
	int v18; // eax
	int v19; // edx
	__int64 v20; // rax
	int v21; // r12d
	int v22; // eax
	_QWORD* v23; // rax
	unsigned __int64 v24; // rsi
	__int64 v25; // rsi
	int v26; // eax
	__int64 v27; // rcx
	__int64 v28; // rax
	unsigned int v29; // eax
	char* v30; // rax
	unsigned __int64 v31; // [rsp+20h] [rbp-38h]

	v4 = qword_140C65898;
	v7 = (int)a2;
	if (!*(_QWORD*)(qword_140C65898 + 27728))
		return 7i64;
	if (a3 && *(_DWORD*)(a3 + 12) != a2)
		return 4i64;
	if (a4)
	{
		if (!a3)
			return 9i64;
	}
	else if (!a3)
	{
		goto LABEL_14;
	}
	if (*(char*)(a3 + 16) >= 0)
	{
		v9 = *(_QWORD*)(qword_140C65898 + 27728);
		if (v9)
		{
			if (((*(_DWORD*)(v9 + 8) >> 8) & 1) != 0)
				return 50i64;
		}
	}
LABEL_14:
	if (a2 == 2)
	{
		v10 = *(_QWORD*)(qword_140C65898 + 27728);
		if (v10)
		{
			if (((*(_DWORD*)(v10 + 8) >> 8) & 1) != 0)
				return 50i64;
		}
	}
	v11 = *(_QWORD*)(qword_140C65898 + 27728);
	v12 = 0i64;
	if (!v11)
	{
		LODWORD(v13) = 0;
	LABEL_20:
		if (a2 != 8 || a1[67] == 16 || !a1[85])
			return 3i64;
		goto LABEL_26;
	}
	v13 = *(_QWORD*)(v11 + 96);
	if ((unsigned int)v13 <= 1)
		goto LABEL_20;
	if (a2 < 0x10)
	{
	LABEL_26:
		v14 = (char*)&unk_140B51560 + 16 * (int)a2;
		goto LABEL_27;
	}
	v14 = (char*)&unk_140B51550;
LABEL_27:
	if ((*((_DWORD*)v14 + 3) & 0x200) != 0 && !a1[108] && (_DWORD)v13 != *(_DWORD*)(a3 + 20))
		return 51i64;
	v15 = 0i64;
	if (!a3)
		goto LABEL_47;
	if (a2 != 3)
	{
		if ((unsigned int)v13 <= *(_DWORD*)(a3 + 20))
			goto LABEL_47;
		return 3i64;
	}
	v16 = *(_DWORD*)(a3 + 20);
	if ((_DWORD)v13 != v16)
		return 3i64;
	v17 = v16 - 2;
	if (v17)
	{
		v18 = v17 - 1;
		if (v18)
		{
			if (v18 == 2)
				v19 = 6;
			else
				v19 = 0;
		}
		else
		{
			v19 = 5;
		}
	}
	else
	{
		v19 = 4;
	}
	v20 = sub_1405846C0((__int64)a1, v19);
	v15 = v20;
	if (!v20)
		return 10i64;
	if (!*(_DWORD*)(v20 + 764))
	{
		sub_14057E830(v20);
		return 10i64;
	}
LABEL_47:
	v21 = 0;
	if (a4)
	{
		if (!(unsigned int)sub_1405BEDA0((__int64)a1, (__int64)a4))
			return 38i64;
		v22 = sub_1405C2E10((__int64)(a1 + 110), *a4);
		v4 = qword_140C65898;
		v21 = v22;
	}
	v31 = (unsigned int)v13;
	if ((_DWORD)v13)
	{
		while (1)
		{
			v23 = *(_QWORD**)(v4 + 27728);
			v24 = v12;
			if (!v23 || v12 >= v23[12])
				return 10i64;
			if (v12)
			{
				if (v12 <= v23[13])
					v24 = v12 - 1;
			}
			else
			{
				v24 = v23[13];
			}
			v25 = *(_QWORD*)(v23[11] + 8 * v24);
			if (!v25)
				return 10i64;
			if ((*(_BYTE*)(v25 + 8) & 8) != 0)
				return 5i64;
			if (v21 && (v21 & *(_DWORD*)(v25 + 152)) == 0)
				return 45i64;
			if (a3)
			{
				v26 = sub_1403D9500(v4, (int*)(v25 + 16));
				v28 = sub_1403D90D0(v27, v26);
				if (v28)
					v29 = *(_DWORD*)(v28 + 56);
				else
					v29 = *(_DWORD*)(v25 + 120);
				if (*(_DWORD*)(a3 + 28) < v29 || *(_DWORD*)(a3 + 24) > v29)
					return 2i64;
				if (v15 && !sub_14057FF90(v15, (__int128*)(v25 + 16)))
					return 10i64;
				v4 = qword_140C65898;
			}
			if (++v12 >= v31)
				goto LABEL_72;
		}
	}
	else
	{
	LABEL_72:
		if (a1[67] == 16 || !a1[85])
			return 0i64;
		v30 = (unsigned int)v7 < 0x10 ? (char*)&unk_140B51560 + 16 * v7 : (char*)&unk_140B51550;
		if ((*((_DWORD*)v30 + 3) & 0x100) != 0)
			return 0i64;
		else
			return 47i64;
	}
}
// 1405C319B: variable 'a1' is possibly undefined
// 1405C3252: variable 'v27' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

