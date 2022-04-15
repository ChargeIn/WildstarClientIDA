#include "../winhttp.h"

//----- (0000000140861E80) ----------------------------------------------------
__int64 __fastcall sub_140861E80(__int64 a1, unsigned int a2)
{
	__int64 result; // rax

	if (a2 != 2)
	{
		if (*(_QWORD*)(a1 + 88))
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 16i64))(*(_QWORD*)(a1 + 8));
		sub_1408683D0(a1 + 88);
		*(_QWORD*)(a1 + 100) = 43i64;
		*(_QWORD*)(a1 + 88) = 0i64;
		*(_DWORD*)(a1 + 128) = -1;
		*(_DWORD*)(a1 + 132) = 1065353216;
		*(_DWORD*)(a1 + 136) = -1;
		*(_DWORD*)(a1 + 140) = 1;
		result = sub_1403C6080(a1 + 16);
	}
	if (!a2)
		*(_BYTE*)(a1 + 216) = 0;
	if (!*(_BYTE*)(a1 + 216))
		return (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 32i64))(*(_QWORD*)(a1 + 8), a2);
	return result;
}

