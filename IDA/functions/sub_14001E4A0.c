#include "../winhttp.h"

//----- (000000014001E4A0) ----------------------------------------------------
void __fastcall sub_14001E4A0(__int64 a1, _QWORD* a2)
{
	_QWORD* v2; // rdi
	_QWORD* v4; // rsi

	if (a2)
	{
		v2 = a2;
		do
		{
			sub_14001E4A0(a1, v2[3]);
			v4 = (_QWORD*)v2[2];
			if (v2[7])
			{
				sub_14001EE00((__int64)(v2 + 5), *(_QWORD**)(v2[6] + 8i64));
				*(_QWORD*)(v2[6] + 16i64) = v2[6];
				*(_QWORD*)(v2[6] + 8i64) = 0i64;
				*(_QWORD*)(v2[6] + 24i64) = v2[6];
				v2[7] = 0i64;
			}
			sub_14018B900(v2[6], 0);
			sub_14018B900((__int64)v2, 0);
			v2 = v4;
		} while (v4);
	}
}

