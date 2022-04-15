#include "../winhttp.h"

//----- (00000001402E6940) ----------------------------------------------------
void __fastcall sub_1402E6940(_QWORD* a1)
{
	__int64 v1; // rsi
	unsigned __int64 v3; // rbp
	__int64 v4; // rbx
	__int64 v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rsi
	__int64 v10; // rsi
	_QWORD* v11; // rcx
	__int64 v12; // rcx
	__int64 v13[3]; // [rsp+20h] [rbp-18h] BYREF

	v1 = a1[2];
	*a1 = off_140B635C0;
	v13[0] = a1[3];
	v13[1] = a1[4];
	v3 = (*(__int64(__fastcall**)(__int64*))(v1 + 112))(v13);
	v4 = *(_QWORD*)(v1 + 104) + 8 * (v3 % *(_QWORD*)(v1 + 96));
	if (*(_QWORD*)v4)
	{
		while (v3 != **(_QWORD**)v4
			|| !(*(unsigned int(__fastcall**)(__int64*, __int64))(v1 + 120))(v13, *(_QWORD*)v4 + 16i64))
		{
			v4 = *(_QWORD*)v4 + 8i64;
			if (!*(_QWORD*)v4)
				goto LABEL_7;
		}
		v5 = *(_QWORD*)v4;
		*(_QWORD*)v4 = *(_QWORD*)(*(_QWORD*)v4 + 8i64);
		sub_14018B900(v5, 0);
		--* (_QWORD*)(v1 + 88);
	}
LABEL_7:
	v6 = (_QWORD*)a1[5];
	if (v6)
		*v6 = a1[6];
	v7 = a1[6];
	if (v7)
		*(_QWORD*)(v7 + 40) = a1[5];
	v8 = a1[4];
	a1[5] = 0i64;
	a1[6] = 0i64;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	v9 = a1[3];
	if (v9 && !_InterlockedDecrement((volatile signed __int32*)(v9 + 12)))
	{
		sub_1402E9750((_QWORD*)v9);
		sub_14018B900(v9, 0);
	}
	v10 = a1[2];
	if (!_InterlockedDecrement((volatile signed __int32*)(v10 + 12)) && v10)
	{
		sub_1402E1540(v10);
		sub_14018B900(v10, 0);
	}
	v11 = (_QWORD*)a1[5];
	if (v11)
		*v11 = a1[6];
	v12 = a1[6];
	if (v12)
		*(_QWORD*)(v12 + 40) = a1[5];
	a1[6] = 0i64;
	a1[5] = 0i64;
}
// 1402E6A1A: conditional instruction was optimized away because rsi.8!=0
// 140B635C0: using guessed type __int64 (__fastcall *off_140B635C0[53])();

