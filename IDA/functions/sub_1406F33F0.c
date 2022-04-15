#include "../winhttp.h"

//----- (00000001406F33F0) ----------------------------------------------------
__int64 __fastcall sub_1406F33F0(_QWORD* a1)
{
	unsigned int v1; // esi
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // rax
	unsigned int v6; // eax
	unsigned int v7; // ebp
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // r10d
	__int64 v13; // rax
	_QWORD* v14; // rax
	__int64 v15; // r8
	__int64 v16; // rdx
	int v17; // r10d
	__int64(__fastcall * *v19)(); // [rsp+20h] [rbp-28h] BYREF
	int v20; // [rsp+28h] [rbp-20h]
	_QWORD* v21; // [rsp+30h] [rbp-18h]
	int v22; // [rsp+38h] [rbp-10h]

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v5) + 400i64) == a1)
				break;
			v5 = ++v4;
		} while (v4 < v3);
	}
	if (qword_140C63838)
	{
		v6 = qword_140C63838(off_140A6B0F0, qword_140C63858);
	}
	else
	{
		if (dword_140C64FBC || (int)sub_14020FAE0() < 0)
			return 0i64;
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63C10 + 40i64))(qword_140C63C10);
	}
	v7 = v6;
	if (!v6)
		return 0i64;
	v8 = a1[4];
	v19 = off_140B569F0;
	v9 = *(_QWORD*)(v8 + 112);
	v21 = a1;
	v22 = 1;
	if (*(_QWORD*)(v8 + 120) >= v9)
		sub_14005E2C0((__int64)a1);
	v10 = a1[2];
	v11 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v10 + 8) = 5;
	*(_QWORD*)v10 = v11;
	a1[2] += 16i64;
	v12 = sub_1400578C0((__int64)a1);
	v20 = v12;
	if (v7)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C64FBC && (int)sub_14020FAE0() >= 0)
			{
				v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C10 + 32i64))(qword_140C63C10, v1);
				goto LABEL_19;
			}
		LABEL_23:
			if (++v1 >= v7)
			{
				v12 = v20;
				goto LABEL_25;
			}
		}
		v13 = qword_140C63848(off_140A6B0F0, v1, qword_140C63858);
	LABEL_19:
		if (v13 && (*(_BYTE*)(v13 + 12) & 8) == 0)
		{
			if ((unsigned int)sub_1406B91F0(a1, v13))
			{
				sub_1400FB470((__int64)&v19);
				a1 = v21;
				v21[2] -= 16i64;
			}
		}
		goto LABEL_23;
	}
LABEL_25:
	v14 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v12);
	v15 = a1[2];
	*(_QWORD*)v15 = *v14;
	v16 = *((unsigned int*)v14 + 2);
	*(_DWORD*)(v15 + 8) = v16;
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v16, v17);
	return 1i64;
}
// 1406F35A9: variable 'v17' is possibly undefined
// 140A6B0F0: using guessed type wchar_t *off_140A6B0F0[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C10: using guessed type __int64 qword_140C63C10;
// 140C64FBC: using guessed type int dword_140C64FBC;

