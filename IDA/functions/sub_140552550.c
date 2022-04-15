#include "../winhttp.h"

//----- (0000000140552550) ----------------------------------------------------
__int64 __fastcall sub_140552550(__int64 a1, __int16 a2)
{
	__int64 v3; // rdi
	__int64 v4; // rsi
	unsigned int* v6; // r9
	__int64 v7; // rax
	__int64 v8; // rdx
	int v9; // eax
	__int64 v10; // rax
	unsigned int v11; // r8d
	int v12; // eax
	__int64 v13; // r8
	int v14; // edx
	__int64 v15; // rax
	int v16; // esi
	unsigned int* v17; // rax

	v3 = a1;
	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v4)
		return 1i64;
	if ((a2 & 0x200) != 0 && (*(_DWORD*)(*(_QWORD*)(a1 + 8) + 12i64) & 0x400) != 0 && !sub_140552FD0(a1))
	{
		if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, *v6) != 3)
			return 11i64;
		v7 = *(_QWORD*)(v3 + 8);
		if ((*(_BYTE*)(v7 + 12) & 0x20) == 0 && !*(_DWORD*)(v7 + 436))
			return 11i64;
	}
	if ((a2 & 1) != 0 && !sub_140552490(v3))
		return 2i64;
	if ((a2 & 0x1000) != 0 && !(unsigned int)sub_1405529C0(v3))
		return 14i64;
	if ((a2 & 4) != 0)
	{
		a1 = *(unsigned int*)(*(_QWORD*)(v3 + 8) + 44i64);
		if ((_DWORD)a1)
		{
			if (*(_DWORD*)(v4 + 216) != (_DWORD)a1)
				return 4i64;
		}
	}
	if ((a2 & 8) != 0)
	{
		a1 = *(unsigned int*)(*(_QWORD*)(v3 + 8) + 168i64);
		if ((_DWORD)a1)
		{
			v8 = *(_QWORD*)(qword_140C65898 + 120);
			v9 = v8 ? *(_DWORD*)(v8 + 220) : 23;
			if (v9 != (_DWORD)a1)
				return 5i64;
		}
	}
	if ((a2 & 0x100) != 0 && !sub_140552D80(v3))
		return 10i64;
	v10 = *(_QWORD*)(v3 + 8);
	if ((*(_BYTE*)(v10 + 28) & 2) != 0)
	{
		if ((a2 & 2) != 0
			&& (a2 & 0x40) != 0
			&& *(_DWORD*)(v4 + 56) < *(_DWORD*)(v10 + 24)
			&& !(unsigned int)sub_140552A70(v3))
		{
			return 3i64;
		}
	}
	else
	{
		if ((a2 & 2) != 0 && *(_DWORD*)(v4 + 56) < *(_DWORD*)(v10 + 24))
			return 3i64;
		if ((a2 & 0x40) != 0 && !(unsigned int)sub_140552A70(v3))
			return 8i64;
	}
	if ((a2 & 0x80u) != 0 && !(unsigned int)sub_140552C80(v3))
		return 9i64;
	if ((a2 & 0x10) != 0 && !(unsigned int)sub_140552EB0(v3, v4))
		return 6i64;
	if ((a2 & 0x20) != 0)
	{
		v11 = *(_DWORD*)(*(_QWORD*)(v3 + 8) + 48i64);
		if (v11)
		{
			v12 = sub_1403AC840(qword_140C65898 + 160, 771, v11);
			a1 = v12 != 0;
			if (!v12)
				return (unsigned int)(a1 + 7);
		}
	}
	if ((a2 & 0x400) != 0)
	{
		v13 = *(unsigned int*)(*(_QWORD*)(v3 + 8) + 292i64);
		if ((_DWORD)v13)
		{
			if (!(*(unsigned int(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
				+ 24i64))(
					qword_140C659A0,
					v4,
					v13,
					0i64,
					0i64,
					0))
				return 12i64;
		}
	}
	if ((a2 & 0x800) != 0)
	{
		a1 = *(unsigned int*)(*(_QWORD*)(v3 + 8) + 300i64);
		if ((unsigned int)a1 < 4)
		{
			if (!qword_140C65970)
				return 13i64;
			v14 = *(_DWORD*)(qword_140C65970 + 8);
			if (v14 >= 4 || (_DWORD)a1 != v14)
				return 13i64;
		}
	}
	if ((a2 & 0x2000) != 0 && (*(_DWORD*)(*(_QWORD*)(v3 + 8) + 12i64) & 0x80000) == 0)
	{
		v15 = sub_140200220(0x28Fu);
		v16 = v15 ? *(_DWORD*)(v15 + 4) : 40;
		if ((int)sub_1405FC680(*(_QWORD*)qword_140C65B80) >= v16)
			return 15i64;
	}
	if ((a2 & 0x4000) != 0 && !sub_140552E30(v3))
		return 16i64;
	if ((a2 & 0x8000) != 0)
	{
		v17 = *(unsigned int**)(v3 + 8);
		if ((v17[3] & 0x80000) != 0 && !(unsigned int)sub_14048A2B0(a1, *v17))
			return 17i64;
	}
	return 0i64;
}
// 1405525AB: variable 'v6' is possibly undefined
// 1405528FF: variable 'a1' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B80: using guessed type __int64 qword_140C65B80;

