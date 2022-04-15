#include "../winhttp.h"

//----- (00000001402AA3E0) ----------------------------------------------------
__int64 __fastcall sub_1402AA3E0(__int64 a1)
{
	_QWORD* Value; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	int v5; // eax
	__int64 v7; // rdi
	unsigned int v8; // eax
	unsigned int v9; // esi
	int v10; // eax
	__int64 v11; // rax
	int* v12; // rax
	volatile signed __int32* v13; // rcx
	__int64 v14[5]; // [rsp+20h] [rbp-28h] BYREF

	if (qword_140C63758 && (Value = TlsGetValue(*(_DWORD*)(qword_140C63758 + 4))) != 0i64 && (v3 = Value[1]) != 0)
		v4 = *(_QWORD*)(v3 + 96);
	else
		v4 = 0i64;
	v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 40i64))(v4, 0i64);
	if (v5 < 0)
		return sub_1402AA530(a1, v5);
	v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 32i64))(*(_QWORD*)(a1 + 56));
	v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 16i64))(*(_QWORD*)(a1 + 56));
	v14[0] = v7;
	v14[2] = 0i64;
	v9 = v8;
	v14[1] = v7 + v8;
	v10 = sub_1402956F0(v14, v7 + 80, v7);
	if (v10 < 0)
		return sub_1402AA530(a1, v10);
	*(_DWORD*)(a1 + 28) = *(_DWORD*)(v7 + 24);
	v11 = 8i64 * *(unsigned int*)(v7 + 8);
	if (!is_mul_ok(*(unsigned int*)(v7 + 8), 8ui64))
		v11 = -1i64;
	v12 = sub_14018B280(v11, 0);
	*(_QWORD*)(a1 + 72) = v12;
	sub_1407E4830(v12, 0i64, 8i64 * *(unsigned int*)(v7 + 8));
	v13 = *(volatile signed __int32**)(a1 + 16);
	*(_QWORD*)(a1 + 48) = v7;
	v13 += 73;
	*(_DWORD*)(a1 + 44) = v9;
	_InterlockedIncrement(v13);
	_InterlockedExchangeAdd(v13 + 1, *(_DWORD*)(a1 + 44));
	_InterlockedIncrement(v13 + 2);
	_InterlockedExchangeAdd(v13 + 3, *(_DWORD*)(a1 + 44));
	_InterlockedIncrement(v13 + 8);
	_InterlockedExchangeAdd(v13 + 9, *(_DWORD*)(a1 + 44));
	*(_DWORD*)(a1 + 80) = 0;
	return 0i64;
}
// 140C63758: using guessed type __int64 qword_140C63758;

