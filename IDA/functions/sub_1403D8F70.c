#include "../winhttp.h"

//----- (00000001403D8F70) ----------------------------------------------------
__int64 __fastcall sub_1403D8F70(__int64 a1, int a2)
{
	unsigned __int64 v3; // rdi
	_QWORD* v4; // rbx
	unsigned int* v6; // rbx
	int v7; // [rsp+38h] [rbp+10h] BYREF

	v7 = a2;
	v3 = (*(__int64(__fastcall**)(int*))(a1 + 336))(&v7);
	v4 = *(_QWORD**)(*(_QWORD*)(a1 + 328) + 8 * (v3 % *(_QWORD*)(a1 + 320)));
	if (!v4)
		return 0i64;
	while (v3 != *v4 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 344))(&v7, v4 + 2))
	{
		v4 = (_QWORD*)v4[1];
		if (!v4)
			return 0i64;
	}
	v6 = (unsigned int*)v4 + 5;
	if (v6)
		return sub_1402116C0(*v6);
	else
		return 0i64;
}

