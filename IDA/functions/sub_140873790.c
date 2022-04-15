#include "../winhttp.h"

//----- (0000000140873790) ----------------------------------------------------
__int64 __fastcall sub_140873790(__int64 a1)
{
	__int64 v2; // rcx

	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 16i64))(*(_QWORD*)(a1 + 56));
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 16i64))(*(_QWORD*)(a1 + 8));
	sub_1408683D0(a1 + 72);
	*(_QWORD*)(a1 + 84) = 43i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_DWORD*)(a1 + 112) = -1;
	*(_DWORD*)(a1 + 116) = 1065353216;
	*(_DWORD*)(a1 + 120) = -1;
	*(_DWORD*)(a1 + 124) = 1;
	v2 = *(_QWORD*)(a1 + 8);
	*(_BYTE*)(a1 + 44) = 0;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 48i64))(v2);
}

