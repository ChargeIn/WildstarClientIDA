#include "../winhttp.h"

//----- (0000000140887D80) ----------------------------------------------------
__int64 __fastcall sub_140887D80(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	unsigned int a4,
	__int64 a5,
	int a6,
	int a7,
	_QWORD* a8)
{
	__int64 v8; // r12
	__int64 v10; // rbp
	__int64 v11; // r13
	__int64 v14; // rbx
	__int64 v15; // rdx
	__int64 v16; // r8
	__int64 v17; // rax
	_QWORD* v18; // rax
	_QWORD* v19; // rax
	__int64 v20; // rax
	__int64 v21; // rcx
	_QWORD* v22; // rax

	v8 = (__int64)a8;
	v10 = 0i64;
	v11 = a4;
	*a8 = 0i64;
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	v14 = *(_QWORD*)(a1 + 280);
	if (v14)
		*(_QWORD*)(a1 + 280) = *(_QWORD*)v14;
	if (*(_QWORD*)(a3 + 16))
	{
		sub_140889620(a1 + 168, a3, (__int64)&a8);
		a3 = (__int64)a8;
		if (!a8)
		{
			sub_140884080(a1, (_QWORD*)v14);
			goto LABEL_16;
		}
	}
	else
	{
		a8 = (_QWORD*)a3;
	}
	v15 = *(_QWORD*)(a1 + 296);
	v16 = *(_QWORD*)(a3 + 8) + v11;
	if (v15)
		*(_QWORD*)(a1 + 296) = *(_QWORD*)v15;
	v17 = (unsigned int)(*(_DWORD*)(a2 + 112) * *(_DWORD*)(*(_QWORD*)(a2 + 40) + 8i64));
	*(_DWORD*)(v15 + 72) &= 0xFFFFFFFC;
	*(_QWORD*)(v15 + 24) = v16;
	*(_QWORD*)(v15 + 40) = v15;
	*(_QWORD*)(v15 + 48) = 0i64;
	*(_QWORD*)(v15 + 8) = a5 + v17;
	*(_QWORD*)(v15 + 64) = a2;
	*(_DWORD*)(v15 + 16) = a6;
	*(_DWORD*)(v15 + 20) = a7;
	*(_QWORD*)(v15 + 32) = sub_14088A0D0;
	v18 = a8;
	*(_QWORD*)v8 = v15;
	v18[2] = v15;
	v19 = a8;
	*(_DWORD*)(v14 + 20) &= 0xFFFFFFF8;
	*(_QWORD*)(v14 + 8) = v19;
	*(_DWORD*)(v14 + 16) = v11;
	v20 = *(_QWORD*)v8;
	v21 = *(_QWORD*)(*(_QWORD*)v8 + 56i64);
	if (v21)
	{
		*(_QWORD*)(v14 + 24) = v21;
		*(_QWORD*)(v20 + 56) = v14;
	}
	else
	{
		*(_QWORD*)(v20 + 56) = v14;
		*(_QWORD*)(v14 + 24) = 0i64;
	}
	*(_QWORD*)v14 = 0i64;
	v22 = *(_QWORD**)(a2 + 192);
	if (v22)
		*v22 = v14;
	else
		*(_QWORD*)(a2 + 184) = v14;
	*(_QWORD*)(a2 + 192) = v14;
	v10 = v14;
	*(_QWORD*)(v14 + 32) = a2;
LABEL_16:
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	return v10;
}

