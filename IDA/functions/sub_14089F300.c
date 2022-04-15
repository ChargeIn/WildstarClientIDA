#include "../winhttp.h"

//----- (000000014089F300) ----------------------------------------------------
void __fastcall sub_14089F300(__int64 a1, __int64 a2)
{
	float v4; // xmm0_4
	float v5; // xmm2_4
	unsigned int v6; // ebx
	float v7; // xmm0_4
	unsigned int v8; // eax
	int v9; // r8d
	unsigned int i; // r10d
	unsigned int v11; // r8d
	int v12; // edx
	unsigned int v13; // r8d

	if (qword_140C62AE0)
	{
		v4 = sub_14089F470(a1).m128_f32[0];
		v5 = *(float*)(a1 + 24);
		v6 = 0;
		*(_DWORD*)(a1 + 40) = 0;
		*(float*)(a1 + 32) = v4;
		v7 = v4 - *(float*)(a1 + 36);
		*(_DWORD*)(a1 + 44) = (int)(float)(fabs(v7) / v5);
		if (v7 <= 0.0)
			v5 = -v5;
		*(float*)(a1 + 28) = v5;
		v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 56i64))(*(_QWORD*)(a1 + 16));
		qword_140C62AE0(v8, a2);
		v9 = *(_DWORD*)(a2 + 8);
		for (i = 0; v9; v9 &= v9 - 1)
			++i;
		v11 = *(_DWORD*)(a1 + 52);
		if ((v11 & 0x60000000) == 0x20000000)
		{
			sub_14089ED30(*(unsigned __int16*)(a2 + 18), i, a2, (float*)(a1 + 24));
		}
		else
		{
			v12 = v11 & 0x3FFFF;
			if ((v11 & 0x3FFFF) != 0)
			{
				do
				{
					++v6;
					v12 &= v12 - 1;
				} while (v12);
			}
			v13 = HIBYTE(v11) & 0x1F;
			switch (v13 / v6)
			{
			case 1u:
				sub_14089EEF0(*(unsigned __int16*)(a2 + 18), i, (char**)a2, a1 + 24);
				break;
			case 2u:
				sub_14089F010(*(unsigned __int16*)(a2 + 18), i, (__int16**)a2, a1 + 24);
				break;
			case 4u:
				sub_14089F140(*(unsigned __int16*)(a2 + 18), i, (const __m128i**)a2, a1 + 24);
				break;
			}
		}
	}
	else
	{
		*(_DWORD*)(a2 + 12) = 2;
		*(_WORD*)(a2 + 18) = 0;
	}
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C62AE0: using guessed type __int64 (__fastcall *qword_140C62AE0)(_QWORD, _QWORD);

