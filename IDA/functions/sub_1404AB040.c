#include "../winhttp.h"

//----- (00000001404AB040) ----------------------------------------------------
__int64 __fastcall sub_1404AB040(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5)
{
	__int64 v8; // rax
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64* v12; // rcx
	_DWORD v14[2]; // [rsp+20h] [rbp-18h] BYREF
	__int64 v15; // [rsp+28h] [rbp-10h]
	__int64 v16; // [rsp+48h] [rbp+10h]

	if (!a2)
		return 2147500037i64;
	if (!a3)
		return 2147500037i64;
	if (!a4)
		return 2147500037i64;
	v8 = *(_QWORD*)(a2 + 24);
	if (!v8 || !*(_DWORD*)(v8 + 112) || !sub_1404AB430(a1, a3))
		return 2147500037i64;
	v9 = *(_QWORD*)(a1 + 16);
	v10 = v9;
	v11 = *(_QWORD*)(v9 + 8);
	while (v11)
	{
		if (*(_DWORD*)(v11 + 32) < a3)
		{
			v11 = *(_QWORD*)(v11 + 24);
		}
		else
		{
			v10 = v11;
			v11 = *(_QWORD*)(v11 + 16);
		}
	}
	if (v10 == v9 || (v16 = v10, a3 < *(_DWORD*)(v10 + 32)))
		v16 = *(_QWORD*)(a1 + 16);
	if (v16 == v9)
		return 2147500037i64;
	v12 = *(__int64**)(v16 + 40);
	if (!v12 || !(unsigned int)sub_1404AB150(v12, a4))
		return 2147500037i64;
	v14[0] = a3;
	v14[1] = a4;
	v15 = a5;
	sub_1403F4900(qword_140C65898, 0xD7u, (__int64)v14);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

