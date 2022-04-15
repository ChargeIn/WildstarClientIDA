#include "../winhttp.h"

//----- (0000000140131810) ----------------------------------------------------
__int64 __fastcall sub_140131810(_QWORD* a1)
{
	__int64 v2; // rdi
	int v3; // eax
	int* v4; // rdx
	__int64 v5; // rcx
	int v6; // ebx

	v2 = sub_140131630(a1, 1u);
	v3 = sub_140056D60(a1, 2u);
	v4 = *(int**)(v2 + 1472);
	v5 = 0i64;
	v6 = v3;
	if (*(_WORD*)v4)
	{
		do
			++v5;
		while (*((_WORD*)v4 + v5));
	}
	sub_14001C480(v2 + 1464, v4, (int*)((char*)v4 + 2 * v5));
	*(_DWORD*)(v2 + 1496) = v6;
	return 0i64;
}

