#include "../winhttp.h"

//----- (000000014040FA40) ----------------------------------------------------
__int64 __fastcall sub_14040FA40(__int64 a1, int a2)
{
	__int64 v3; // rsi
	unsigned __int64 v4; // rdi
	_QWORD* v5; // rbx
	unsigned int* v6; // rbx
	int v7; // [rsp+38h] [rbp+10h] BYREF

	v7 = a2;
	if (!a2)
		return 0i64;
	v3 = *(_QWORD*)(a1 + 96);
	v4 = (*(__int64(__fastcall**)(int*))(v3 + 24))(&v7);
	v5 = *(_QWORD**)(*(_QWORD*)(v3 + 16) + 8 * (v4 % *(_QWORD*)(v3 + 8)));
	if (!v5)
		return 0i64;
	while (v4 != *v5 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v3 + 32))(&v7, v5 + 2))
	{
		v5 = (_QWORD*)v5[1];
		if (!v5)
			return 0i64;
	}
	v6 = (unsigned int*)v5 + 5;
	if (v6)
		return sub_14020EBE0(*v6);
	else
		return 0i64;
}

