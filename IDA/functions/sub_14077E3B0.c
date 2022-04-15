#include "../winhttp.h"

//----- (000000014077E3B0) ----------------------------------------------------
void __fastcall sub_14077E3B0(__int64 a1)
{
	__int64 v1; // r9
	unsigned int* v3; // rdi
	unsigned int v4; // ecx
	_QWORD* v5; // rax
	__int64 v6; // r8
	int v7; // esi
	__int64 v8; // rax
	__int64 v9; // rax
	bool v10; // zf
	__int64 v11; // rcx

	v1 = qword_140C65898;
	*(_DWORD*)(a1 + 240) = 1065353216;
	*(_OWORD*)(a1 + 208) = xmmword_140B7B240;
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_OWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 148) = 0i64;
	*(_QWORD*)(a1 + 156) = 0i64;
	*(_QWORD*)(a1 + 164) = 0i64;
	*(_QWORD*)(a1 + 172) = 0i64;
	*(_QWORD*)(a1 + 180) = 0i64;
	*(_QWORD*)(a1 + 188) = 0i64;
	*(_DWORD*)(a1 + 144) = 0;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_DWORD*)(a1 + 264) = 0;
	v3 = *(unsigned int**)(v1 + 25744);
	if (!v3)
	{
		*(_DWORD*)(a1 + 240) = 0;
		*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
		return;
	}
	v4 = 0;
	v5 = v3 + 182;
	v6 = qword_140C65A08 + 40;
	do
	{
		if (*v5 && (*(_BYTE*)(*(_QWORD*)v6 + 16i64) & 4) != 0)
		{
			*(_DWORD*)(a1 + 240) = 0;
			*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
			return;
		}
		++v4;
		v6 += 8i64;
		v5 += 2;
	} while (v4 < 0x1C);
	v7 = v3[66];
	v8 = sub_1403D90D0(v1, v7);
	if (v8)
	{
		if (*(_DWORD*)(v8 + 128) == 20)
		{
			if (!v3[171])
			{
				if (*(_DWORD*)(v8 + 592))
				{
					if ((unsigned int)sub_14045A950((__int64)v3, v7))
					{
						v9 = sub_1401F31E0(v3[55]);
						if (v9)
						{
							v10 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v9 + 84), (__int64)v3) == 0;
							goto LABEL_17;
						}
					}
				}
			}
		}
		else
		{
			v11 = *(_QWORD*)(v8 + 6408);
			if (*(_BYTE*)(v11 + 4))
			{
				v10 = *(_QWORD*)(v11 + 64) == 0i64;
			LABEL_17:
				if (!v10)
					return;
			}
		}
	}
	*(_DWORD*)(a1 + 240) = 0;
	*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
}
// 14077E480: conditional instruction was optimized away because ecx.4<1Cu
// 14077E4A8: conditional instruction was optimized away because rdi.8!=0
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A08: using guessed type __int64 qword_140C65A08;
// 140C65B70: using guessed type __int64 qword_140C65B70;

