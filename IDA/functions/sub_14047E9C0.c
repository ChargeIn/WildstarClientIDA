#include "../winhttp.h"

//----- (000000014047E9C0) ----------------------------------------------------
__int64 __fastcall sub_14047E9C0(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax
	__int64 v5; // rbx
	__int64 result; // rax
	int v7; // [rsp+30h] [rbp+8h] BYREF
	unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

	v8 = a2;
	sub_1400EE810(a1 + 14200, &v8);
	v4 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
		qword_140C65980,
		a2,
		0i64);
	v5 = v4;
	if (!v4)
		return sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"PublicEventUnitUpdate",
			byte_1409ED124,
			*(unsigned int*)(a1 + 8));
	v7 = *(_DWORD*)(a1 + 8);
	sub_1400EE810(v4 + 152, &v7);
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 248i64))(v5);
	if ((_DWORD)result)
		return sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"PublicEventUnitUpdate",
			byte_1409ED124,
			*(unsigned int*)(a1 + 8));
	return result;
}
// 1409ED124: using guessed type _BYTE byte_1409ED124[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

