#include "../winhttp.h"

//----- (000000014079EF50) ----------------------------------------------------
__int64 __fastcall sub_14079EF50(__int64 a1, unsigned int a2)
{
	__int64 v2; // r11
	unsigned int v3; // r9d
	unsigned int v5; // edi
	__int64 v6; // r10
	unsigned int v7; // edx
	__int64 v8; // r8
	__int64 v9; // rax
	_DWORD* v11; // rax
	int v12; // edx

	v2 = *(_QWORD*)(a1 + 96);
	v3 = -1;
	v5 = 1;
	if (v2)
	{
		v6 = *(_QWORD*)(a1 + 88);
		do
		{
			v7 = 1;
			v8 = *(_QWORD*)(*(_QWORD*)v6 + 264i64);
			if (v8)
			{
				v9 = *(_QWORD*)(*(_QWORD*)v6 + 256i64);
				do
				{
					if (*(_DWORD*)v9 == a2 && *(unsigned __int16*)(v9 + 4) > v7)
						v7 = *(unsigned __int16*)(v9 + 4);
					v9 += 8i64;
					--v8;
				} while (v8);
			}
			if (v7 < v3)
				v3 = v7;
			v6 += 8i64;
			--v2;
		} while (v2);
		if (v3 != -1)
			return v3;
	}
	if (!dword_140C7E6A0[0])
		sub_1406454B0();
	if (qword_140C63840)
	{
		v11 = (_DWORD*)qword_140C63840(off_140A6E180, a2, qword_140C63858);
	}
	else
	{
		if (dword_140C64698 || (int)sub_14024AA60() < 0)
			return 0i64;
		v11 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C08 + 24i64))(
			qword_140C63C08,
			a2);
	}
	if (!v11)
		return 0i64;
	v12 = v11[19];
	if (*((_DWORD*)&qword_140C7E6A4 + (int)v11[20]) - v11[18] < (unsigned int)v12)
		v12 = *((_DWORD*)&qword_140C7E6A4 + (int)v11[20]) - v11[18];
	if (v12 < 1)
		return (unsigned int)v12;
	return v5;
}
// 140A6E180: using guessed type wchar_t *off_140A6E180[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C08: using guessed type __int64 qword_140C63C08;
// 140C64698: using guessed type int dword_140C64698;
// 140C7E6A0: using guessed type int dword_140C7E6A0[];
// 140C7E6A4: using guessed type __int64 qword_140C7E6A4;

