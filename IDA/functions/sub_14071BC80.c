#include "../winhttp.h"

//----- (000000014071BC80) ----------------------------------------------------
__int64 __fastcall sub_14071BC80(__int64 a1)
{
	_DWORD* v1; // rdx
	int v2; // r8d
	BOOL v3; // r9d
	__int64 result; // rax

	if (!*(_QWORD*)(a1 + 72))
	{
		v1 = (_DWORD*)qword_140C65898;
		v2 = *(_DWORD*)(a1 + 388);
		v3 = *(_DWORD*)(a1 + 384) == 0;
		if (v2 >= *(_DWORD*)(qword_140C65898 + 29404))
		{
			result = *(unsigned int*)(a1 + 376);
			*(_DWORD*)(qword_140C65898 + 29412) = *(_DWORD*)(a1 + 380);
			v1[7352] = v3;
			v1[7350] = result;
			v1[7351] = v2;
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

