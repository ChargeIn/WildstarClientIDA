#include "../winhttp.h"

//----- (00000001402D2AF0) ----------------------------------------------------
__int64 __fastcall sub_1402D2AF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	_QWORD* v4; // rbx
	_QWORD* v5; // rdi
	unsigned __int64 v8; // rsi
	unsigned __int64 v9; // rax
	unsigned __int64 v10; // r8
	unsigned __int64 v11; // r9
	unsigned __int64 v12; // rcx
	unsigned __int64 v13; // rdx

	v4 = *(_QWORD**)(a3 + 48);
	v5 = *(_QWORD**)(a4 + 48);
	v8 = (*(__int64(__fastcall**)(_QWORD*))(*v4 + 16i64))(v4);
	v9 = (*(__int64(__fastcall**)(_QWORD*))(*v5 + 16i64))(v5);
	v10 = *(_QWORD*)(v8 + 24);
	v11 = *(_QWORD*)(v9 + 24);
	v12 = v4[3];
	v13 = v5[3];
	if (v10 < v11)
		return 0xFFFFFFFFi64;
	if (v10 > v11)
		return 1i64;
	if (v12 < v13)
		return 0xFFFFFFFFi64;
	if (v12 > v13)
		return 1i64;
	if (v8 < v9)
		return 0xFFFFFFFFi64;
	if (v8 > v9)
		return 1i64;
	if (v4 < v5)
		return 0xFFFFFFFFi64;
	if (v4 > v5)
		return 1i64;
	return (unsigned int)-(*(_BYTE*)(*(_QWORD*)(a3 + 56) + 20i64) < *(_BYTE*)(*(_QWORD*)(a4 + 56) + 20i64));
}

