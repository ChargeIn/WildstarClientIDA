#include "../winhttp.h"

//----- (00000001400E8E30) ----------------------------------------------------
__int64 __fastcall sub_1400E8E30(__int64 a1, __int64 a2)
{
	__int64 v4; // rbx
	__int64 v5; // rax
	unsigned int v6; // r14d
	__int64 v7; // rcx
	__int64 v8; // rax
	unsigned __int64* v9; // rbp
	unsigned __int64 v10; // rsi
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rcx
	_QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF

	if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
		sub_14005E2C0(a2);
	v4 = *(_QWORD*)(a2 + 16);
	v5 = sub_14005C1B0(a2, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(a2 + 16) += 16i64;
	v6 = 0;
	if (*(_QWORD*)(a1 + 3208))
	{
		v7 = 0i64;
		do
		{
			v8 = *(_QWORD*)(a2 + 16);
			++v6;
			*(_DWORD*)(v8 + 8) = 3;
			*(double*)v8 = (double)(int)v6;
			*(_QWORD*)(a2 + 16) += 16i64;
			v9 = (unsigned __int64*)sub_14018F0E0(
				v15,
				*(unsigned __int16**)(*(_QWORD*)(*(_QWORD*)(a1 + 3200) + 8 * v7) + 24i64))[1];
			if (v9)
			{
				v10 = -1i64;
				do
					++v10;
				while (*((_BYTE*)v9 + v10));
				if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
					sub_14005E2C0(a2);
				v11 = *(_QWORD*)(a2 + 16);
				v12 = sub_140062650(a2, v9, v10);
				*(_DWORD*)(v11 + 8) = 4;
				*(_QWORD*)v11 = v12;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a2 + 16) + 8i64) = 0;
			}
			v13 = v15[1];
			*(_QWORD*)(a2 + 16) += 16i64;
			if (v13)
				sub_14018B900(v13, 0);
			sub_14005EA50(
				a2,
				(__int64*)(*(_QWORD*)(a2 + 16) - 48i64),
				(int*)(*(_QWORD*)(a2 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a2 + 16) - 16i64));
			*(_QWORD*)(a2 + 16) -= 32i64;
			v7 = v6;
		} while ((unsigned __int64)v6 < *(_QWORD*)(a1 + 3208));
	}
	return 1i64;
}

