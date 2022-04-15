#include "../winhttp.h"

//----- (00000001400DA180) ----------------------------------------------------
__int64 __fastcall sub_1400DA180(_QWORD* a1)
{
	__int64 result; // rax
	char v3; // al
	__int64 v4; // rcx
	BOOL* v5; // rdx
	BOOL v6; // ecx

	result = sub_1400D66A0(a1, 1u);
	if (result)
	{
		if (*(float*)(result + 648) > 0.0)
		{
			v4 = *(_QWORD*)(result + 16);
			if (v4)
				v3 = sub_1400D1A60(v4);
			else
				v3 = 1;
		}
		else
		{
			v3 = 0;
		}
		v5 = (BOOL*)a1[2];
		v6 = v3 != 0;
		v5[2] = 1;
		result = 1i64;
		*v5 = v6;
		a1[2] += 16i64;
	}
	return result;
}

