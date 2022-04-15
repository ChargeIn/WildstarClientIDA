#include "../winhttp.h"

//----- (0000000140731740) ----------------------------------------------------
__int64 __fastcall sub_140731740(_QWORD* a1)
{
	unsigned int v2; // r9d
	unsigned __int64 v3; // rdx
	__int64 v4; // rsi
	void(__fastcall * **v5)(_QWORD); // rbx
	int* v6; // rcx
	unsigned int v7; // edi

	v2 = sub_140056D60(a1, 1u);
	v3 = (unsigned __int64)v2 % *(_QWORD*)(qword_140C658A0 + 216);
	if (v3 < *(_QWORD*)(qword_140C658A0 + 240)
		&& (v4 = 48 * v3 + *(_QWORD*)(qword_140C658A0 + 232), *(_DWORD*)v4 == v2))
	{
		v5 = 0i64;
		v6 = sub_14018B280(104i64, 0);
		if (v6)
			v5 = (void(__fastcall***)(_QWORD))sub_14073DE90(
				(__int64)v6,
				*(int**)(v4 + 32),
				*(int**)(v4 + 40),
				(_QWORD*)(v4 + 8),
				0,
				5,
				*(_QWORD*)(v4 + 24));
		v7 = sub_14073EB30(a1, v5);
		if (v5)
			(*v5)[1](v5);
		return v7;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C658A0: using guessed type __int64 qword_140C658A0;

