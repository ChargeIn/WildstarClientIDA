#include "../winhttp.h"

//----- (0000000140479200) ----------------------------------------------------
__int64 __fastcall sub_140479200(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx

	result = 0i64;
	*(_QWORD*)(a1 + 6328) = 0i64;
	*(_QWORD*)(a1 + 6336) = 0i64;
	*(_QWORD*)(a1 + 6344) = 0i64;
	*(_QWORD*)(a1 + 6352) = 0i64;
	*(_QWORD*)(a1 + 6360) = 0i64;
	*(_QWORD*)(a1 + 6368) = 0i64;
	*(_QWORD*)(a1 + 6376) = 0i64;
	*(_QWORD*)(a1 + 6384) = 0i64;
	*(_QWORD*)(a1 + 6392) = 0i64;
	v3 = *(_QWORD*)(a1 + 6320);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 936i64))(v3);
		v4 = *(_QWORD*)(a1 + 6320);
		if (v4)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			*(_QWORD*)(a1 + 6320) = 0i64;
		}
		return Apollo_LUAEvent(
			*(_QWORD*)(qword_140C65898 + 29504),
			"UnitActivationTypeChanged",
			byte_1409EDC54,
			*(unsigned int*)(a1 + 8));
	}
	return result;
}
// 1409EDC54: using guessed type _BYTE byte_1409EDC54[4];
// 140C65898: using guessed type __int64 qword_140C65898;

