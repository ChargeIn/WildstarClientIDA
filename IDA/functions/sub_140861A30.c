#include "../winhttp.h"

//----- (0000000140861A30) ----------------------------------------------------
__int64 __fastcall sub_140861A30(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 16i64))(*(_QWORD*)(a1 + 8));
	sub_1408683D0(a1 + 88);
	*(_QWORD*)(a1 + 100) = 43i64;
	result = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_DWORD*)(a1 + 128) = -1;
	*(_DWORD*)(a1 + 132) = 1065353216;
	*(_DWORD*)(a1 + 136) = -1;
	*(_DWORD*)(a1 + 140) = 1;
	*(_QWORD*)a2 = 0i64;
	*(_WORD*)(a2 + 24) = 0;
	*(_QWORD*)(a2 + 32) = 0i64;
	return result;
}

