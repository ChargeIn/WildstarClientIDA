#include "../winhttp.h"

//----- (0000000140557340) ----------------------------------------------------
__int64 __fastcall sub_140557340(__int64 a1, int a2, unsigned int a3)
{
	__int64 result; // rax
	__int64 v6; // rcx
	__int64 v7; // rdi
	bool v8; // zf
	unsigned int v9; // eax
	int v10; // r10d
	int* v11; // r9
	int v12; // ebx
	int v13; // r10d
	unsigned int v14; // eax
	int v15; // ecx
	__int64 v16; // rcx

	result = sub_1405A8A40(a1, a2);
	v7 = result;
	if (result)
	{
		v8 = (*(_DWORD*)(*(_QWORD*)(result + 8) + 12i64) & 0x20000) == 0;
		v9 = HIDWORD(qword_140C7DC74);
		if (!v8)
			v9 = a3;
		HIDWORD(qword_140C7DC74) = v9;
		if (!dword_140C7DC68)
		{
			sub_1403D90D0(qword_140C65898, SHIDWORD(qword_140C7DC60));
			v9 = HIDWORD(qword_140C7DC74);
		}
		v10 = 14;
		if (v9 < 5)
			v10 = v9 + 8;
		v12 = sub_14077CA60(v6, v10, *(unsigned int**)(v7 + 8));
		v14 = sub_14077CB20(qword_140C7DC90, *v11, v13);
		v15 = dword_140C4D1A0;
		if (*(_DWORD*)qword_140C63750 < dword_140C4D1A0)
			v15 = *(_DWORD*)qword_140C63750;
		sub_1405581C0(&qword_140C7DC60, v12, v14, byte_140C4D1B0[v15]);
		if ((*(_DWORD*)(*(_QWORD*)(v7 + 8) + 12i64) & 0x20000) == 0)
			++HIDWORD(qword_140C7DC74);
		sub_140426120(*(_QWORD*)(qword_140C65898 + 29504), 2u, a2);
		sub_14034BDD0(v16, 0);
		qword_140C7DC98 = 0i64;
		dword_140C7DCA0 = 0;
		return 1i64;
	}
	return result;
}
// 1405573C5: variable 'v6' is possibly undefined
// 1405573CA: variable 'v11' is possibly undefined
// 1405573D9: variable 'v13' is possibly undefined
// 140557442: variable 'v16' is possibly undefined
// 140C4D1A0: using guessed type int dword_140C4D1A0;
// 140C4D1B0: using guessed type unsigned __int8 byte_140C4D1B0[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;
// 140C7DC68: using guessed type int dword_140C7DC68;
// 140C7DC74: using guessed type __int64 qword_140C7DC74;
// 140C7DC90: using guessed type __int64 qword_140C7DC90;
// 140C7DC98: using guessed type __int64 qword_140C7DC98;
// 140C7DCA0: using guessed type int dword_140C7DCA0;

