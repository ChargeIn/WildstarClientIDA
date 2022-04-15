#include "../winhttp.h"

//----- (00000001406AA210) ----------------------------------------------------
__int64 __fastcall sub_1406AA210(_QWORD* a1)
{
	__int64 v2; // rdx
	__int64 v3; // rcx
	__int64 v4; // rax
	__m128i v5; // xmm0
	__int64 v6; // rax
	int v7; // ebx
	__int64 v8; // rax
	unsigned int v9; // esi
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rax
	int v13; // eax
	__int64 v14; // rax
	__int64 v16; // [rsp+38h] [rbp+10h]

	v2 = sub_1406A93C0(a1);
	if (v2)
	{
		v3 = *(_QWORD*)(qword_140C65898 + 29272);
		if (v3 && *(_DWORD*)(v3 + 20) == 7)
		{
			if ((dword_140DC4B50 & 1) == 0)
			{
				dword_140DC4B50 |= 1u;
				goto LABEL_8;
			}
			if (!dword_140DC4B5C)
			{
			LABEL_8:
				dword_140DC4B5C = 1;
				v4 = sub_140200220(0x40Bu);
				if (v4)
				{
					dword_140DC4B58 = *(_DWORD*)(v4 + 8);
					v5 = _mm_cvtsi32_si128(dword_140DC4B58);
				}
				else
				{
					dword_140DC4B58 = 0;
					v5 = _mm_cvtsi32_si128(0);
				}
				goto LABEL_44;
			}
			v5 = _mm_cvtsi32_si128(dword_140DC4B58);
		LABEL_44:
			v14 = a1[2];
			*(_DWORD*)(v14 + 8) = 3;
			*(_QWORD*)v14 = *(_OWORD*)&_mm_cvtepi32_pd(v5);
			goto LABEL_45;
		}
		if (*(_DWORD*)(v2 + 48) == 5)
		{
			if ((dword_140DC4B50 & 2) != 0)
			{
				if (dword_140DC4B64)
				{
					v5 = _mm_cvtsi32_si128(dword_140DC4B60);
					goto LABEL_44;
				}
			}
			else
			{
				dword_140DC4B50 |= 2u;
			}
			dword_140DC4B64 = 1;
			v6 = sub_140200220(0x449u);
			if (v6)
			{
				dword_140DC4B60 = *(_DWORD*)(v6 + 8);
				v5 = _mm_cvtsi32_si128(dword_140DC4B60);
			}
			else
			{
				dword_140DC4B60 = 0;
				v5 = _mm_cvtsi32_si128(0);
			}
			goto LABEL_44;
		}
		v7 = 0;
		if ((dword_140DC4B50 & 4) != 0)
		{
			if (dword_140DC4B6C)
			{
				v9 = dword_140DC4B68;
			LABEL_27:
				if (qword_140C658C8)
				{
					v10 = *(_QWORD*)(sub_140436D70(qword_140C658C8, *(_DWORD*)(qword_140C658C8 + 4)) + 8);
					v11 = v10;
					v12 = *(_QWORD*)(v10 + 8);
					while (v12)
					{
						if (*(int*)(v12 + 32) < 31)
						{
							v12 = *(_QWORD*)(v12 + 24);
						}
						else
						{
							v11 = v12;
							v12 = *(_QWORD*)(v12 + 16);
						}
					}
					if (v11 == v10 || (v13 = *(_DWORD*)(v11 + 32), v13 > 31) || v13 >= 31 && *(_DWORD*)(v11 + 36))
						v16 = v10;
					else
						v16 = v11;
					if (v16 != v10 && *(_DWORD*)(v16 + 48) == 1)
						v7 = *(_DWORD*)(v16 + 52);
					v9 += v7;
				}
				v5 = _mm_cvtsi32_si128(v9);
				goto LABEL_44;
			}
		}
		else
		{
			dword_140DC4B50 |= 4u;
		}
		dword_140DC4B6C = 1;
		v8 = sub_140200220(0x449u);
		if (v8)
		{
			v9 = *(_DWORD*)(v8 + 4);
			dword_140DC4B68 = v9;
		}
		else
		{
			v9 = 0;
			dword_140DC4B68 = 0;
		}
		goto LABEL_27;
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
LABEL_45:
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658C8: using guessed type __int64 qword_140C658C8;
// 140DC4B50: using guessed type int dword_140DC4B50;
// 140DC4B58: using guessed type int dword_140DC4B58;
// 140DC4B5C: using guessed type int dword_140DC4B5C;
// 140DC4B60: using guessed type int dword_140DC4B60;
// 140DC4B64: using guessed type int dword_140DC4B64;
// 140DC4B68: using guessed type int dword_140DC4B68;
// 140DC4B6C: using guessed type int dword_140DC4B6C;

