//----- (0000000140843DB0) ----------------------------------------------------
__m128 __fastcall sub_140843DB0(__int64 a1)
{
	unsigned int v1; // ebp
	unsigned int v2; // r14d
	__m128 i; // xmm6
	unsigned __int64 v5; // rsi
	__m128 v6; // xmm0
	__int64 j; // rbx
	unsigned __int16 v9; // ax
	int* v10; // rdx
	__m128 v11; // xmm0

	v1 = *(unsigned __int8*)(a1 + 10);
	v2 = 0;
	for (i = (__m128)0x501502F9u; v1; v1 >>= 1)
	{
		if ((v1 & 1) != 0)
		{
			v5 = (unsigned __int64)v2 << 7;
			if ((*(_BYTE*)(a1 + 11) & 7) == 0 || *(_WORD*)(a1 + 8))
			{
				for (j = 0i64; ; j = (unsigned int)(j + 1))
				{
					v9 = 1;
					if ((*(_BYTE*)(a1 + 11) & 7) != 0)
						v9 = *(_WORD*)(a1 + 8);
					if ((unsigned int)j >= v9)
						break;
					v10 = &dword_140C10FB0;
					if (*(_QWORD*)a1)
						v10 = *(int**)a1;
					v11 = sub_140829550((__int64)&byte_140C62000[v5 + 24], (float*)&v10[6 * j]);
					v11.m128_f32[0] = v11.m128_f32[0] / *(float*)&byte_140C62000[v5 + 36];
					if (i.m128_f32[0] >= v11.m128_f32[0])
						i = v11;
				}
			}
			else
			{
				v6 = sub_140829550((__int64)&byte_140C62000[v5 + 24], (float*)&dword_140C10FB0);
				v6.m128_f32[0] = v6.m128_f32[0] / *(float*)&byte_140C62000[v5 + 36];
				if (i.m128_f32[0] >= v6.m128_f32[0])
					i = v6;
			}
		}
		++v2;
	}
	return i;
}
// 140C10FB0: using guessed type int dword_140C10FB0;
// 140C62000: using guessed type _BYTE byte_140C62000[80];

