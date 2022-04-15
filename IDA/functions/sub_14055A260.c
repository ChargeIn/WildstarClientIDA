#include "../winhttp.h"

//----- (000000014055A260) ----------------------------------------------------
__int64 __fastcall sub_14055A260(_DWORD* a1)
{
	_DWORD* v1; // rdx
	__int64 v2; // rax
	unsigned __int64 v3; // r10
	int v4; // r9d
	int v5; // eax
	int v6; // ecx
	int v8; // r8d
	int v9; // eax

	v1 = a1;
	if (qword_140C635F0
		&& qword_140C65898
		&& (*(_DWORD*)(qword_140C635F0 + 64) & 0x2000) != 0
		&& *(_DWORD*)(qword_140C65898 + 40) != 4)
	{
		v2 = *(_QWORD*)(qword_140C65898 + 32);
		if (v2)
		{
			while (*(_DWORD*)(v2 + 40) == 4)
			{
				v2 = *(_QWORD*)(v2 + 32);
				if (!v2)
					goto LABEL_8;
			}
			return 0i64;
		}
	LABEL_8:
		v3 = 0x140000000ui64;
		v4 = *(_DWORD*)qword_140C63750;
		v5 = dword_140C4D420;
		if (*(_DWORD*)qword_140C63750 < dword_140C4D420)
			v5 = *(_DWORD*)qword_140C63750;
		if (*((_BYTE*)&dword_140C4D430 + v5) || !sub_1403A1600(qword_140C65898))
		{
			v6 = v1[3];
			if (v6)
				return v6 == 1;
			v8 = dword_140C4D3A0;
			v9 = dword_140C4D3A0;
			if (v4 < dword_140C4D3A0)
				v9 = v4;
			if (*(_BYTE*)(v9 + v3 + 12899248) || !*v1)
			{
				if (v4 < dword_140C4D3A0)
					v8 = v4;
				if (*(_BYTE*)(v8 + v3 + 12899248) || !qword_140C659F0 || !*(_DWORD*)qword_140C659F0)
				{
					v6 = v1[2];
					if (!v6)
						return (unsigned int)v1[1];
					return v6 == 1;
				}
			}
		}
	}
	return 0i64;
}
// 14055A2F7: variable 'v1' is possibly undefined
// 14055A318: variable 'v4' is possibly undefined
// 14055A31F: variable 'v3' is possibly undefined
// 140C4D3A0: using guessed type int dword_140C4D3A0;
// 140C4D420: using guessed type int dword_140C4D420;
// 140C4D430: using guessed type int dword_140C4D430;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

