#include "../winhttp.h"

//----- (000000014060DA40) ----------------------------------------------------
void __fastcall sub_14060DA40(int* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rdx
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rdx
	__int64(__fastcall * *v7)(); // [rsp+20h] [rbp-28h] BYREF
	int v8; // [rsp+28h] [rbp-20h]
	__int64 v9; // [rsp+30h] [rbp-18h]
	int v10; // [rsp+38h] [rbp-10h]

	v10 = 1;
	v2 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
	v7 = off_140B569F0;
	v3 = *(_QWORD*)(v2 + 32);
	v9 = v2;
	if (*(_QWORD*)(v3 + 120) >= *(_QWORD*)(v3 + 112))
		sub_14005E2C0(v2);
	v4 = *(_QWORD*)(v2 + 16);
	v5 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(v2 + 16) += 16i64;
	LODWORD(v4) = sub_1400578C0(v2);
	v8 = v4;
	sub_14060B380(a1, (__int64)&v7);
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "CombatLogDelayDeath", "T", (unsigned int)v4, v7);
	sub_1400579E0(v2, v6, v4);
}
// 14060DB0A: variable 'v6' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

