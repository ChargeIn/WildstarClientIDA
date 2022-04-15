#include "../winhttp.h"

//----- (0000000140601880) ----------------------------------------------------
__int64 __fastcall sub_140601880(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v5; // rax
	unsigned int v6; // ecx
	__int64 v7; // rax
	__int64 v8; // r9
	__int128 v10; // [rsp+60h] [rbp-18h] BYREF

	if (!a3)
		return 0i64;
	v5 = sub_140240F80(a2);
	if (!v5)
		return 0i64;
	v6 = *(_DWORD*)(v5 + 4);
	if (!v6)
		return 0i64;
	v7 = sub_140248F00(v6);
	v10 = 0i64;
	sub_1405787D0(a1 + 128, 0, a3, v8, v7, 0i64, 0i64, 0, (_QWORD*)(a1 + 128), &v10, 0);
	return 1i64;
}
// 1406018EC: variable 'v8' is possibly undefined
// 140601880: using guessed type __int128 var_18;

