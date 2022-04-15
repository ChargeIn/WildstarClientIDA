#include "../winhttp.h"

//----- (000000014066BD30) ----------------------------------------------------
__int64 __fastcall sub_14066BD30(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	__int64 v4; // rdx
	int v5; // r15d
	__int64 v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // eax
	__int64 v9; // rax
	__int64 v10; // r14
	int v11; // ebp
	unsigned __int64 i; // rdi
	unsigned int v13; // esi
	__int64 v14; // rax
	__int64 v15; // rcx
	_QWORD* v16; // rax
	__int64 v17; // rdx
	unsigned __int16* v18; // r10
	_QWORD* v19; // rax

	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v2 = a1[2];
	v3 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	a1[2] += 16i64;
	v5 = sub_1400578C0((__int64)a1);
	if (!*(_QWORD*)(qword_140C65898 + 120)
		|| (v6 = sub_140056AB0(a1, 1u)) == 0
		|| (v7 = *(_QWORD*)(v6 + 8)) == 0
		|| (v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v7 + 8) + 48i64))(*(_QWORD*)(v7 + 8)),
			v9 = sub_14048D310(qword_140C65990, v8),
			(v10 = v9) == 0)
		|| !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 72i64))(v9))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		goto LABEL_19;
	}
	v11 = 1;
	for (i = 112i64; i < 0x7C; i += 4i64)
	{
		v13 = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 32i64))(v10) + i);
		if (qword_140C63840)
		{
			v14 = qword_140C63840(off_140A69330, v13, qword_140C63858);
		}
		else
		{
			if (dword_140C64D1C || (int)sub_1401EB880() < 0)
				continue;
			v14 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64FB0 + 24i64))(qword_140C64FB0, v13);
		}
		if (v14)
		{
			sub_14034BDD0(v15, *(_DWORD*)(v14 + 4));
			v16 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v5);
			v17 = a1[2];
			*(_QWORD*)v17 = *v16;
			*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v17, v18, v11);
			a1[2] -= 16i64;
			++v11;
		}
	}
	v19 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v5);
	v4 = a1[2];
	*(_QWORD*)v4 = *v19;
	*(_DWORD*)(v4 + 8) = *((_DWORD*)v19 + 2);
LABEL_19:
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v4, v5);
	return 1i64;
}
// 14066BE5A: variable 'v15' is possibly undefined
// 14066BE93: variable 'v18' is possibly undefined
// 14066BEF2: variable 'v4' is possibly undefined
// 140A69330: using guessed type wchar_t *off_140A69330[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64D1C: using guessed type int dword_140C64D1C;
// 140C64FB0: using guessed type __int64 qword_140C64FB0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65990: using guessed type __int64 qword_140C65990;

