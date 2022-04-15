#include "../winhttp.h"

//----- (0000000140418A50) ----------------------------------------------------
__int64 __fastcall sub_140418A50(_QWORD* a1)
{
	int* v2; // rax
	int* v3; // rdx
	int v5; // edi
	int v6; // eax
	signed int v7; // ecx
	__int64 v8; // rax
	__int64 v9; // rax
	int v10; // ecx
	unsigned int v11; // eax
	__int64 v12; // rax

	v2 = sub_140417BF0(a1, 1u);
	v3 = v2;
	if (v2)
	{
		v5 = 31;
		if ((v2[85] & 0x400) != 0 && (v6 = v2[96]) != 0)
		{
			v7 = 0;
			while (!_bittest(&v6, v7))
			{
				if ((unsigned int)++v7 >= 0x1F)
					goto LABEL_8;
			}
		}
		else
		{
		LABEL_8:
			v7 = 31;
		}
		if ((unsigned __int64)v7 >= 0x1F)
		{
			v9 = sub_14020E7A0(v3[95]);
			if (v9)
			{
				v10 = *(_DWORD*)(v9 + 16);
				v11 = 0;
				while (!_bittest(&v10, v11))
				{
					if (++v11 >= 0x1F)
						goto LABEL_17;
				}
				v5 = v11;
			}
		LABEL_17:
			v12 = a1[2];
			if ((unsigned __int64)v5 >= 0x1F)
			{
				*(_DWORD*)(v12 + 8) = 0;
			}
			else
			{
				*(_DWORD*)(v12 + 8) = 3;
				*(double*)v12 = (double)v5;
			}
		}
		else
		{
			v8 = a1[2];
			*(_DWORD*)(v8 + 8) = 3;
			*(double*)v8 = (double)v7;
		}
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}

