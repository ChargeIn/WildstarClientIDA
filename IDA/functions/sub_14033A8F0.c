#include "../winhttp.h"

//----- (000000014033A8F0) ----------------------------------------------------
void __fastcall sub_14033A8F0(__int64 a1)
{
	_QWORD** v1; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rcx

	v1 = *(_QWORD***)(a1 + 8);
	v3 = *v1;
	if (*v1 != v1)
	{
		do
		{
			v4 = (__int64)v3;
			v3 = (_QWORD*)*v3;
			v5 = *(_QWORD*)(v4 + 24);
			if (v5)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			sub_14018B900(v4, 0);
		} while (v3 != *(_QWORD**)(a1 + 8));
	}
	**(_QWORD**)(a1 + 8) = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64) = *(_QWORD*)(a1 + 8);
	sub_14018B900(*(_QWORD*)(a1 + 8), 0);
}

