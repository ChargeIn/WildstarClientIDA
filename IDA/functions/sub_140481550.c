#include "../winhttp.h"

//----- (0000000140481550) ----------------------------------------------------
void __fastcall sub_140481550(__int64 a1, _QWORD* a2)
{
	_QWORD* v2; // rbx
	_QWORD* v4; // rsi

	if (a2)
	{
		v2 = a2;
		do
		{
			sub_140481550(a1, v2[3]);
			v4 = (_QWORD*)v2[2];
			sub_1403FE250((__int64)(v2 + 5));
			sub_14018B900(v2[6], 0);
			sub_14018B900((__int64)v2, 0);
			v2 = v4;
		} while (v4);
	}
}

