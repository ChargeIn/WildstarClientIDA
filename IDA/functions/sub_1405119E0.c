#include "../winhttp.h"

//----- (00000001405119E0) ----------------------------------------------------
__int64 __fastcall sub_1405119E0(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64(__fastcall * v4)(wchar_t**, __int64); // rax
	unsigned int v5; // eax
	unsigned int v6; // r15d
	unsigned int v7; // ebp
	__int64 v8; // rax
	__int64 v9; // rsi
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rbx
	__int64 v13; // rax
	int v14; // r14d
	__int64 v15; // rbx
	__int64 v16; // rax
	__int64 v17; // rax
	__int64* v18; // rax
	__int64 v19; // rdx
	unsigned __int64 v20; // rcx
	unsigned __int16* v21; // r9

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	v4 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v4)
	{
		v5 = v4(off_140A6B780, qword_140C63858);
	}
	else
	{
		if (dword_140C64C4C)
		{
			v6 = 0;
			goto LABEL_11;
		}
		if ((int)sub_140217A60() < 0)
		{
			v6 = 0;
			goto LABEL_11;
		}
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65358 + 40i64))(qword_140C65358);
	}
	v6 = v5;
LABEL_11:
	v7 = 0;
	if (v6)
	{
		while (!qword_140C63848)
		{
			if (dword_140C64C4C)
			{
				v9 = 0i64;
			}
			else
			{
				if ((int)sub_140217A60() >= 0)
				{
					v8 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65358 + 32i64))(qword_140C65358, v7);
					goto LABEL_19;
				}
				v9 = 0i64;
			}
		LABEL_20:
			v10 = *(_QWORD*)(a1 + 16);
			++v7;
			*(_DWORD*)(v10 + 8) = 3;
			*(double*)v10 = (double)(int)v7;
			v11 = *(_QWORD*)(a1 + 32);
			*(_QWORD*)(a1 + 16) += 16i64;
			if (*(_QWORD*)(v11 + 120) >= *(_QWORD*)(v11 + 112))
				sub_14005E2C0(a1);
			v12 = *(_QWORD*)(a1 + 16);
			v13 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v12 + 8) = 5;
			*(_QWORD*)v12 = v13;
			*(_QWORD*)(a1 + 16) += 16i64;
			v14 = *(_DWORD*)v9;
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v15 = *(_QWORD*)(a1 + 16);
			v16 = sub_140062650(a1, qword_1409F131C, 2ui64);
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
			v20 = *(_QWORD*)(v9 + 8);
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
			sub_1400F0090(a1, v19, (unsigned __int64*)"name", v21);
			sub_14005EA50(
				a1,
				(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
				(int*)(*(_QWORD*)(a1 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
			if (v7 >= v6)
				return 1i64;
		}
		v8 = qword_140C63848(off_140A6B780, v7, qword_140C63858);
	LABEL_19:
		v9 = v8;
		goto LABEL_20;
	}
	return 1i64;
}
// 140511BD9: variable 'v19' is possibly undefined
// 1409F131C: using guessed type unsigned __int64 qword_1409F131C[3];
// 140A6B780: using guessed type wchar_t *off_140A6B780[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64C4C: using guessed type int dword_140C64C4C;
// 140C65358: using guessed type __int64 qword_140C65358;

