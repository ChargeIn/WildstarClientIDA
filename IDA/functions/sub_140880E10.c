#include "../winhttp.h"

//----- (0000000140880E10) ----------------------------------------------------
__int64 __fastcall sub_140880E10(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	int v5; // ebx
	__int64 v6; // [rsp+30h] [rbp+8h] BYREF

	if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64*))(**(_QWORD**)(a1 + 88) + 112i64))(
		*(_QWORD*)(a1 + 88),
		a2,
		0i64,
		&v6) != 1)
		return 2i64;
	v5 = a2 - v6;
	*(_DWORD*)(a1 + 108) = v6;
	result = 1i64;
	*(_DWORD*)(a1 + 112) = v5;
	return result;
}

