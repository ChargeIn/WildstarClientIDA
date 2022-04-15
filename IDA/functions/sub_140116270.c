#include "../winhttp.h"

//----- (0000000140116270) ----------------------------------------------------
char __fastcall sub_140116270(__int64 a1)
{
	__int64 v2; // rcx

	v2 = *(_QWORD*)(a1 + 688);
	if (v2)
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v2 + 40i64))(v2, *(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64));
	sub_1401411C0(a1 + 1024);
	return sub_140116010(a1);
}

