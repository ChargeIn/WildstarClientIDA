#include "../winhttp.h"

//----- (0000000140647580) ----------------------------------------------------
__int64 __fastcall sub_140647580(__int64 a1, _DWORD* a2)
{
	unsigned int v2; // r12d
	unsigned __int16** v3; // r14
	unsigned int v4; // eax
	unsigned int v5; // r15d
	unsigned int v6; // esi
	int v7; // r13d
	__int64 v8; // rax
	_DWORD* v9; // rbx
	int v10; // edx
	__int16* v11; // rbp
	__int64 v12; // rcx
	__int16* v13; // rax
	unsigned __int16* v14; // r14
	__int16* v15; // rdi
	__int64 result; // rax
	unsigned __int16** v17; // [rsp+60h] [rbp+8h]
	unsigned int v19; // [rsp+70h] [rbp+18h]

	v17 = (unsigned __int16**)a1;
	v2 = 0;
	v3 = (unsigned __int16**)a1;
	v19 = 0;
	if (qword_140C63838)
	{
		v4 = qword_140C63838(off_140A6C938, qword_140C63858);
	}
	else
	{
		if (dword_140C64C3C)
		{
			v5 = 0;
			goto LABEL_9;
		}
		if ((int)sub_14022D2A0() < 0)
		{
			v5 = 0;
			goto LABEL_9;
		}
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63918 + 40i64))(qword_140C63918);
	}
	v5 = v4;
LABEL_9:
	v6 = 0;
	if (v5)
	{
		v7 = 0;
		while (!qword_140C63848)
		{
			if (dword_140C64C3C)
			{
				v9 = 0i64;
			}
			else
			{
				if ((int)sub_14022D2A0() >= 0)
				{
					v8 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63918 + 32i64))(qword_140C63918, v6);
					goto LABEL_18;
				}
				v9 = 0i64;
			}
		LABEL_19:
			v10 = v9[4];
			if (v10 && v9[5])
			{
				v11 = sub_14034BDD0(a1, v10);
				v13 = sub_14034BDD0(v12, v9[5]);
				v14 = *v3;
				v15 = v13;
				if (!(unsigned int)sub_14018E2C0((__int64)v11, v14)
					|| v11 != v15 && !(unsigned int)sub_14018E2C0((__int64)v15, v14))
				{
					*a2 = *v9;
					return 0i64;
				}
				if ((__int16*)sub_14018E5E0(v11, v14) == v11 || v11 != v15 && (__int16*)sub_14018E5E0(v15, v14) == v15)
				{
					v7 = *v9;
					v3 = v17;
					a1 = v2;
					v19 = v2;
					v2 = 1;
					goto LABEL_29;
				}
				v3 = v17;
			}
			a1 = v19;
		LABEL_29:
			if (++v6 >= v5)
			{
				if (v2 && !(_DWORD)a1)
				{
					result = 0i64;
					*a2 = v7;
					return result;
				}
				return 2147943568i64;
			}
		}
		v8 = qword_140C63848(off_140A6C938, v6, qword_140C63858);
	LABEL_18:
		v9 = (_DWORD*)v8;
		goto LABEL_19;
	}
	return 2147943568i64;
}
// 14064766A: variable 'a1' is possibly undefined
// 140647675: variable 'v12' is possibly undefined
// 140A6C938: using guessed type wchar_t *off_140A6C938[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63918: using guessed type __int64 qword_140C63918;
// 140C64C3C: using guessed type int dword_140C64C3C;

