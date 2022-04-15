#include "../winhttp.h"

//----- (0000000140671F20) ----------------------------------------------------
void __fastcall sub_140671F20(__int64 a1, __int64 a2)
{
	unsigned int* v3; // r14
	unsigned int v4; // ecx
	int v5; // esi
	int v6; // r15d
	_QWORD* v7; // rax
	__int64 v8; // r10
	__int64 v9; // rdx
	__int64 v10; // rdi
	unsigned __int64 v11; // rbx
	unsigned __int64* v12; // rdx
	unsigned __int64 v13; // r8
	_DWORD* v14; // rcx
	__int64* v15; // rax
	__int64 v16; // rcx
	int v17; // r14d
	_QWORD* v18; // rax
	__int64 v19; // r10
	__int64 v20; // rdx
	__int64 v21; // rdi
	unsigned __int64* v22; // rdx
	_DWORD* v23; // rax
	__int64* v24; // rax
	__int64 v25; // [rsp+20h] [rbp-38h] BYREF
	__int64 v26; // [rsp+28h] [rbp-30h]

	if (!*(_DWORD*)(a1 + 1344))
		return;
	v3 = *(unsigned int**)(a1 + 168);
	if (!v3)
		return;
	v4 = v3[95];
	v5 = 0;
	if (v4 - 1 > 5)
	{
		if (v4 == 20)
			goto LABEL_5;
	LABEL_9:
		v6 = 31;
		goto LABEL_6;
	}
	if (v4 - 1 >= 7)
		goto LABEL_9;
LABEL_5:
	v6 = 0;
LABEL_6:
	v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v9 = *(_QWORD*)(v8 + 16);
	*(_QWORD*)v9 = *v7;
	*(_DWORD*)(v9 + 8) = *((_DWORD*)v7 + 2);
	*(_QWORD*)(v8 + 16) += 16i64;
	v10 = *(_QWORD*)(a2 + 16);
	v11 = -1i64;
	v12 = (unsigned __int64*)sub_14018F0E0(&v25, L"bCanCostumeUnlock")[1];
	if (v12)
	{
		v13 = -1i64;
		do
			++v13;
		while (*((_BYTE*)v12 + v13));
		sub_140058710(v10, v12, v13);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v10 + 16) + 8i64) = 0;
		*(_QWORD*)(v10 + 16) += 16i64;
	}
	if (v26)
		sub_14018B900(v26, 0);
	v14 = *(_DWORD**)(v10 + 16);
	v14[2] = 1;
	*v14 = v6 == 0;
	*(_QWORD*)(v10 + 16) += 16i64;
	v15 = (__int64*)sub_1400580E0(v10, -3);
	sub_14005EA50(v10, v15, (int*)(*(_QWORD*)(v10 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v10 + 16) - 16i64));
	*(_QWORD*)(v10 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v17 = sub_1403B91D0(v16, *v3);
	v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v20 = *(_QWORD*)(v19 + 16);
	*(_QWORD*)v20 = *v18;
	*(_DWORD*)(v20 + 8) = *((_DWORD*)v18 + 2);
	*(_QWORD*)(v19 + 16) += 16i64;
	v21 = *(_QWORD*)(a2 + 16);
	v22 = (unsigned __int64*)sub_14018F0E0(&v25, L"bCostumeUnlocked")[1];
	if (v22)
	{
		do
			++v11;
		while (*((_BYTE*)v22 + v11));
		sub_140058710(v21, v22, v11);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v21 + 16) + 8i64) = 0;
		*(_QWORD*)(v21 + 16) += 16i64;
	}
	if (v26)
		sub_14018B900(v26, 0);
	v23 = *(_DWORD**)(v21 + 16);
	LOBYTE(v5) = v17 != 0;
	v23[2] = 1;
	*v23 = v5;
	*(_QWORD*)(v21 + 16) += 16i64;
	v24 = (__int64*)sub_1400580E0(v21, -3);
	sub_14005EA50(v21, v24, (int*)(*(_QWORD*)(v21 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v21 + 16) - 16i64));
	*(_QWORD*)(v21 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
}
// 140671F92: variable 'v8' is possibly undefined
// 140672058: variable 'v16' is possibly undefined
// 140672077: variable 'v19' is possibly undefined
// 140B2F8A0: using guessed type wchar_t aBcancostumeunl[18];
// 140B2F8C8: using guessed type wchar_t aBcostumeunlock[17];

