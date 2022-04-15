#include "../winhttp.h"

//----- (00000001401301F0) ----------------------------------------------------
bool __fastcall sub_1401301F0(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v2; // r8
	__int64 v3; // rcx
	bool v4; // cl
	char v5; // r9
	bool v6; // r10
	__int64 v7; // rcx
	bool v8; // cl
	bool result; // al

	v1 = a1;
	v2 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 2896i64);
	v4 = 1;
	if (v2 != a1 && (!v2 || (v3 = *(_QWORD*)(v2 + 16)) == 0 || v3 != v1 && !sub_1400D1A90(v3, v1)))
		v4 = 0;
	v5 = *(_BYTE*)(v1 + 1436);
	v6 = (v5 & 0x10) != 0;
	result = 1;
	if ((v5 & 0x10) == 0 || v5 < 0 && ((v5 & 0x40) == 0 || v4) || (v5 & 0x40) == 0)
	{
		v8 = 1;
		if (v2 != v1 && (!v2 || (v7 = *(_QWORD*)(v2 + 16)) == 0 || v7 != v1 && !sub_1400D1A90(v7, v1)))
			v8 = 0;
		if (!v6 || v5 >= 0 || (v5 & 0x40) == 0 || !v8)
			return 0;
	}
	return result;
}
// 140130229: variable 'v1' is possibly undefined
// 14013025D: variable 'v2' is possibly undefined
// 140130284: variable 'v6' is possibly undefined
// 14013028F: variable 'v5' is possibly undefined

