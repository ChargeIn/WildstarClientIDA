#include "../winhttp.h"

//----- (0000000140886810) ----------------------------------------------------
__int64 __fastcall sub_140886810(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	unsigned int a4,
	__int64 a5,
	int a6,
	int a7,
	_QWORD* a8)
{
	__int64 v9; // r15
	__int64 v12; // rbx
	__int64 v13; // rcx
	__int64 result; // rax

	v9 = a4;
	*a8 = 0i64;
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	v12 = *(_QWORD*)(a1 + 280);
	if (v12)
		*(_QWORD*)(a1 + 280) = *(_QWORD*)v12;
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	v13 = *(_QWORD*)(a3 + 8) + v9;
	*(_QWORD*)(a1 + 296) = a5 + (unsigned int)(*(_DWORD*)(a2 + 112) * *(_DWORD*)(*(_QWORD*)(a2 + 40) + 8i64));
	result = v12;
	*(_QWORD*)(a1 + 312) = v13;
	*(_DWORD*)(a1 + 304) = a6;
	*(_DWORD*)(a1 + 308) = a7;
	*a8 = a1 + 296;
	*(_QWORD*)(a3 + 16) = a1 + 296;
	*(_DWORD*)(v12 + 20) &= 0xFFFFFFF8;
	*(_QWORD*)(v12 + 8) = a3;
	*(_DWORD*)(v12 + 16) = v9;
	return result;
}

