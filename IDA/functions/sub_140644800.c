#include "../winhttp.h"

//----- (0000000140644800) ----------------------------------------------------
_QWORD* __fastcall sub_140644800(__int64 a1, __int64 a2)
{
	__int64 v2; // r15
	__int64 v3; // rdi
	_QWORD* result; // rax
	__int64 v6; // rbp
	__int64 v7; // rsi
	unsigned int v8; // ebx
	_QWORD* v9; // r10
	__int64 v10; // r9
	__int64 v11; // rcx
	__int64 v12; // rdx
	__int64* v13; // rcx
	__int64 v14; // rcx
	_QWORD v15[2]; // [rsp+20h] [rbp-48h] BYREF
	char v16[16]; // [rsp+30h] [rbp-38h] BYREF
	__int64 v17; // [rsp+70h] [rbp+8h] BYREF
	__int64 v18; // [rsp+80h] [rbp+18h] BYREF

	v17 = a1;
	v2 = qword_140C65C28;
	v3 = 0i64;
	if (qword_140C63838)
	{
		result = (_QWORD*)qword_140C63838(off_140A69138, qword_140C63858);
	}
	else if (dword_140C64944)
	{
		result = 0i64;
	}
	else if ((int)sub_1401E9240() >= 0)
	{
		result = (_QWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64218 + 40i64))(qword_140C64218);
	}
	else
	{
		result = 0i64;
	}
	if ((_DWORD)result)
	{
		v6 = (unsigned int)result;
		while (1)
		{
			v7 = *(_QWORD*)(v2 + 24);
			v8 = *(_DWORD*)(*(_QWORD*)(v7 + v3) + 16i64);
			result = qword_140C63840;
			if (qword_140C63840)
				break;
			if (!dword_140C64634)
			{
				result = (_QWORD*)sub_14024D920();
				if ((int)result >= 0)
				{
					result = (_QWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(
						qword_140C64270,
						v8);
				LABEL_15:
					v9 = result;
					if (result)
					{
						result = *(_QWORD**)(a2 + 8);
						v10 = *(_QWORD*)(v7 + v3);
						v11 = result[1];
						v12 = (__int64)result;
						while (v11)
						{
							if (*(_DWORD*)(v11 + 32) < *(_DWORD*)(v10 + 16))
							{
								v11 = *(_QWORD*)(v11 + 24);
							}
							else
							{
								v12 = v11;
								v11 = *(_QWORD*)(v11 + 16);
							}
						}
						if ((_QWORD*)v12 == result || *(_DWORD*)(v10 + 16) < *(_DWORD*)(v12 + 32))
						{
							v18 = *(_QWORD*)(a2 + 8);
							v13 = &v18;
						}
						else
						{
							v17 = v12;
							v13 = &v17;
						}
						if ((_QWORD*)*v13 == result)
						{
							result = sub_14034BDD0((__int64)v13, *((_DWORD*)v9 + 1));
							if (result)
							{
								v14 = *(_QWORD*)(v7 + v3);
								v15[1] = result;
								LODWORD(v15[0]) = *(_DWORD*)(v14 + 16);
								result = (_QWORD*)sub_140055F80(a2, (__int64)v16, v15);
							}
						}
					}
				}
			}
			v3 += 48i64;
			if (!--v6)
				return result;
		}
		result = (_QWORD*)qword_140C63840(off_140A6E3E8, v8, qword_140C63858);
		goto LABEL_15;
	}
	return result;
}
// 140A69138: using guessed type wchar_t *off_140A69138[2];
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64218: using guessed type __int64 qword_140C64218;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;
// 140C64944: using guessed type int dword_140C64944;
// 140C65C28: using guessed type __int64 qword_140C65C28;
// 140644800: using guessed type char var_38[16];

