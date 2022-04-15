#include "../winhttp.h"

//----- (00000001400266F0) ----------------------------------------------------
__int64 __fastcall sub_1400266F0(_QWORD* a1)
{
	__int64 v1; // rbx
	_DWORD* v3; // rax
	int v4; // r15d
	int v5; // esi
	int v6; // edi
	unsigned int v7; // ebx
	unsigned int v8; // eax
	unsigned int v9; // r14d
	__int64 v10; // rax
	_DWORD* v11; // r8
	__int64 v12; // rcx
	__int64 v13; // rdx
	__int64 v14; // rax
	__int64* v15; // rax
	_DWORD* v16; // rcx
	__int64 result; // rax
	__int64 v18; // [rsp+50h] [rbp+8h] BYREF
	__int64 v19; // [rsp+58h] [rbp+10h] BYREF

	v1 = qword_140C66DA8;
	if (!*(_QWORD*)(qword_140C66DA8 + 312))
		sub_140021BB0((_QWORD*)qword_140C66DA8);
	if (!*(_QWORD*)(v1 + 344))
		sub_140021D40(v1);
	v3 = (_DWORD*)a1[3];
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || (int)v3[2] <= 0)
		v4 = -1;
	else
		v4 = sub_140056D60(a1, 1u);
	v5 = 0;
	v6 = 0;
	v7 = 0;
	if (qword_140C63838)
	{
		v8 = qword_140C63838(off_140A696B0, qword_140C63858);
	}
	else
	{
		if (dword_140C64324 || (int)sub_1401EFC80() < 0)
			goto LABEL_38;
		v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63F68 + 40i64))(qword_140C63F68);
	}
	v9 = v8;
	if (v8)
	{
		while (1)
		{
			if (v6)
				goto LABEL_38;
			if (qword_140C63848)
				break;
			if (dword_140C64324)
			{
				v11 = 0i64;
			}
			else
			{
				if ((int)sub_1401EFC80() >= 0)
				{
					v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63F68 + 32i64))(qword_140C63F68, v7);
					goto LABEL_24;
				}
				v11 = 0i64;
			}
		LABEL_25:
			if (v11[23] == v4)
			{
				v12 = *(_QWORD*)(qword_140C66DA8 + 336);
				v13 = v12;
				v14 = *(_QWORD*)(v12 + 8);
				while (v14)
				{
					if (*(_DWORD*)(v14 + 32) < *v11)
					{
						v14 = *(_QWORD*)(v14 + 24);
					}
					else
					{
						v13 = v14;
						v14 = *(_QWORD*)(v14 + 16);
					}
				}
				if (v13 == v12 || *v11 < *(_DWORD*)(v13 + 32))
				{
					v19 = *(_QWORD*)(qword_140C66DA8 + 336);
					v15 = &v19;
				}
				else
				{
					v18 = v13;
					v15 = &v18;
				}
				if (*v15 != v12)
					v6 = 1;
			}
			if (++v7 >= v9)
				goto LABEL_38;
		}
		v10 = qword_140C63848(off_140A696B0, v7, qword_140C63858);
	LABEL_24:
		v11 = (_DWORD*)v10;
		goto LABEL_25;
	}
LABEL_38:
	v16 = (_DWORD*)a1[2];
	v16[2] = 1;
	result = 1i64;
	LOBYTE(v5) = v6 != 0;
	*v16 = v5;
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A696B0: using guessed type wchar_t *off_140A696B0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F68: using guessed type __int64 qword_140C63F68;
// 140C64324: using guessed type int dword_140C64324;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

