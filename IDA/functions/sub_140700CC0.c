#include "../winhttp.h"

//----- (0000000140700CC0) ----------------------------------------------------
__int64 __fastcall sub_140700CC0(__int64 a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	int v4; // esi
	int v5; // r14d
	__int64 v6; // rcx
	BOOL v7; // ebp
	_QWORD* v8; // rax
	__int64 v9; // rdx
	unsigned __int64 v10; // rdi
	unsigned __int64* v11; // rdx
	unsigned __int64 v12; // r8
	BOOL* v13; // rcx
	__int64* v14; // rax
	__int64 v15; // rax
	__int64 v16; // rcx
	int v17; // ebp
	_QWORD* v18; // rax
	__int64 v19; // r10
	unsigned __int64* v20; // rdx
	unsigned __int64 v21; // r8
	_DWORD* v22; // rcx
	__int64* v23; // rax
	__int64 v24; // rbp
	__int64 v25; // rcx
	_QWORD* v26; // rax
	__int64 v27; // rdx
	unsigned int v28; // r10d
	__int64 v29; // rax
	__int64 v30; // rcx
	int v31; // ebp
	_QWORD* v32; // rax
	__int64 v33; // r10
	unsigned __int64* v34; // rdx
	_DWORD* v35; // rax
	__int64* v36; // rax
	_QWORD* v37; // rax
	__int64 v38; // r10
	__int64 v39; // rdx
	__int64 v41; // [rsp+20h] [rbp-28h] BYREF
	__int64 v42; // [rsp+28h] [rbp-20h]

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v4 = 0;
	v5 = sub_1400578C0(a1);
	v6 = *(_QWORD*)(qword_140C65898 + 120);
	if (v6)
		v7 = sub_1403B48B0(v6);
	else
		v7 = 0;
	v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v5);
	v9 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v9 = *v8;
	*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v10 = -1i64;
	v11 = (unsigned __int64*)sub_14018F0E0(&v41, L"bIsFlagged")[1];
	if (v11)
	{
		v12 = -1i64;
		do
			++v12;
		while (*((_BYTE*)v11 + v12));
		sub_140058710(a1, v11, v12);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v42)
		sub_14018B900(v42, 0);
	v13 = *(BOOL**)(a1 + 16);
	v13[2] = 1;
	*v13 = v7;
	*(_QWORD*)(a1 + 16) += 16i64;
	v14 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v14, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	v15 = qword_140C65898;
	*(_QWORD*)(a1 + 16) -= 48i64;
	v16 = *(_QWORD*)(v15 + 120);
	if (v16)
		v17 = *(_DWORD*)(v16 + 5544) & 2;
	else
		v17 = 1;
	v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v5);
	*(_QWORD*)v19 = *v18;
	*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v20 = (unsigned __int64*)sub_14018F0E0(&v41, L"bIsForced")[1];
	if (v20)
	{
		v21 = -1i64;
		do
			++v21;
		while (*((_BYTE*)v20 + v21));
		sub_140058710(a1, v20, v21);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v42)
		sub_14018B900(v42, 0);
	v22 = *(_DWORD**)(a1 + 16);
	v22[2] = 1;
	*v22 = v17 != 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	v23 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v23, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	v24 = qword_140C65898;
	*(_QWORD*)(a1 + 16) -= 48i64;
	if (*(_DWORD*)(v24 + 28136))
	{
		v25 = *(_QWORD*)(v24 + 120);
		if (!v25 || !sub_1403B48B0(v25) || (unsigned int)dword_140C636A8 > *(_DWORD*)(v24 + 28136))
			*(_DWORD*)(v24 + 28136) = 0;
	}
	v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v5);
	v27 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v27 = *v26;
	*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v28 / 0x3E8, L"nCooldown", v28 / 0x3E8);
	v29 = qword_140C65898;
	*(_QWORD*)(a1 + 16) -= 16i64;
	v30 = *(_QWORD*)(v29 + 27728);
	if (v30)
		v31 = (*(_DWORD*)(v30 + 8) >> 8) & 1;
	else
		v31 = 0;
	v32 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v5);
	*(_QWORD*)v33 = *v32;
	*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v34 = (unsigned __int64*)sub_14018F0E0(&v41, L"bIsInCrossFactionGroup")[1];
	if (v34)
	{
		do
			++v10;
		while (*((_BYTE*)v34 + v10));
		sub_140058710(a1, v34, v10);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v42)
		sub_14018B900(v42, 0);
	v35 = *(_DWORD**)(a1 + 16);
	LOBYTE(v4) = v31 != 0;
	v35[2] = 1;
	*v35 = v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	v36 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v36, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 48i64;
	v37 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v5);
	*(_QWORD*)v38 = *v37;
	*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v39, v5);
	return 1i64;
}
// 140700E3A: variable 'v19' is possibly undefined
// 140700F4F: variable 'v28' is possibly undefined
// 140700FA3: variable 'v33' is possibly undefined
// 140701056: variable 'v38' is possibly undefined
// 140701068: variable 'v39' is possibly undefined
// 140B419B8: using guessed type wchar_t aBisincrossfact[23];
// 140B419E8: using guessed type wchar_t aNcooldown[10];
// 140B41A00: using guessed type wchar_t aBisforced[10];
// 140B41A18: using guessed type wchar_t aBisflagged[11];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

