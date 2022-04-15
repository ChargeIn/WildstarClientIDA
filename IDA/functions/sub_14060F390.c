#include "../winhttp.h"

//----- (000000014060F390) ----------------------------------------------------
void __fastcall sub_14060F390(int* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rdx
	__int64 v4; // rdi
	__int64 v5; // rax
	unsigned int v6; // ebp
	int v7; // esi
	_QWORD* v8; // rax
	__int64 v9; // rdx
	int v10; // edi
	unsigned __int64* v11; // rdx
	unsigned __int64 v12; // r8
	_DWORD* v13; // rax
	__int64* v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rdx
	__int64(__fastcall * *v17)(); // [rsp+20h] [rbp-28h] BYREF
	__int64 v18; // [rsp+28h] [rbp-20h]
	__int64 v19; // [rsp+30h] [rbp-18h]
	int v20; // [rsp+38h] [rbp-10h]

	v20 = 1;
	v2 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
	v17 = off_140B569F0;
	v3 = *(_QWORD*)(v2 + 32);
	v19 = v2;
	if (*(_QWORD*)(v3 + 120) >= *(_QWORD*)(v3 + 112))
		sub_14005E2C0(v2);
	v4 = *(_QWORD*)(v2 + 16);
	v5 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(v2 + 16) += 16i64;
	v6 = sub_1400578C0(v2);
	LODWORD(v18) = v6;
	sub_14060B380(a1, (__int64)&v17);
	v7 = a1[8];
	v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v6);
	v9 = *(_QWORD*)(v2 + 16);
	*(_QWORD*)v9 = *v8;
	*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	v10 = 0;
	v11 = (unsigned __int64*)sub_14018F0E0(&v17, L"bMultiHit")[1];
	if (v11)
	{
		v12 = -1i64;
		do
			++v12;
		while (*((_BYTE*)v11 + v12));
		sub_140058710(v2, v11, v12);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
		*(_QWORD*)(v2 + 16) += 16i64;
	}
	if (v18)
		sub_14018B900(v18, 0);
	v13 = *(_DWORD**)(v2 + 16);
	LOBYTE(v10) = v7 != 0;
	v13[2] = 1;
	*v13 = v10;
	*(_QWORD*)(v2 + 16) += 16i64;
	v14 = (__int64*)sub_1400580E0(v2, -3);
	sub_14005EA50(v2, v14, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
	v15 = qword_140C65898;
	*(_QWORD*)(v2 + 16) -= 48i64;
	sub_1400EA3E0(*(_QWORD*)(v15 + 29504), "CombatLogDeflect", "T", v6, v17);
	sub_1400579E0(v2, v16, v6);
}
// 14060F521: variable 'v16' is possibly undefined
// 140B26DE8: using guessed type wchar_t aBmultihit[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

