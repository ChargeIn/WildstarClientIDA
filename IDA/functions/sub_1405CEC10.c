#include "../winhttp.h"

//----- (00000001405CEC10) ----------------------------------------------------
void __fastcall sub_1405CEC10(__int64 a1, __int64 a2)
{
	__int64 v2; // rbp
	unsigned __int64 v4; // rdi
	_QWORD* v5; // rbx
	__int64* v6; // rbx
	__int64 v7; // rbx

	v2 = a2 + 8;
	v4 = (*(__int64(__fastcall**)(__int64))(a1 + 712))(a2 + 8);
	v5 = *(_QWORD**)(*(_QWORD*)(a1 + 704) + 8 * (v4 % *(_QWORD*)(a1 + 696)));
	if (v5)
	{
		while (v4 != *v5 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 720))(v2, v5 + 2))
		{
			v5 = (_QWORD*)v5[1];
			if (!v5)
				return;
		}
		v6 = v5 + 3;
		if (v6)
		{
			v7 = *v6;
			if (v7)
			{
				sub_1405CB900(v7);
				sub_14018B900(v7, 0);
			}
		}
	}
}

