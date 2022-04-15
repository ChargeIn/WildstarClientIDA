#include "../winhttp.h"

//----- (00000001403FAE60) ----------------------------------------------------
void __fastcall sub_1403FAE60(__int64 a1)
{
	_QWORD* v1; // rbx
	_QWORD* i; // rdi
	__int64 v4; // rcx
	__int64 v5; // rcx

	v1 = *(_QWORD**)(a1 + 8);
	for (i = *(_QWORD**)(a1 + 16); v1 != i; v1 += 6)
	{
		if (*v1)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v1 + 8i64))(*v1);
			*v1 = 0i64;
		}
		v4 = v1[3];
		if (v4)
			sub_14018B900(v4, 0);
	}
	v5 = *(_QWORD*)(a1 + 8);
	if (v5)
		sub_14018B900(v5, 0);
}

