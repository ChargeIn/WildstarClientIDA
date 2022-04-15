#include "../winhttp.h"

//----- (000000014051C9D0) ----------------------------------------------------
char __fastcall sub_14051C9D0(__int64 a1)
{
	__int64 v2; // rcx

	v2 = *(_QWORD*)(a1 + 16);
	if (v2)
		sub_14073E640(v2);
	return sub_1400D4040(*(_QWORD*)(a1 + 8), "ReportPlayerComplete", *(char**)(a1 + 8), &byte_140B7B700);
}
// 140B7B700: using guessed type char byte_140B7B700;

