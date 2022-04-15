#include "../winhttp.h"

//----- (00000001404DA740) ----------------------------------------------------
void __fastcall sub_1404DA740(__int64 a1, unsigned int a2, int a3)
{
	__int64 v5; // rdi
	_DWORD* v6; // rax
	int v7; // eax
	int v8; // [rsp+20h] [rbp-28h] BYREF
	__int64 v9; // [rsp+28h] [rbp-20h]
	void(__fastcall * v10)(__int64, unsigned int); // [rsp+30h] [rbp-18h]
	__int64 v11; // [rsp+38h] [rbp-10h]

	v5 = a2;
	sub_1403BDAC0(qword_140C65898);
	sub_140195D70(a1 + 5280);
	if ((unsigned int)v5 >= 0x30)
		return;
	if (*(_DWORD*)(a1 + 5272))
	{
		v6 = (_DWORD*)sub_1403C1EA0(a1, v5, *(_BYTE*)(a1 + 28140));
		goto LABEL_7;
	}
	if (*(_QWORD*)(a1 + 120) && (unsigned int)v5 < 0xC)
	{
		v6 = *(_DWORD**)(a1 + 8 * v5 + 4328);
	LABEL_7:
		if (v6 && v6[130])
			(*(void(__fastcall**)(_DWORD*, bool))(*(_QWORD*)v6 + 64i64))(v6, a3 != 0);
	}
	if (a3)
	{
		v7 = dword_140C45E40;
		if (*(_DWORD*)qword_140C63750 < dword_140C45E40)
			v7 = *(_DWORD*)qword_140C63750;
		if (*((_BYTE*)&dword_140C45E50 + v7))
		{
			sub_1404DA870(qword_140C65898, v5);
		}
		else
		{
			v8 = 1;
			v9 = sub_14001C280(a1);
			v11 = v5;
			v10 = sub_1404DA870;
			sub_140195960(a1 + 5280, dword_140C65904, (__int64)&v8, 4);
		}
	}
}
// 140C45E40: using guessed type int dword_140C45E40;
// 140C45E50: using guessed type int dword_140C45E50;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65904: using guessed type int dword_140C65904;

