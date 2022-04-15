#include "../winhttp.h"

//----- (0000000140550C50) ----------------------------------------------------
int* __fastcall sub_140550C50(__int64 a1, __int64 a2, unsigned int a3, _DWORD* a4)
{
	int* result; // rax
	__int64 v5; // rdi
	unsigned int v8; // ebx
	unsigned int v9; // ecx
	unsigned int v10; // esi
	__int64 v11; // rdx
	unsigned int v12; // r14d
	__int64 v13; // rcx
	_DWORD* v14; // rax
	int v15; // r15d
	int v16; // ebp
	unsigned int v17; // eax
	int v18; // eax
	int v19; // r15d
	__int64 v20; // r8
	unsigned int v21; // edx
	__int64 v22; // rax
	__int64 v23; // rcx
	int v24; // eax
	__int64 v25; // rcx
	BOOL v26; // r15d
	int v27; // eax
	bool v28; // cf
	int v29; // r15d
	int v30; // ecx
	int v31; // esi
	unsigned int v32; // eax
	__int64 v33; // rcx
	_DWORD* v34; // rax
	BOOL v35; // ecx
	int v36; // [rsp+20h] [rbp-58h]
	__int64 v37; // [rsp+28h] [rbp-50h]
	__int64 v38[2]; // [rsp+30h] [rbp-48h] BYREF
	int v39; // [rsp+88h] [rbp+10h]

	result = *(int**)(a2 + 24);
	v5 = a3;
	if (!result)
		return result;
	v8 = 0;
	v39 = *result;
	v9 = *(_DWORD*)(a1 + 16);
	v38[0] = (__int64)off_140B66440;
	v38[1] = a2;
	v10 = 0;
	if (a3 < v9)
	{
		v11 = *(_QWORD*)(a1 + 8i64 * a3 + 24);
		if (v11)
			v10 = *(_DWORD*)(v11 + 4);
	}
	if (a3 == v9)
	{
		v12 = 0;
	LABEL_13:
		v36 = 0;
		goto LABEL_14;
	}
	if (a3 > v9)
	{
		v12 = 0;
		goto LABEL_13;
	}
	v13 = *(_QWORD*)(a1 + 8i64 * a3 + 24);
	if (!v13)
	{
		v12 = 0;
		goto LABEL_13;
	}
	v12 = *(_DWORD*)(v13 + 12);
	if (!v12)
		goto LABEL_13;
	v14 = (_DWORD*)sub_1403B4A10((__int64)v38, v12);
	v36 = 1;
	if ((unsigned int)sub_1403B4A20((__int64)v38, v14))
		goto LABEL_13;
LABEL_14:
	v15 = *(_DWORD*)(a2 + 13816);
	v16 = 0;
	if (sub_1405517A0(a1, v5) && v36)
	{
		v17 = *(_DWORD*)(a1 + 16);
		if ((_DWORD)v5 == v17)
		{
			v18 = 0;
		}
		else if ((unsigned int)v5 <= v17)
		{
			if (*(_QWORD*)(a1 + 8 * v5 + 24))
				v18 = sub_1405517A0(a1, v5) ? 0x20 : 0;
			else
				v18 = 0;
		}
		else
		{
			v18 = 0;
		}
		v19 = (v18 - 1) & v15;
		v20 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
		v21 = **(_DWORD**)(a1 + 8);
		v22 = *(_QWORD*)(v20 + 8);
		v23 = v20;
		while (v22)
		{
			if (*(_DWORD*)(v22 + 32) < v21)
			{
				v22 = *(_QWORD*)(v22 + 24);
			}
			else
			{
				v23 = v22;
				v22 = *(_QWORD*)(v22 + 16);
			}
		}
		if (v23 == v20 || (v37 = v23, v21 < *(_DWORD*)(v23 + 32)))
			v37 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
		if (v37 == v20 || v37 == -40)
			v24 = 0;
		else
			v24 = sub_140611680((__int64*)(v37 + 40), v5, v19);
		LOBYTE(v16) = v24 == 0;
	}
	v25 = *(_QWORD*)(qword_140C65898 + 120);
	if (v25)
		v26 = sub_14045A950(v25, *(_DWORD*)(a2 + 8)) == 0;
	else
		v26 = 0;
	if (v10 == 2)
	{
		v27 = v39;
		if (v39 != v12)
			goto LABEL_54;
		goto LABEL_52;
	}
	if (((v10 - 8) & 0xFFFFFFF7) == 0 && v36)
	{
		v27 = v39;
	LABEL_52:
		v29 = 1;
		*a4 = 1;
		goto LABEL_55;
	}
	if (v10 == 15)
	{
		v27 = v39;
		if (*(_QWORD*)(a2 + 312) != v12)
			goto LABEL_54;
		goto LABEL_52;
	}
	if (v10 != 46)
	{
		v27 = v39;
	LABEL_54:
		v29 = 0;
		goto LABEL_55;
	}
	v28 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2) < v12;
	v27 = v39;
	if (v28 || !v26)
		goto LABEL_54;
	v29 = 1;
	*a4 = 1;
LABEL_55:
	if (!v16)
	{
		if (v10 > 0x15 || (v30 = 2097672, !_bittest(&v30, v10)) || (v16 = 1, v27 != v12))
			v16 = 0;
	}
	if (v10 == 12)
	{
		if (v27 != v12)
		{
		LABEL_62:
			v31 = 0;
			goto LABEL_63;
		}
	}
	else if (v10 != 23 || !v36)
	{
		goto LABEL_62;
	}
	v31 = 1;
LABEL_63:
	v32 = *(_DWORD*)(a1 + 16);
	if ((_DWORD)v5 != v32
		&& (unsigned int)v5 <= v32
		&& (v33 = *(_QWORD*)(a1 + 8 * v5 + 24)) != 0
		&& *(_DWORD*)(v33 + 48))
	{
		v34 = (_DWORD*)(*(__int64(__fastcall**)(__int64*))(v38[0] + 8))(v38);
		v35 = sub_1403B4A20((__int64)v38, v34) == 0;
	}
	else
	{
		v35 = 0;
	}
	if (v29 || v16 || v35 || v31)
		return (int*)1;
	return (int*)v8;
}
// 140B66440: using guessed type __int64 (__fastcall *off_140B66440[9])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;

