#include "../winhttp.h"

//----- (000000014056F9F0) ----------------------------------------------------
__int64 __fastcall sub_14056F9F0(__int64 a1, __int64 a2, __int64 a3)
{
	int v3; // edx
	int v4; // edx
	int v5; // edx
	__int64 v6; // rdx
	__int64 result; // rax
	unsigned int v8; // edi
	__int64 v9; // rsi
	__int64* v10; // rbx
	__int64 v11; // rbx
	unsigned int v12; // eax

	v3 = *(_DWORD*)(qword_140C65970 + 8);
	if (!v3)
	{
		sub_14039B930((_QWORD*)qword_140C65898, 1);
		v8 = 0;
	LABEL_12:
		v9 = qword_140C63628;
		v10 = *(__int64**)(qword_140C63628 + 720);
		if (v10)
		{
			if (*(_QWORD*)(qword_140C63628 + 744))
			{
				v11 = *v10;
				v12 = sub_1400518A0(qword_140C63628, 110, 1, 0);
				(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v11 + 16))(
					*(_QWORD*)(v9 + 720),
					v12,
					0i64,
					0i64,
					0i64,
					0i64,
					0i64);
			}
		}
		return v8;
	}
	v4 = v3 - 1;
	if (v4)
	{
		v5 = v4 - 1;
		if (v5)
		{
			v6 = (unsigned int)(v5 - 1);
			if ((_DWORD)v6)
				return 2147500037i64;
			result = sub_14056FBE0(qword_140C65970, v6, a3);
		}
		else
		{
			result = sub_140571200(qword_140C65970);
		}
	}
	else
	{
		result = sub_1405700F0(qword_140C65970);
	}
	v8 = result;
	if ((int)result >= 0)
		goto LABEL_12;
	return result;
}
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

