#include "../winhttp.h"

//----- (00000001404C9C70) ----------------------------------------------------
__int64 __fastcall sub_1404C9C70(__int64 a1, int a2, int a3, __int64 a4)
{
	__int64 v7; // rsi
	unsigned __int64 v8; // rdi
	_QWORD* v9; // rbx
	__int64* v10; // rbx
	int v11; // [rsp+48h] [rbp+10h] BYREF

	v11 = a2;
	if (!a4)
		return 0i64;
	v7 = qword_140C659F8;
	v8 = (*(__int64(__fastcall**)(int*))(qword_140C659F8 + 56))(&v11);
	v9 = *(_QWORD**)(*(_QWORD*)(v7 + 48) + 8 * (v8 % *(_QWORD*)(v7 + 40)));
	if (!v9)
		return 0i64;
	while (v8 != *v9 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v7 + 64))(&v11, v9 + 2))
	{
		v9 = (_QWORD*)v9[1];
		if (!v9)
			return 0i64;
	}
	v10 = v9 + 3;
	if (v10 && *(_DWORD*)(*v10 + 20) == a3)
		return sub_1404C78E0(*v10, a4);
	else
		return 0i64;
}
// 140C659F8: using guessed type __int64 qword_140C659F8;

