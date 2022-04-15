#include "../winhttp.h"

//----- (00000001405FAA20) ----------------------------------------------------
__int64 __fastcall sub_1405FAA20(__int64 a1, __int64 a2)
{
	__int16* v3; // rax
	int* v4; // rsi
	__int64 v5; // rcx
	__int64 v6; // rbx
	unsigned __int64 v7; // rbx
	__int64 v8; // rax
	int* v9; // rdi
	unsigned int v11; // [rsp+30h] [rbp-18h] BYREF
	__int64 v12; // [rsp+38h] [rbp-10h]

	v3 = sub_14034BDD0(a1, *(_DWORD*)(a2 + 16));
	v4 = (int*)v3;
	if (v3)
	{
		v5 = 0i64;
		if (*v3)
		{
			do
				++v5;
			while (v3[v5]);
			if (v5)
			{
				v6 = 0i64;
				do
					++v6;
				while (v3[v6]);
				v7 = v6 + 1;
				v8 = 2 * v7;
				if (!is_mul_ok(v7, 2ui64))
					v8 = -1i64;
				v9 = sub_14018B280(v8, 0);
				sub_1407DB590(v9, v4, 2 * v7);
				v11 = *(_DWORD*)(a2 + 8);
				v12 = 0i64;
				*((_QWORD*)sub_1404BC890((_QWORD*)(qword_140C65898 + 30032), &v11) + 1) = v9;
				if (*(_DWORD*)(a2 + 16))
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "SubZoneChanged", byte_1409ECB14);
			}
		}
	}
	return 1i64;
}
// 1409ECB14: using guessed type _BYTE byte_1409ECB14[4];
// 140C65898: using guessed type __int64 qword_140C65898;

