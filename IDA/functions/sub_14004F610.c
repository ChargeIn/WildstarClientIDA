#include "../winhttp.h"

//----- (000000014004F610) ----------------------------------------------------
__int64 __fastcall sub_14004F610(unsigned int* a1)
{
	unsigned __int64 v1; // rax

	v1 = *a1;
	if (v1 >= *(_QWORD*)(qword_140C63678 + 48))
		return *(_QWORD*)(qword_140C63678 + 40);
	else
		return *(_QWORD*)(qword_140C63678 + 40) + 32 * v1;
}
// 140C63678: using guessed type __int64 qword_140C63678;

