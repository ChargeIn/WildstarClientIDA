#include "../winhttp.h"

//----- (000000014060B510) ----------------------------------------------------
void __fastcall sub_14060B510(int* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rdx
	__int64 v4; // rbx
	__int64 v5; // rax
	_QWORD* v6; // rax
	__int64 v7; // rdx
	int v8; // r10d
	__int64 v9; // rcx
	__int64 v10; // rdx
	__int64(__fastcall * *v11)(); // [rsp+20h] [rbp-28h] BYREF
	int v12; // [rsp+28h] [rbp-20h]
	__int64 v13; // [rsp+30h] [rbp-18h]
	int v14; // [rsp+38h] [rbp-10h]

	v14 = 1;
	v2 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
	v11 = off_140B569F0;
	v3 = *(_QWORD*)(v2 + 32);
	v13 = v2;
	if (*(_QWORD*)(v3 + 120) >= *(_QWORD*)(v3 + 112))
		sub_14005E2C0(v2);
	v4 = *(_QWORD*)(v2 + 16);
	v5 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(v2 + 16) += 16i64;
	LODWORD(v4) = sub_1400578C0(v2);
	v12 = v4;
	sub_14060B380(a1, (__int64)&v11);
	v6 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v4);
	v7 = *(_QWORD*)(v2 + 16);
	*(_QWORD*)v7 = *v6;
	*(_DWORD*)(v7 + 8) = *((_DWORD*)v6 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400F06F0(v2, v7, L"nAmount", v8);
	v9 = qword_140C65898;
	*(_QWORD*)(v2 + 16) -= 16i64;
	sub_1400EA3E0(*(_QWORD*)(v9 + 29504), "CombatLogAbsorption", "T", (unsigned int)v4, v11);
	sub_1400579E0(v2, v10, v4);
}
// 14060B5D9: variable 'v8' is possibly undefined
// 14060B61C: variable 'v10' is possibly undefined
// 140B26390: using guessed type wchar_t aNamount_0[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

