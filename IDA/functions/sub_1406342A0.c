#include "../winhttp.h"

//----- (00000001406342A0) ----------------------------------------------------
__int64 __fastcall sub_1406342A0(__int64 a1, unsigned int* a2)
{
	unsigned int v2; // r8d
	__int64 v5; // rsi
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rdi
	__int64 v11; // rcx
	__int64 v12; // [rsp+30h] [rbp+8h] BYREF

	v2 = *a2;
	if (*a2 < *(_DWORD*)(a1 + 31408))
		return 2147500037i64;
	v5 = a1 + 31416;
	v6 = *(_QWORD*)(a1 + 31424);
	v7 = v6;
	v8 = *(_QWORD*)(v6 + 8);
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < v2)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v7 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v7 == v6 || (v12 = v7, v2 < *(_DWORD*)(v7 + 32)))
		v12 = v6;
	v9 = v12;
	if (v12 == *(_QWORD*)(a1 + 31424))
		return 2147500037i64;
	v10 = *(_QWORD*)(v12 + 40);
	v11 = *(_QWORD*)(v10 + 8);
	if (v11)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		*(_QWORD*)(v10 + 8) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(v9 + 40), 0);
	v12 = v9;
	sub_140634730(v5, &v12);
	return 0i64;
}

