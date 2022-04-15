#include "../winhttp.h"

//----- (0000000140061150) ----------------------------------------------------
unsigned __int64 __fastcall sub_140061150(_QWORD* a1, __int64 a2)
{
	_QWORD* i; // rax
	unsigned __int64 j; // rcx
	__int64 v5; // rax
	unsigned __int64 result; // rax

	a1[2] = a1[8] + ((a1[2] - a2) & 0xFFFFFFFFFFFFFFF0ui64);
	for (i = (_QWORD*)a1[19]; i; i = (_QWORD*)*i)
		i[2] = a1[8] + ((i[2] - a2) & 0xFFFFFFFFFFFFFFF0ui64);
	for (j = a1[10]; j <= a1[5]; *(_QWORD*)(j - 32) = a1[8] + ((*(_QWORD*)(j - 32) - a2) & 0xFFFFFFFFFFFFFFF0ui64))
	{
		v5 = *(_QWORD*)(j + 16);
		j += 40i64;
		*(_QWORD*)(j - 24) = a1[8] + ((v5 - a2) & 0xFFFFFFFFFFFFFFF0ui64);
		*(_QWORD*)(j - 40) = a1[8] + ((*(_QWORD*)(j - 40) - a2) & 0xFFFFFFFFFFFFFFF0ui64);
	}
	result = a1[8] + ((a1[3] - a2) & 0xFFFFFFFFFFFFFFF0ui64);
	a1[3] = result;
	return result;
}

