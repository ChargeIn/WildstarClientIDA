#include "../winhttp.h"

//----- (0000000140490200) ----------------------------------------------------
void __fastcall sub_140490200(_QWORD* a1)
{
	_QWORD** v2; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rcx

	*a1 = off_140B67390;
	v2 = (_QWORD**)a1[3];
	v3 = *v2;
	if (*v2 != v2)
	{
		do
		{
			v4 = (__int64)v3;
			v3 = (_QWORD*)*v3;
			sub_14018B900(v4, 0);
		} while (v3 != (_QWORD*)a1[3]);
	}
	*(_QWORD*)a1[3] = a1[3];
	*(_QWORD*)(a1[3] + 8i64) = a1[3];
	sub_14018B900(a1[3], 0);
}
// 140B67390: using guessed type __int64 (__fastcall *off_140B67390[13])();

