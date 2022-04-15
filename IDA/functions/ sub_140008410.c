#include "../winhttp.h"

//----- (0000000140008410) ----------------------------------------------------
void __fastcall sub_140008410(__int64 a1)
{
	__int64 v2; // rsi
	__int64 v3; // rbx

	if (*(_QWORD*)(a1 + 16))
	{
		v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64);
		if (v2)
		{
			do
			{
				sub_1400083B0(a1, *(_QWORD*)(v2 + 24));
				v3 = *(_QWORD*)(v2 + 16);
				sub_14018B900(v2, 0);
				v2 = v3;
			} while (v3);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64) = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(a1 + 16) = 0i64;
	}
}

