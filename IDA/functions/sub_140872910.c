#include "../winhttp.h"

//----- (0000000140872910) ----------------------------------------------------
char __fastcall sub_140872910(__int64 a1, int* a2, float a3, __int64 a4, int a5)
{
	unsigned __int8 v5; // di
	unsigned int v9; // eax
	int* v10; // rcx
	__int16* v11; // rdx
	__int64 v12; // r8
	int v13; // eax
	bool v14; // di
	float v15; // xmm1_4
	int v16; // eax
	char v17; // al
	char v18; // al
	char v19; // al
	bool v20; // zf
	unsigned int v21; // eax
	__int64 v22; // rdx
	__int64 v23; // rdx
	float v24; // xmm0_4
	int v26[8]; // [rsp+20h] [rbp-38h] BYREF

	v5 = *(_BYTE*)(a1 + 68);
	if (v5 < 4u)
	{
		v9 = *(unsigned __int8*)(a1 + 69);
		if (*(_BYTE*)(a1 + 69))
		{
			v10 = v26;
			v11 = (__int16*)a1;
			v12 = v9;
			do
			{
				v13 = *v11;
				++v10;
				++v11;
				*((float*)v10 - 1) = (float)v13 * 0.000030517578;
				--v12;
			} while (v12);
		}
	}
	else if ((unsigned __int8)(v5 - 4) <= 3u && *(_BYTE*)(a1 + 69))
	{
		sub_1407DB590(v26, (int*)a1, 4i64 * *(unsigned __int8*)(a1 + 69));
	}
	v14 = !*(_DWORD*)(a1 + 56) && *(_BYTE*)(a1 + 69) > 2u && (unsigned __int8)(v5 - 4) > 3u;
	v15 = (float)*a2 / (float)a5;
	if (v15 != *(float*)(a1 + 60))
	{
		*(float*)(a1 + 60) = v15;
		*(_BYTE*)(a1 + 71) = 1;
	}
	sub_140872760(a1, a3);
	v16 = ((unsigned int)a2[1] >> 18) & 0x3F;
	if (v16 == 16)
	{
		v19 = *(_BYTE*)(a1 + 69);
		if (v19 == 1)
		{
			v17 = 0;
		}
		else if (v19 == 2)
		{
			v17 = 1;
		}
		else
		{
			v17 = ((unsigned __int8)(v19 - 3) > 1u) + 2;
		}
	}
	else if (v16 == 32)
	{
		v18 = *(_BYTE*)(a1 + 69);
		if (v18 == 1)
		{
			v17 = 4;
		}
		else if (v18 == 2)
		{
			v17 = 5;
		}
		else
		{
			v17 = ((unsigned __int8)(v18 - 3) > 1u) + 6;
		}
	}
	else
	{
		v17 = -1;
	}
	v20 = *(_DWORD*)(a1 + 56) == 0;
	*(_BYTE*)(a1 + 68) = v17;
	if (v20 && *(_BYTE*)(a1 + 69) > 2u && (unsigned __int8)(v17 - 4) > 3u)
	{
		if (!v14)
			sub_1408726A0(a1, a4);
	}
	else if (v14)
	{
		sub_140872430(a1, a4);
	}
	LOBYTE(v21) = *(_BYTE*)(a1 + 68);
	if ((unsigned __int8)v21 < 4u)
	{
		v23 = 0i64;
		if (!*(_BYTE*)(a1 + 69))
			return v21;
		while (1)
		{
			v24 = *(float*)&v26[v23] * 32767.0;
			if (v24 >= 32767.0)
				break;
			if (v24 > -32768.0)
			{
				if (v24 >= 32767.0)
					break;
			}
			else
			{
				v24 = -32768.0;
			}
		LABEL_46:
			*(_WORD*)(a1 + 2 * v23) = (int)v24;
			v21 = *(unsigned __int8*)(a1 + 69);
			v23 = (unsigned int)(v23 + 1);
			if ((unsigned int)v23 >= v21)
				return v21;
		}
		v24 = 32767.0;
		goto LABEL_46;
	}
	LOBYTE(v21) = v21 - 4;
	if ((unsigned __int8)v21 <= 3u)
	{
		v22 = 0i64;
		if (*(_BYTE*)(a1 + 69))
		{
			do
			{
				*(_DWORD*)(a1 + 4 * v22) = v26[v22];
				v21 = *(unsigned __int8*)(a1 + 69);
				v22 = (unsigned int)(v22 + 1);
			} while ((unsigned int)v22 < v21);
		}
	}
	return v21;
}
// 140872910: using guessed type int var_38[8];

