#include "../winhttp.h"

//----- (000000014060BBC0) ----------------------------------------------------
void __fastcall sub_14060BBC0(__int64 a1)
{
	__int64 v2; // rbp
	__int64 v3; // rdx
	__int64 v4; // rdi
	__int64 v5; // rcx
	__int64 v6; // rbx
	__int64 v7; // rax
	_QWORD* v8; // rax
	__int64 v9; // rdx
	int v10; // r10d
	__int64 v11; // rcx
	_QWORD* v12; // rax
	__int64 v13; // r8
	__int64 v14; // rdx
	unsigned __int16* v15; // r10
	__int64 v16; // rcx
	__int64 v17; // rdx
	__int64(__fastcall * *v18)(); // [rsp+20h] [rbp-28h] BYREF
	int v19; // [rsp+28h] [rbp-20h]
	__int64 v20; // [rsp+30h] [rbp-18h]
	int v21; // [rsp+38h] [rbp-10h]

	if (*(int*)(a1 + 16) < 28)
	{
		v2 = *(_QWORD*)(qword_140C65A08 + 8i64 * *(int*)(a1 + 16) + 40);
		if (v2)
		{
			v3 = *(_QWORD*)(qword_140C65898 + 29504);
			v21 = 1;
			v4 = *(_QWORD*)(v3 + 400);
			v18 = off_140B569F0;
			v5 = *(_QWORD*)(v4 + 32);
			v20 = v4;
			if (*(_QWORD*)(v5 + 120) >= *(_QWORD*)(v5 + 112))
				sub_14005E2C0(v4);
			v6 = *(_QWORD*)(v4 + 16);
			v7 = sub_14005C1B0(v4, 0, 0);
			*(_DWORD*)(v6 + 8) = 5;
			*(_QWORD*)v6 = v7;
			*(_QWORD*)(v4 + 16) += 16i64;
			LODWORD(v6) = sub_1400578C0(v4);
			v19 = v6;
			sub_14060B0C0(a1, (__int64)&v18);
			v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v4 + 32) + 160i64), v6);
			v9 = *(_QWORD*)(v4 + 16);
			*(_QWORD*)v9 = *v8;
			*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
			*(_QWORD*)(v4 + 16) += 16i64;
			sub_1400F06F0(v4, v9, L"eState", v10);
			*(_QWORD*)(v4 + 16) -= 16i64;
			sub_14034BDD0(v11, *(_DWORD*)(v2 + 40));
			v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v4 + 32) + 160i64), v6);
			v13 = *(_QWORD*)(v4 + 16);
			*(_QWORD*)v13 = *v12;
			v14 = *((unsigned int*)v12 + 2);
			*(_DWORD*)(v13 + 8) = v14;
			*(_QWORD*)(v4 + 16) += 16i64;
			sub_1400F0870(v4, v14, L"strState", v15);
			v16 = qword_140C65898;
			*(_QWORD*)(v4 + 16) -= 16i64;
			sub_1400EA3E0(*(_QWORD*)(v16 + 29504), "CombatLogCCStateBreak", L"T", (unsigned int)v6, v18);
			sub_1400579E0(v4, v17, v6);
		}
	}
}
// 14060BCB4: variable 'v10' is possibly undefined
// 14060BCC1: variable 'v11' is possibly undefined
// 14060BCFE: variable 'v15' is possibly undefined
// 14060BD32: variable 'v17' is possibly undefined
// 1409EB20C: using guessed type wchar_t aT_30[2];
// 140B262D8: using guessed type wchar_t aEstate_0[7];
// 140B265C8: using guessed type wchar_t aStrstate_0[9];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A08: using guessed type __int64 qword_140C65A08;

