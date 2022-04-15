#include "../winhttp.h"

//----- (000000014068D5B0) ----------------------------------------------------
__int64 __fastcall sub_14068D5B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rdi
	__int64 v5; // rsi
	__int64 v6; // rax
	bool v7; // zf
	__int64 v8; // rax
	int v9; // esi
	__int64 v10; // rdi
	unsigned int v11; // eax
	__int64 v12; // rbp
	int* v13; // rax
	int* v14; // rax
	_QWORD* v15; // rax
	__int64 v17; // rcx
	int* v18; // rdx
	__int64 v19; // rax
	__int64 v20; // rax
	unsigned __int64* v21; // rdx
	unsigned __int64 v22; // r8
	__int64(__fastcall * *v23)(); // [rsp+20h] [rbp-108h] BYREF
	char v24[8]; // [rsp+28h] [rbp-100h] BYREF
	_WORD* v25; // [rsp+30h] [rbp-F8h]
	_WORD* v26; // [rsp+38h] [rbp-F0h]
	__int128 v27; // [rsp+E0h] [rbp-48h]
	int* v28; // [rsp+F0h] [rbp-38h]
	__int64 v29; // [rsp+100h] [rbp-28h] BYREF
	__int64 v30; // [rsp+108h] [rbp-20h]

	if (!*(_QWORD*)(qword_140C65898 + 120)
		|| (v2 = sub_140056AB0(a1, 1u)) == 0
		|| (v3 = *(_QWORD*)(v2 + 8)) == 0
		|| (v4 = *(_QWORD*)(v3 + 8)) == 0)
	{
		sub_140058710((__int64)a1, (unsigned __int64*)&unk_1409D1527, 0i64);
		return 1i64;
	}
	v5 = *(_QWORD*)(v4 + 8);
	v6 = sub_140498A40(qword_140C65980, *(_DWORD*)(v5 + 4), 0);
	if (!v6)
	{
		sub_140058710((__int64)a1, (unsigned __int64*)&unk_1409D153E, 0i64);
		return 1i64;
	}
	v7 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 368i64))(v6) == *(_DWORD*)(v5 + 20);
	v8 = *(_QWORD*)(v4 + 8);
	if (v7)
	{
		v9 = *(_DWORD*)(v8 + 24);
		if (v9)
			goto LABEL_9;
	LABEL_19:
		sub_140058710((__int64)a1, (unsigned __int64*)&unk_1409D1523, 0i64);
		return 1i64;
	}
	v9 = *(_DWORD*)(v8 + 28);
	if (!v9)
		goto LABEL_19;
LABEL_9:
	v10 = sub_14068D500(a1);
	if (sub_14068D560(v10) && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 336i64))(v10) == 24)
	{
		v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 360i64))(v10);
		v12 = sub_140229100(v11);
		if (v12)
		{
			if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 120i64))(v10) < 0x10)
				v9 = *(_DWORD*)(v12 + 4i64 * (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 120i64))(v10) + 4);
		}
	}
	sub_1400B6F30((__int64)&v23);
	v23 = off_140B69230;
	v28 = 0i64;
	v27 = 0i64;
	v13 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v27 = v13;
	*((_QWORD*)&v27 + 1) = v13;
	v28 = v13 + 4;
	if (v13)
		*(_WORD*)v13 = 0;
	v14 = sub_14018B280(96i64, 0);
	if (v14)
		v15 = (_QWORD*)sub_1404DB7E0((__int64)v14, *(_QWORD*)(qword_140C65898 + 120));
	else
		v15 = 0i64;
	sub_1400B7480((__int64)&v23, v15);
	v18 = (int*)sub_14034BDD0(v17, v9);
	if (v18)
	{
		v19 = 0i64;
		if (*(_WORD*)v18)
		{
			do
				++v19;
			while (*((_WORD*)v18 + v19));
		}
		sub_14001C480((__int64)v24, v18, (int*)((char*)v18 + 2 * v19));
	}
	else if (v25 != v26)
	{
		*v25 = 0;
		v26 = v25;
	}
	v20 = sub_1400B7660(&v23);
	v21 = (unsigned __int64*)sub_14018F0E0(&v29, *(unsigned __int16**)(v20 + 8))[1];
	if (v21)
	{
		v22 = -1i64;
		do
			++v22;
		while (*((_BYTE*)v21 + v22));
		sub_140058710((__int64)a1, v21, v22);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v30)
		sub_14018B900(v30, 0);
	if ((_QWORD)v27)
		sub_14018B900(v27, 0);
	sub_1400B7390(&v23);
	return 1i64;
}
// 14068D7B9: variable 'v17' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;
// 14068D5B0: using guessed type char var_100[8];

