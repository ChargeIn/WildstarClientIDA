#include "../winhttp.h"

//----- (00000001400C88A0) ----------------------------------------------------
void __fastcall sub_1400C88A0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	__int64 v4; // rcx

	*(_BYTE*)(a1 + 28) |= 2u;
	v2 = *(_QWORD*)(a1 + 16);
	if (v2)
	{
		if (!(*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)v2 + 32i64))(v2))
			sub_1400C88A0(*(_QWORD*)(a1 + 16));
		v3 = *(_QWORD*)(a1 + 16);
		v4 = *(_QWORD*)(v3 + 16);
		*(_BYTE*)(v3 + 29) |= 1u;
		if (v4)
			sub_1400C8870(v4);
	}
}

