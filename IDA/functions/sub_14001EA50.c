#include "../winhttp.h"

//----- (000000014001EA50) ----------------------------------------------------
void __fastcall sub_14001EA50(__int64 a1, _QWORD* a2)
{
	_QWORD* v2; // rdi
	_QWORD** v4; // rax
	_QWORD* v5; // rsi
	_QWORD* v6; // rbx
	__int64 v7; // rcx

	if (a2)
	{
		v2 = a2;
		do
		{
			sub_14001EA50(a1, v2[3]);
			v4 = (_QWORD**)v2[6];
			v5 = (_QWORD*)v2[2];
			v6 = *v4;
			if (*v4 != v4)
			{
				do
				{
					v7 = (__int64)v6;
					v6 = (_QWORD*)*v6;
					sub_14018B900(v7, 0);
				} while (v6 != (_QWORD*)v2[6]);
			}
			*(_QWORD*)v2[6] = v2[6];
			*(_QWORD*)(v2[6] + 8i64) = v2[6];
			sub_14018B900(v2[6], 0);
			sub_14018B900((__int64)v2, 0);
			v2 = v5;
		} while (v5);
	}
}

