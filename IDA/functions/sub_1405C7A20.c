#include "../winhttp.h"

//----- (00000001405C7A20) ----------------------------------------------------
__int64 __fastcall sub_1405C7A20(__int64 a1, int a2)
{
	__int64 v3; // r9
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rcx
	int* v7; // rdx
	__int64 v8; // rax
	__int64 v10; // [rsp+40h] [rbp+18h]

	v3 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29520) + 32i64);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v10 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v10 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29520) + 32i64);
	if (v10 == v3)
		return 2147500037i64;
	v6 = *(_QWORD*)(v10 + 40);
	if (!v6)
		return 2147500037i64;
	*(_DWORD*)(a1 + 332) = a2;
	v7 = *(int**)(v6 + 48);
	v8 = 0i64;
	if (*(_WORD*)v7)
	{
		do
			++v8;
		while (*((_WORD*)v7 + v8));
	}
	sub_14001C480(a1 + 16, v7, (int*)((char*)v7 + 2 * v8));
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

