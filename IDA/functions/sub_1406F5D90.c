#include "../winhttp.h"

//----- (00000001406F5D90) ----------------------------------------------------
__int64 __fastcall sub_1406F5D90(__int64 a1)
{
	int v2; // eax
	int v3; // r14d
	__int64 v4; // rbx
	__int64 v5; // rax
	unsigned int v6; // ebp
	int v7; // r15d
	__int64 v8; // rax
	_DWORD* v9; // rsi
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rbx
	__int64 v13; // rax
	__int64 v14; // rax
	__int64* v15; // rax
	__int64 v16; // rcx
	__int16* v17; // rax
	__int64 v18; // rdx

	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6AB40, qword_140C63858);
	}
	else
	{
		if (dword_140C639AC)
		{
			v3 = 0;
			goto LABEL_9;
		}
		if ((int)sub_140208C00() < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C644F8 + 40i64))(qword_140C644F8);
	}
	v3 = v2;
LABEL_9:
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v4 = *(_QWORD*)(a1 + 16);
	v5 = sub_14005C1B0(a1, 0, 0);
	v6 = 0;
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(a1 + 16) += 16i64;
	v7 = 1;
	if (v3 > 0)
	{
		while (!qword_140C63848)
		{
			if (dword_140C639AC)
			{
				v9 = 0i64;
			}
			else
			{
				if ((int)sub_140208C00() >= 0)
				{
					v8 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C644F8 + 32i64))(qword_140C644F8, v6);
					goto LABEL_19;
				}
				v9 = 0i64;
			}
		LABEL_20:
			if (((*v9 - 1) & 0xFFFFFFF7) != 0)
			{
				v10 = *(_QWORD*)(a1 + 16);
				*(_DWORD*)(v10 + 8) = 3;
				*(double*)v10 = (double)v7;
				v11 = *(_QWORD*)(a1 + 32);
				*(_QWORD*)(a1 + 16) += 16i64;
				if (*(_QWORD*)(v11 + 120) >= *(_QWORD*)(v11 + 112))
					sub_14005E2C0(a1);
				v12 = *(_QWORD*)(a1 + 16);
				v13 = sub_14005C1B0(a1, 0, 0);
				*(_DWORD*)(v12 + 8) = 5;
				*(_QWORD*)v12 = v13;
				*(_QWORD*)(a1 + 16) += 16i64;
				LODWORD(v12) = *v9;
				sub_140058710(a1, (unsigned __int64*)"nCategoryId", 0xBui64);
				v14 = *(_QWORD*)(a1 + 16);
				*(_DWORD*)(v14 + 8) = 3;
				*(double*)v14 = (double)(int)v12;
				*(_QWORD*)(a1 + 16) += 16i64;
				v15 = (__int64*)sub_1400580E0(a1, -3);
				sub_14005EA50(a1, v15, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 32i64;
				v17 = sub_14034BDD0(v16, v9[1]);
				sub_1400F0090(a1, v18, (unsigned __int64*)"strName", (unsigned __int16*)v17);
				sub_14005EA50(
					a1,
					(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
					(int*)(*(_QWORD*)(a1 + 16) - 32i64),
					(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 32i64;
				++v7;
			}
			if ((int)++v6 >= v3)
				return 1i64;
		}
		v8 = qword_140C63848(off_140A6AB40, v6, qword_140C63858);
	LABEL_19:
		v9 = (_DWORD*)v8;
		goto LABEL_20;
	}
	return 1i64;
}
// 1406F5F4D: variable 'v16' is possibly undefined
// 1406F5F5F: variable 'v18' is possibly undefined
// 140A6AB40: using guessed type wchar_t *off_140A6AB40[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C639AC: using guessed type int dword_140C639AC;
// 140C644F8: using guessed type __int64 qword_140C644F8;

