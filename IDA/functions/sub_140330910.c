#include "../winhttp.h"

//----- (0000000140330910) ----------------------------------------------------
_QWORD* __fastcall sub_140330910(__int64 a1, int a2)
{
	unsigned __int64 v3; // rdi
	_QWORD* v4; // rbx
	int v6; // [rsp+38h] [rbp+10h] BYREF

	v6 = a2;
	v3 = (*(__int64(__fastcall**)(int*))(a1 + 152))(&v6);
	v4 = *(_QWORD**)(*(_QWORD*)(a1 + 144) + 8 * (v3 % *(_QWORD*)(a1 + 136)));
	if (!v4)
		return 0i64;
	while (v3 != *v4 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 160))(&v6, v4 + 2))
	{
		v4 = (_QWORD*)v4[1];
		if (!v4)
			return 0i64;
	}
	return v4 + 3;
}

