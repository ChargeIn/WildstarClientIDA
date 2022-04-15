#include "../winhttp.h"

//----- (0000000140420990) ----------------------------------------------------
__int64 __fastcall sub_140420990(__int64 a1, _QWORD* a2, unsigned int a3, _QWORD* a4)
{
	__int64 v5; // rax
	__int64 v6; // rdx
	__int64 result; // rax

	v5 = sub_140056AB0(a2, a3);
	if (v5)
		v6 = *(_QWORD*)(v5 + 8);
	else
		v6 = 0i64;
	*a4 += 8i64;
	result = *(_QWORD*)(v6 + 8);
	**(_QWORD**)(*a4 - 8i64) = result;
	return result;
}

