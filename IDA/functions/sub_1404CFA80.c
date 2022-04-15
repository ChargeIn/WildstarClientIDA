#include "../winhttp.h"

//----- (00000001404CFA80) ----------------------------------------------------
void __fastcall sub_1404CFA80(__int64 a1, __int64 a2)
{
	__int64* v2; // rdi
	bool v3; // zf
	BOOL v4; // ebx
	__int64 v5; // [rsp+38h] [rbp+10h] BYREF

	v5 = a2;
	v2 = (__int64*)qword_140C65A28;
	v3 = *(_QWORD*)(*(_QWORD*)qword_140C65A28 + 16i64) == 0i64;
	*(_DWORD*)(a2 + 24) = dword_140C636A8;
	v4 = v3;
	sub_1404CFC10(*v2, (__int64*)a2, &v5);
	if (v4)
	{
		if (!v2[12])
			sub_1404CF990(v2);
	}
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65A28: using guessed type __int64 qword_140C65A28;

