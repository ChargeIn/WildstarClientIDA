#include "../winhttp.h"

//----- (0000000140731D30) ----------------------------------------------------
void __fastcall sub_140731D30(__int64 a1, __int64 a2, __int64 a3)
{
	__int16* v6; // rax
	unsigned __int64 v7; // rcx
	unsigned __int16* v8; // r15
	unsigned __int16* v9; // rdi
	__int64 v10; // rbx
	__int64 v11; // rax
	_QWORD* v12; // rax
	__int64 v13; // rdx
	int v14; // r10d
	_QWORD* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx
	_QWORD* v18; // rax
	__int64 v19; // r10
	__int64 v20; // rdx
	__int64 v21; // rdx

	v6 = sub_14034BDD0(a1, *(_DWORD*)(a2 + 4));
	v7 = *(_QWORD*)(a2 + 8);
	v8 = (unsigned __int16*)v6;
	if (v7)
	{
		if (v7 <= qword_140C3FE70)
			v9 = (unsigned __int16*)(v7 + qword_140C3FE68);
		else
			v9 = 0i64;
	}
	else
	{
		v9 = 0i64;
	}
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v10 = *(_QWORD*)(a1 + 16);
	v11 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v10 + 8) = 5;
	*(_QWORD*)v10 = v11;
	*(_QWORD*)(a1 + 16) += 16i64;
	LODWORD(v10) = sub_1400578C0(a1);
	v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v10);
	v13 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v13 = *v12;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v13, L"nId", v14);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v10);
	*(_QWORD*)v16 = *v15;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F0870(a1, v17, L"strName", v8);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v10);
	*(_QWORD*)v19 = *v18;
	*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F0870(a1, v20, L"strLuaVariable", v9);
	*(_QWORD*)(a1 + 16) -= 16i64;
	sub_1400FB1D0(a3);
	sub_1400579E0(a1, v21, v10);
}
// 140731DF7: variable 'v14' is possibly undefined
// 140731E24: variable 'v16' is possibly undefined
// 140731E36: variable 'v17' is possibly undefined
// 140731E63: variable 'v19' is possibly undefined
// 140731E75: variable 'v20' is possibly undefined
// 140731EA7: variable 'v21' is possibly undefined
// 140B472F0: using guessed type wchar_t aStrluavariable[15];
// 140B47310: using guessed type wchar_t aStrname_94[8];
// 140B47320: using guessed type wchar_t aNid_32[4];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

