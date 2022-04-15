#include "../winhttp.h"

//----- (0000000140720400) ----------------------------------------------------
void __fastcall sub_140720400(__int64 a1, __int64 a2)
{
	_QWORD** v2; // rax
	_QWORD* v4; // rbx
	__int64 v5; // rcx

	v2 = *(_QWORD***)(a2 + 48);
	v4 = *v2;
	if (*v2 != v2)
	{
		do
		{
			v5 = (__int64)v4;
			v4 = (_QWORD*)*v4;
			sub_14018B900(v5, 0);
		} while (v4 != *(_QWORD**)(a2 + 48));
	}
	**(_QWORD**)(a2 + 48) = *(_QWORD*)(a2 + 48);
	*(_QWORD*)(*(_QWORD*)(a2 + 48) + 8i64) = *(_QWORD*)(a2 + 48);
	sub_14018B900(*(_QWORD*)(a2 + 48), 0);
	sub_14018B900(a2, 0);
}

