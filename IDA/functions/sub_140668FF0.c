#include "../winhttp.h"

//----- (0000000140668FF0) ----------------------------------------------------
__int64 __fastcall sub_140668FF0(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	int v4; // edx
	__int64 v5; // rax

	result = sub_140056AB0(a1, 1u);
	if (result)
	{
		v3 = *(_QWORD*)(*(_QWORD*)result + 8i64);
		v4 = *(_DWORD*)(v3 + 420);
		if (!v4)
			v4 = 1;
		v5 = sub_1405A9420(v3, v4);
		return sub_14069F380(a1, v5);
	}
	return result;
}

