#include "../winhttp.h"

//----- (0000000140861AC0) ----------------------------------------------------
__int64 __fastcall sub_140861AC0(__int64 a1)
{
	__int64 v2; // rcx

	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 16i64))(*(_QWORD*)(a1 + 8));
	sub_1408683D0(a1 + 88);
	*(_QWORD*)(a1 + 100) = 43i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_DWORD*)(a1 + 128) = -1;
	*(_DWORD*)(a1 + 132) = 1065353216;
	*(_DWORD*)(a1 + 136) = -1;
	*(_DWORD*)(a1 + 140) = 1;
	sub_1403C6080(a1 + 16);
	v2 = *(_QWORD*)(a1 + 8);
	*(_BYTE*)(a1 + 216) = 0;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 48i64))(v2);
}

