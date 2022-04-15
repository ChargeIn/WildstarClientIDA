#include "../winhttp.h"

//----- (000000014063B890) ----------------------------------------------------
int sub_14063B890()
{
	int result; // eax
	__int64 v1; // rcx
	int v2[64]; // [rsp+40h] [rbp-118h] BYREF

	result = qword_140C65898;
	v1 = *(_QWORD*)(qword_140C65898 + 25744);
	if (v1)
	{
		if (*(_DWORD*)(v1 + 3408))
		{
			sub_14001B370(
				v2,
				128i64,
				L"%.2f %.2f %.2f %.2f",
				*(float*)(v1 + 4576),
				*(float*)(v1 + 4580),
				*(float*)(v1 + 4584),
				(float)((float)(180.0 / *(float*)&dword_140C3C018) * *(float*)(v1 + 4800)));
			sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, v2, 0, 0i64);
			return sub_14063AD00(v2);
		}
	}
	return result;
}
// 140B28C78: using guessed type wchar_t a2f2f2f2f[20];
// 140C3C018: using guessed type int dword_140C3C018;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 14063B890: using guessed type int var_118[64];

