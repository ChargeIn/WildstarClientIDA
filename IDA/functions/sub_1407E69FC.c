#include "../winhttp.h"

//----- (00000001407E69FC) ----------------------------------------------------
__int64 sub_1407E69FC()
{
	char** v0; // rax
	char** v1; // rbx
	__int64 v2; // rbx

	v0 = (char**)sub_1407E3D94();
	v1 = v0;
	if ((dword_140C10470 & (_DWORD)v0[25]) != 0 && v0[24])
	{
		v2 = sub_1407E3D94()[24];
	}
	else
	{
		sub_1407E2340(12);
		v2 = sub_1407E6A74(v1 + 24, (__int64)off_140C102E0);
		sub_1407E2528(12);
	}
	if (!v2)
		sub_1407DBBD0(32);
	return v2;
}
// 140C102E0: using guessed type void *off_140C102E0;
// 140C10470: using guessed type int dword_140C10470;

