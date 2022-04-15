#include "../winhttp.h"

//----- (0000000140615AB0) ----------------------------------------------------
__int64 __fastcall sub_140615AB0(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	float v5; // xmm2_4
	float v6; // xmm0_4
	char v8[144]; // [rsp+30h] [rbp-F8h] BYREF
	float v9; // [rsp+C0h] [rbp-68h]

	v4 = *(_QWORD*)(qword_140C65898 + 29256);
	if (!v4
		|| !(*(unsigned int(__fastcall**)(__int64, __int64, char*, __int64, _QWORD))(*(_QWORD*)v4 + 440i64))(
			v4,
			a1 + 16,
			v8,
			1073741888i64,
			0i64))
	{
		*(_DWORD*)(a2 + 24) = 0;
		return 0i64;
	}
	v5 = *(float*)(a2 + 24);
	v6 = *(float*)(a1 + 20) - v9;
	if (v5 != 3.4028235e38)
	{
		if (v6 < 0.0)
			goto LABEL_7;
		if (v5 < 0.0)
		{
		LABEL_8:
			*(_DWORD*)(a2 + 28) = 1;
			goto LABEL_9;
		}
		if (v6 < 0.0)
		{
		LABEL_7:
			if (v5 >= 0.0)
				goto LABEL_8;
		}
	}
LABEL_9:
	*(float*)(a2 + 24) = v6;
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140615AB0: using guessed type char var_F8[144];

