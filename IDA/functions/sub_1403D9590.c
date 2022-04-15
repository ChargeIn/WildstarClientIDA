#include "../winhttp.h"

//----- (00000001403D9590) ----------------------------------------------------
__int64 __fastcall sub_1403D9590(__int64 a1, __int64 a2, double a3, double a4)
{
	__int64 v6; // rcx
	_QWORD* v7; // rax
	__int64 v8; // rcx
	__int64 result; // rax
	unsigned __int64 v10; // rbp
	__int64 v11; // rbx
	__int64 v12; // rcx
	_QWORD* v13; // rcx
	__int64 v14; // rcx
	unsigned int v15; // edx
	unsigned int v16; // [rsp+38h] [rbp+10h] BYREF

	if (!a2)
		return 0i64;
	v6 = *(_QWORD*)(a1 + 29504);
	v16 = *(_DWORD*)(a2 + 8);
	sub_1400EA3E0(v6, "UnitDestroyed", L"U");
	v7 = (_QWORD*)qword_140C65B88;
	if (!qword_140C65B88)
	{
		v7 = sub_14018B280((unsigned int)(qword_140C65B88 + 72), 0);
		if (v7)
			v7 = sub_1405B92D0(v7);
		qword_140C65B88 = (__int64)v7;
	}
	sub_1405BC270((__int64)v7, a2);
	sub_1403DEA10(a1, a2);
	v8 = *(_QWORD*)(a1 + 120);
	if (v8 && *(_DWORD*)(v8 + 264) == *(_DWORD*)(a2 + 8))
		sub_14055B0E0(a1, 0, a3, a4);
	if (a2 == *(_QWORD*)(a1 + 120))
	{
		sub_1403A0C50(a1);
		sub_14045DD00(*(_QWORD*)(a1 + 120));
		*(_QWORD*)(a1 + 120) = 0i64;
		sub_1403B55E0((_QWORD*)a1);
	}
	if (a2 == *(_QWORD*)(a1 + 25744))
		*(_QWORD*)(a1 + 25744) = *(_QWORD*)(a1 + 120);
	if (*(_DWORD*)(a2 + 128) != 15 || (result = sub_1403DD120(a1, *(_DWORD*)(a2 + 5932)), (int)result >= 0))
	{
		v10 = (*(__int64(__fastcall**)(unsigned int*))(a1 + 28448))(&v16);
		v11 = *(_QWORD*)(a1 + 28440) + 8 * (v10 % *(_QWORD*)(a1 + 28432));
		if (*(_QWORD*)v11)
		{
			while (v10 != **(_QWORD**)v11
				|| !(*(unsigned int(__fastcall**)(unsigned int*, __int64))(a1 + 28456))(&v16, *(_QWORD*)v11 + 16i64))
			{
				v11 = *(_QWORD*)v11 + 8i64;
				if (!*(_QWORD*)v11)
					goto LABEL_21;
			}
			v12 = *(_QWORD*)v11;
			*(_QWORD*)v11 = *(_QWORD*)(*(_QWORD*)v11 + 8i64);
			sub_14018B900(v12, 0);
			--* (_QWORD*)(a1 + 28424);
		}
	LABEL_21:
		v13 = *(_QWORD**)(a2 + 88);
		if (v13)
			*v13 = *(_QWORD*)(a2 + 96);
		v14 = *(_QWORD*)(a2 + 96);
		if (v14)
			*(_QWORD*)(v14 + 88) = *(_QWORD*)(a2 + 88);
		v15 = v16;
		*(_QWORD*)(a2 + 88) = 0i64;
		*(_QWORD*)(a2 + 96) = 0i64;
		sub_140608900(*(_QWORD*)(a1 + 29688), v15);
		(**(void(__fastcall***)(__int64, __int64))a2)(a2, 1i64);
		return 0i64;
	}
	return result;
}
// 1409EDDFC: using guessed type wchar_t aU_5[2];
// 140C65B88: using guessed type __int64 qword_140C65B88;

