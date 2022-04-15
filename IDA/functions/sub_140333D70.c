#include "../winhttp.h"

//----- (0000000140333D70) ----------------------------------------------------
__int64 __fastcall sub_140333D70(_DWORD* a1)
{
	__int64 result; // rax
	IPAddr v3; // ecx
	DWORD v4; // edx
	int v5; // edi
	signed int v6; // eax

	for (result = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)a1 + 32i64))(
		*(_QWORD*)a1,
		(unsigned int)a1[6]);
		!(_DWORD)result;
		result = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)a1 + 32i64))(
			*(_QWORD*)a1,
			(unsigned int)a1[6]))
	{
		v3 = a1[4];
		if (v3)
		{
			v4 = a1[5];
			a1[8] = 0;
			v5 = 0;
			v6 = sub_140333B90(v3, v4, a1 + 7);
			if (v6 >= 0 || (v6 != -2147013886 || (++a1[9], v5 = 1, a1[7] == -1) || a1[9] >= 0xCu) && (a1[8] = v6, !v5))
				a1[9] = 0;
		}
	}
	return result;
}

