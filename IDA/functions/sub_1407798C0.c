#include "../winhttp.h"

//----- (00000001407798C0) ----------------------------------------------------
__int64 __fastcall sub_1407798C0(__int64 a1, __int64 a2, _QWORD* a3)
{
	__int64 v5; // rax
	__int64 v6; // rcx

	if (!a2)
		return 2147942487i64;
	*(_QWORD*)(a1 + 144) = a2;
	*(_QWORD*)(a1 + 104) = *a3;
	*(_QWORD*)(a1 + 112) = a3[1];
	*(_QWORD*)(a1 + 120) = a3[2];
	*(_QWORD*)(a1 + 128) = a3[3];
	v5 = a3[4];
	*(_DWORD*)(a1 + 164) = 0;
	*(_QWORD*)(a1 + 136) = v5;
	if ((int)sub_14039CE20(a1, a1) >= 0)
	{
		if (qword_140C65898)
		{
			v6 = *(_QWORD*)(qword_140C65898 + 29504);
			if (v6)
				Apollo_LUAEvent(v6, "ProgressClickWindowCompletionLevel", byte_1409EC294, 0i64, 0);
		}
		return 0i64;
	}
	else
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 88i64))(a1);
		return 2147500037i64;
	}
}
// 1409EC294: using guessed type _BYTE byte_1409EC294[64];
// 140C65898: using guessed type __int64 qword_140C65898;

