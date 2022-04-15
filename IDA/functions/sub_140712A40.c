#include "../winhttp.h"

//----- (0000000140712A40) ----------------------------------------------------
__int64 __fastcall sub_140712A40(_QWORD* a1, unsigned int a2, __int64 a3, __int64 a4)
{
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 result; // rax
	__int64 v12; // rdx
	__int64 v13; // rcx

	sub_140712910((__int64)a1);
	v8 = a1[2];
	if (!v8)
		return 0i64;
	v9 = a1[6];
	if (v9)
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v8 + 24i64))(
			v8,
			v9,
			0i64,
			0i64,
			0i64,
			0i64,
			0i64);
	v10 = a1[3];
	if (v10)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		a1[3] = 0i64;
	}
	result = (*(__int64(__fastcall**)(__int64, _QWORD*, _QWORD))(*(_QWORD*)qword_140C65848 + 24i64))(
		qword_140C65848,
		a1 + 3,
		a2);
	if ((int)result >= 0)
	{
		v12 = a1[4];
		if (v12)
			(*(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1[2] + 24i64))(
				a1[2],
				v12,
				0i64,
				0i64,
				0i64,
				0i64,
				0i64);
		a1[8] = a3;
		a1[9] = a4;
		v13 = a1[7];
		if (v13)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
			a1[7] = 0i64;
		}
		if ((*(int(__fastcall**)(_QWORD, _QWORD, _QWORD*, __int64, void(__fastcall*)(__int64, int, __int64), _QWORD*, _QWORD))(*(_QWORD*)a1[2] + 24i64))(
			a1[2],
			a1[3],
			a1 + 7,
			0x80000000i64,
			sub_140712900,
			a1,
			0i64) < 0)
			sub_140712910((__int64)a1);
		return 0i64;
	}
	return result;
}
// 140C65848: using guessed type __int64 qword_140C65848;

