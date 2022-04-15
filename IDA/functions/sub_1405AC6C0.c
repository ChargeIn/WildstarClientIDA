#include "../winhttp.h"

//----- (00000001405AC6C0) ----------------------------------------------------
__int64 __fastcall sub_1405AC6C0(__int64 a1, int a2, int a3, int a4)
{
	int v5; // ebx
	__int64 v6; // rax
	__int64 v7; // rsi
	int v8; // ebp
	unsigned __int64 v9; // rdi
	_QWORD* v10; // rbx
	__int64* v11; // rbx
	__int64 result; // rax
	char v13[48]; // [rsp+70h] [rbp-C8h] BYREF
	int v14; // [rsp+A0h] [rbp-98h]
	int v15; // [rsp+148h] [rbp+10h] BYREF

	v15 = a2;
	sub_1404BCB00((__int64)v13, a1 + 8, 0i64, 0, 0, a4, a3, 0, 4, 0, 0i64, 0i64, 0);
	v5 = 0;
	v6 = sub_140205FA0(*(_DWORD*)(a1 + 184));
	if (v6)
		v5 = *(_DWORD*)(v6 + 4);
	v7 = qword_140C659F8;
	v8 = *(_DWORD*)(a1 + 188);
	v15 = v5;
	v9 = (*(__int64(__fastcall**)(int*))(qword_140C659F8 + 56))(&v15);
	v10 = *(_QWORD**)(*(_QWORD*)(v7 + 48) + 8 * (v9 % *(_QWORD*)(v7 + 40)));
	if (!v10)
		return 0i64;
	while (v9 != *v10 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v7 + 64))(&v15, v10 + 2))
	{
		v10 = (_QWORD*)v10[1];
		if (!v10)
			return 0i64;
	}
	v11 = v10 + 3;
	if (!v11)
		return 0i64;
	if (*(_DWORD*)(*v11 + 20) != v8)
		return 0i64;
	result = sub_1404C7AC0(*v11, (__int64)v13);
	if (!result || *(_DWORD*)(result + 128) != v14)
		return 0i64;
	return result;
}
// 140C659F8: using guessed type __int64 qword_140C659F8;

