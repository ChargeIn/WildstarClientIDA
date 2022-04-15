#include "../winhttp.h"

//----- (00000001406FD3B0) ----------------------------------------------------
__int64 __fastcall sub_1406FD3B0(__int64 a1)
{
	unsigned int v2; // eax
	unsigned int v3; // r15d
	__int64 v4; // rbx
	__int64 v5; // rax
	unsigned int v6; // ebx
	__int64 v7; // rax
	unsigned int v8; // r14d
	__int64(__fastcall * v9)(wchar_t**, _QWORD, __int64); // rax
	__int64 v10; // rax
	__int64 v11; // rsi
	__int64 v12; // rbx
	__int64 v13; // rax
	int v14; // ebp
	__int64 v15; // rbx
	__int64 v16; // rax
	__int64 v17; // rax
	__int64* v18; // rax
	__int64 v19; // rdx
	unsigned __int64 v20; // rcx
	unsigned __int16* v21; // r9
	int v22; // esi
	__int64 v23; // rbx
	__int64 v24; // rax
	_DWORD* v25; // rcx
	__int64* v26; // rax

	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6DE70, qword_140C63858);
	}
	else
	{
		if (dword_140C64114 || (int)sub_140246EE0() < 0)
			goto LABEL_31;
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65160 + 40i64))(qword_140C65160);
	}
	v3 = v2;
	if (!v2)
	{
	LABEL_31:
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 0i64;
	}
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v4 = *(_QWORD*)(a1 + 16);
	v5 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(a1 + 16) += 16i64;
	v6 = 0;
	if (v3)
	{
		while (1)
		{
			v7 = *(_QWORD*)(a1 + 16);
			v8 = v6 + 1;
			*(_DWORD*)(v7 + 8) = 3;
			*(double*)v7 = (double)(int)(v6 + 1);
			v9 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63848;
			*(_QWORD*)(a1 + 16) += 16i64;
			if (v9)
				break;
			if (dword_140C64114)
			{
				v11 = 0i64;
			}
			else
			{
				if ((int)sub_140246EE0() >= 0)
				{
					v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65160 + 32i64))(qword_140C65160, v6);
					goto LABEL_17;
				}
				v11 = 0i64;
			}
		LABEL_18:
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v12 = *(_QWORD*)(a1 + 16);
			v13 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v12 + 8) = 5;
			*(_QWORD*)v12 = v13;
			*(_QWORD*)(a1 + 16) += 16i64;
			v14 = *(_DWORD*)v11;
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v15 = *(_QWORD*)(a1 + 16);
			v16 = sub_140062650(a1, (unsigned __int64*)"nId", 3ui64);
			*(_DWORD*)(v15 + 8) = 4;
			*(_QWORD*)v15 = v16;
			*(_QWORD*)(a1 + 16) += 16i64;
			v17 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v17 + 8) = 3;
			*(double*)v17 = (double)v14;
			*(_QWORD*)(a1 + 16) += 16i64;
			v18 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v18, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
			v20 = *(_QWORD*)(v11 + 8);
			if (v20)
			{
				if (v20 <= qword_140C3FE70)
					v21 = (unsigned __int16*)(v20 + qword_140C3FE68);
				else
					v21 = 0i64;
			}
			else
			{
				v21 = 0i64;
			}
			sub_1400F0090(a1, v19, (unsigned __int64*)"strForm", v21);
			v22 = *(_DWORD*)(v11 + 16) & 1;
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v23 = *(_QWORD*)(a1 + 16);
			v24 = sub_140062650(a1, (unsigned __int64*)"bIsRelative", 0xBui64);
			*(_DWORD*)(v23 + 8) = 4;
			*(_QWORD*)v23 = v24;
			*(_QWORD*)(a1 + 16) += 16i64;
			v25 = *(_DWORD**)(a1 + 16);
			v25[2] = 1;
			*v25 = v22 != 0;
			*(_QWORD*)(a1 + 16) += 16i64;
			v26 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v26, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
			sub_14005EA50(
				a1,
				(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
				(int*)(*(_QWORD*)(a1 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
			v6 = v8;
			if (v8 >= v3)
				return 1i64;
		}
		v10 = v9(off_140A6DE70, v6, qword_140C63858);
	LABEL_17:
		v11 = v10;
		goto LABEL_18;
	}
	return 1i64;
}
// 1406FD5B8: variable 'v19' is possibly undefined
// 140A6DE70: using guessed type wchar_t *off_140A6DE70[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64114: using guessed type int dword_140C64114;
// 140C65160: using guessed type __int64 qword_140C65160;

