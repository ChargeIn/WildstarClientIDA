#include "../winhttp.h"

//----- (0000000140420C80) ----------------------------------------------------
__int64 __fastcall sub_140420C80(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	int* v3; // rcx
	__int64(__fastcall * *v5)(); // [rsp+20h] [rbp-18h] BYREF
	int v6; // [rsp+28h] [rbp-10h]
	int v7; // [rsp+2Ch] [rbp-Ch]

	*a3 += 8i64;
	v3 = *(int**)(*a3 - 8i64);
	v5 = off_140B6FE30;
	v6 = *v3;
	v7 = v3[1];
	return sub_1406B7660(a2, (__int64)&v5);
}
// 140B6FE30: using guessed type __int64 (__fastcall *off_140B6FE30[2])();

