#include "../winhttp.h"

//----- (0000000140369A00) ----------------------------------------------------
__int64 __fastcall sub_140369A00(__int64 a1, __int64* a2, int a3)
{
	unsigned __int64 v4; // rdi
	_QWORD* v5; // rbx
	unsigned int* v7; // rbx
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	int v9; // [rsp+28h] [rbp-20h]

	v8 = *a2;
	v9 = a3;
	v4 = (*(__int64(__fastcall**)(__int64*))(a1 + 5160))(&v8);
	v5 = *(_QWORD**)(*(_QWORD*)(a1 + 5152) + 8 * (v4 % *(_QWORD*)(a1 + 5144)));
	if (!v5)
		return 0i64;
	while (v4 != *v5 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(a1 + 5168))(&v8, v5 + 2))
	{
		v5 = (_QWORD*)v5[1];
		if (!v5)
			return 0i64;
	}
	v7 = (unsigned int*)(v5 + 4);
	if (v7)
		return *v7;
	else
		return 0i64;
}

