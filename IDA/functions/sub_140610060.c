#include "../winhttp.h"

//----- (0000000140610060) ----------------------------------------------------
void __fastcall sub_140610060(int* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rdx
	__int64 v4; // rdi
	__int64 v5; // rax
	unsigned int v6; // r14d
	int v7; // r15d
	_QWORD* v8; // rax
	__int64 v9; // rdx
	unsigned __int64 v10; // rdi
	int v11; // esi
	unsigned __int64* v12; // rdx
	unsigned __int64 v13; // r8
	_DWORD* v14; // rcx
	__int64* v15; // rax
	int v16; // ebp
	_QWORD* v17; // rax
	__int64 v18; // r10
	unsigned __int64* v19; // rdx
	_DWORD* v20; // rax
	__int64* v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rdx
	__int64(__fastcall * *v24)(); // [rsp+20h] [rbp-38h] BYREF
	__int64 v25; // [rsp+28h] [rbp-30h]
	__int64 v26; // [rsp+30h] [rbp-28h]
	int v27; // [rsp+38h] [rbp-20h]

	v27 = 1;
	v2 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
	v24 = off_140B569F0;
	v3 = *(_QWORD*)(v2 + 32);
	v26 = v2;
	if (*(_QWORD*)(v3 + 120) >= *(_QWORD*)(v3 + 112))
		sub_14005E2C0(v2);
	v4 = *(_QWORD*)(v2 + 16);
	v5 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(v2 + 16) += 16i64;
	v6 = sub_1400578C0(v2);
	LODWORD(v25) = v6;
	sub_14060B380(a1, (__int64)&v24);
	v7 = a1[8];
	v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v6);
	v9 = *(_QWORD*)(v2 + 16);
	*(_QWORD*)v9 = *v8;
	*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	v10 = -1i64;
	v11 = 0;
	v12 = (unsigned __int64*)sub_14018F0E0(&v24, L"bDismissed")[1];
	if (v12)
	{
		v13 = -1i64;
		do
			++v13;
		while (*((_BYTE*)v12 + v13));
		sub_140058710(v2, v12, v13);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
		*(_QWORD*)(v2 + 16) += 16i64;
	}
	if (v25)
		sub_14018B900(v25, 0);
	v14 = *(_DWORD**)(v2 + 16);
	v14[2] = 1;
	*v14 = v7 != 0;
	*(_QWORD*)(v2 + 16) += 16i64;
	v15 = (__int64*)sub_1400580E0(v2, -3);
	sub_14005EA50(v2, v15, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
	*(_QWORD*)(v2 + 16) -= 48i64;
	v16 = a1[9];
	v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v6);
	*(_QWORD*)v18 = *v17;
	*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	v19 = (unsigned __int64*)sub_14018F0E0(&v24, L"bKilled")[1];
	if (v19)
	{
		do
			++v10;
		while (*((_BYTE*)v19 + v10));
		sub_140058710(v2, v19, v10);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
		*(_QWORD*)(v2 + 16) += 16i64;
	}
	if (v25)
		sub_14018B900(v25, 0);
	v20 = *(_DWORD**)(v2 + 16);
	LOBYTE(v11) = v16 != 0;
	v20[2] = 1;
	*v20 = v11;
	*(_QWORD*)(v2 + 16) += 16i64;
	v21 = (__int64*)sub_1400580E0(v2, -3);
	sub_14005EA50(v2, v21, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
	v22 = qword_140C65898;
	*(_QWORD*)(v2 + 16) -= 48i64;
	Apollo_LUAEvent(*(_QWORD*)(v22 + 29504), "CombatLogPet", "T", v6, v24);
	sub_1400579E0(v2, v23, v6);
}
// 1406101E9: variable 'v18' is possibly undefined
// 1406102C8: variable 'v23' is possibly undefined
// 140B26CC8: using guessed type wchar_t aBkilled[8];
// 140B26CF8: using guessed type wchar_t aBdismissed[11];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

