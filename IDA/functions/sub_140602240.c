#include "../winhttp.h"

//----- (0000000140602240) ----------------------------------------------------
__int64 __fastcall sub_140602240(_QWORD* a1, __int64 a2)
{
	__int64 result; // rax
	int v5; // [rsp+20h] [rbp-18h]
	int v6; // [rsp+28h] [rbp-10h]

	v6 = *(_DWORD*)(a2 + 20);
	v5 = *(_DWORD*)(a2 + 16);
	sub_1400EA3E0(
		*(_QWORD*)(qword_140C65898 + 29504),
		"Group_Request_Result",
		byte_1409EA21C,
		*(_QWORD*)(a2 + 8),
		v5,
		v6);
	result = 0i64;
	if (*(_DWORD*)(a2 + 16) == 10)
	{
		a1[4] = 0i64;
		a1[5] = 0i64;
		a1[6] = 0i64;
		a1[7] = 0i64;
	}
	return result;
}
// 1409EA21C: using guessed type _BYTE byte_1409EA21C[72];
// 140C65898: using guessed type __int64 qword_140C65898;

