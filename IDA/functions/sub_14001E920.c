#include "../winhttp.h"

//----- (000000014001E920) ----------------------------------------------------
__int64 __fastcall sub_14001E920(__int64 a1, __int64 a2, __int64 a3)
{
	int* v6; // rbp
	__int64 v7; // rdx
	__int64 v8; // rdi
	int* v9; // rsi
	int* v10; // rbx
	int* v11; // rax
	_QWORD* v12; // r9
	_QWORD* v13; // r8
	__int64 v14; // rcx
	__int64 v15; // rdx
	__int64 v18; // [rsp+58h] [rbp+10h] BYREF
	int* v19; // [rsp+60h] [rbp+18h]

	v6 = sub_14001F4D0(a1, a2 + 32);
	*(_BYTE*)v6 = *(_BYTE*)a2;
	v19 = v6;
	*((_QWORD*)v6 + 1) = a3;
	*((_QWORD*)v6 + 2) = 0i64;
	*((_QWORD*)v6 + 3) = 0i64;
	v7 = *(_QWORD*)(a2 + 24);
	if (v7)
		*((_QWORD*)v6 + 3) = sub_14001E920(a1, v7, v6);
	v8 = *(_QWORD*)(a2 + 16);
	v9 = v6;
	if (!v8)
		return (__int64)v6;
	do
	{
		v10 = sub_14018B280(56i64, 0);
		if (v10 != (int*)-32i64)
		{
			v10[8] = *(_DWORD*)(v8 + 32);
			v11 = sub_14018B280(24i64, 0);
			*((_QWORD*)v10 + 6) = v11;
			*(_QWORD*)v11 = v11;
			*(_QWORD*)(*((_QWORD*)v10 + 6) + 8i64) = *((_QWORD*)v10 + 6);
			v12 = *(_QWORD**)(v8 + 48);
			v13 = (_QWORD*)*v12;
			v18 = **((_QWORD**)v10 + 6);
			sub_14001FDD0(v14, &v18, v13, v12);
		}
		*(_BYTE*)v10 = *(_BYTE*)v8;
		*((_QWORD*)v10 + 2) = 0i64;
		*((_QWORD*)v10 + 3) = 0i64;
		*((_QWORD*)v9 + 2) = v10;
		*((_QWORD*)v10 + 1) = v9;
		v15 = *(_QWORD*)(v8 + 24);
		if (v15)
			*((_QWORD*)v10 + 3) = sub_14001E920(a1, v15, v10);
		v8 = *(_QWORD*)(v8 + 16);
		v9 = v10;
	} while (v8);
	return (__int64)v19;
}
// 14001E9E0: variable 'v14' is possibly undefined

