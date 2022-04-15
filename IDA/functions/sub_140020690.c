#include "../winhttp.h"

//----- (0000000140020690) ----------------------------------------------------
__int64 __fastcall sub_140020690(__int64 a1, int a2)
{
	__int64 v2; // rdi
	unsigned __int64 v3; // rsi
	_QWORD* v4; // rbx
	__int64 result; // rax
	int v6; // [rsp+38h] [rbp+10h] BYREF

	v6 = a2;
	v2 = a1 + 96;
	v3 = (*(__int64(__fastcall**)(int*))(a1 + 120))(&v6);
	v4 = *(_QWORD**)(*(_QWORD*)(v2 + 16) + 8 * (v3 % *(_QWORD*)(v2 + 8)));
	if (!v4)
		return sub_140029000(v2, &v6);
	while (v3 != *v4 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v2 + 32))(&v6, v4 + 2))
	{
		v4 = (_QWORD*)v4[1];
		if (!v4)
			return sub_140029000(v2, &v6);
	}
	result = (__int64)(v4 + 3);
	if (v4 == (_QWORD*)-24i64)
		return sub_140029000(v2, &v6);
	return result;
}

