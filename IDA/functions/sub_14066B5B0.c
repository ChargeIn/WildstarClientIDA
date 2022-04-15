#include "../winhttp.h"

//----- (000000014066B5B0) ----------------------------------------------------
__int64 __fastcall sub_14066B5B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rdi
	__int64 v5; // rax
	unsigned __int64 v6; // rcx
	unsigned __int16* v7; // rdx
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]

	if (!*(_QWORD*)(qword_140C65898 + 120)
		|| (v2 = sub_140056AB0(a1, 1u)) == 0
		|| (v3 = *(_QWORD*)(v2 + 8)) == 0
		|| (v4 = *(_QWORD*)(v3 + 8)) == 0)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		goto LABEL_22;
	}
	v5 = sub_14066ACF0(a1);
	if ((!v5 || !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 72i64))(v5))
		&& (*(_BYTE*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 40i64))(v4) + 108) & 1) != 0)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	LABEL_22:
		a1[2] += 16i64;
		return 1i64;
	}
	v6 = *(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 40i64))(v4) + 136);
	if (v6)
	{
		if (v6 <= qword_140C3FE70)
			v7 = (unsigned __int16*)(v6 + qword_140C3FE68);
		else
			v7 = 0i64;
	}
	else
	{
		v7 = 0i64;
	}
	v8 = (unsigned __int64*)sub_14018F0E0(&v11, v7)[1];
	if (v8)
	{
		v9 = -1i64;
		do
			++v9;
		while (*((_BYTE*)v8 + v9));
		sub_140058710((__int64)a1, v8, v9);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v12)
	{
		sub_14018B900(v12, 0);
		return 1i64;
	}
	return 1i64;
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;

