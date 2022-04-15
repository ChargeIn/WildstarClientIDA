#include "../winhttp.h"

//----- (00000001400DD550) ----------------------------------------------------
__int64 __fastcall sub_1400DD550(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rdx
	__int64 v6; // rdx

	v2 = sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v3 = sub_1400D66A0(a1, 2u);
		v4 = v3;
		if (v3)
		{
			v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 152i64))(v3);
			if (v5)
			{
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v2 + 488i64))(v2, v5);
				v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 160i64))(v4);
				if (v6)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v2 + 496i64))(v2, v6);
			}
		}
	}
	return 0i64;
}

