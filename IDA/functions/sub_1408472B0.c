#include "../winhttp.h"

//----- (00000001408472B0) ----------------------------------------------------
__int64 __fastcall sub_1408472B0(__int64 a1, __int64* a2, char a3)
{
	__int64 v3; // rbp
	int v7; // eax
	bool v8; // zf
	__int64 v9; // rax
	unsigned int v10; // edi
	unsigned int v11; // eax
	int v12; // ebx

	v3 = a2[3];
	*(_QWORD*)(v3 + 184) = a1;
	if (a3)
	{
		v7 = sub_14085EAC0(v3, (int*)(a1 + 80));
		v8 = *(_DWORD*)(a1 + 56) == 0;
		*(_DWORD*)(a1 + 84) = v7;
		if (v8)
		{
			v9 = sub_1408819F0(dword_140C10F20, 36i64);
			*(_QWORD*)(a1 + 40) = v9;
			*(_QWORD*)(a1 + 48) = v9;
			if (!v9)
			{
				v10 = 2;
				goto LABEL_19;
			}
			*(_DWORD*)(a1 + 56) = 1;
		}
	}
	if (!*(_DWORD*)(a1 + 84) || !sub_14085EFB0(v3))
		goto LABEL_17;
	if (*(_DWORD*)(a1 + 84) == 1)
	{
		v10 = 3;
	LABEL_19:
		sub_1408614B0(a2, 1);
		v12 = dword_140C10F28;
		(*(void(__fastcall**)(__int64*, _QWORD)) * a2)(a2, 0i64);
		sub_140881720(v12, (__int64)a2);
		return v10;
	}
	if (!*(_DWORD*)(a1 + 80) && a3)
	{
		v10 = 1;
		if (*(_BYTE*)(a1 + 88))
			sub_1408607A0(v3);
		*(_BYTE*)(a1 + 88) = 0;
	}
	else
	{
	LABEL_17:
		v11 = sub_140861310(a2);
		v10 = v11;
		if (v11 != 1 && v11 != 63)
			goto LABEL_19;
	}
	if (a3)
	{
		*(_BYTE*)(a1 + 89) = *(_BYTE*)(v3 + 383) >> 7;
		*(_QWORD*)(a1 + 16) = a2;
	}
	else
	{
		*(_QWORD*)(a1 + 24) = a2;
	}
	return v10;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C10F28: using guessed type int dword_140C10F28;

