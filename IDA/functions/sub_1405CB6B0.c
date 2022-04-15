//----- (00000001405CB6B0) ----------------------------------------------------
__int64 __fastcall sub_1405CB6B0(__int64 a1, __m128* a2, __int16 a3, unsigned int* a4)
{
	__int64* v6; // rcx
	__int64 v9; // rax
	float v10; // xmm2_4
	unsigned int v11; // eax
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rdx
	__m128 v17; // [rsp+30h] [rbp-108h] BYREF
	char v18[32]; // [rsp+40h] [rbp-F8h] BYREF
	float v19; // [rsp+60h] [rbp-D8h]
	float v20; // [rsp+D0h] [rbp-68h]

	v6 = *(__int64**)(qword_140C65898 + 29256);
	if (!v6)
		return 2147500037i64;
	v9 = *v6;
	v17 = _mm_add_ps(*a2, (__m128)xmmword_140B7A480);
	if (!(*(unsigned int(__fastcall**)(__int64*, __m128*, char*, __int64, _QWORD))(v9 + 440))(
		v6,
		&v17,
		v18,
		65i64,
		0i64))
		return 0i64;
	v10 = a2->m128_f32[1];
	if (v10 >= v20 || v10 < v19)
	{
		if (v10 <= (float)(fmaxf(v19, v20) + 1.0))
		{
			if ((a3 & 0x20) != 0)
				goto LABEL_10;
			if ((a3 & 0x1000) != 0)
			{
			LABEL_19:
				sub_14079A990(a4, 2);
				return 0i64;
			}
			if ((a3 & 0x4000) == 0)
			{
				if ((a3 & 0x200) == 0)
				{
					v11 = a4[1];
					if (*a4 == v11)
					{
						if (v11)
							v12 = 2 * v11;
						else
							v12 = 8i64;
						v13 = *((_QWORD*)a4 + 2);
						a4[1] = v12;
						*((_QWORD*)a4 + 2) = sub_14018C320(v13, 72 * v12, 8u);
					}
					v14 = *a4;
					v15 = *((_QWORD*)a4 + 2);
					v16 = 9 * v14;
					*a4 = v14 + 1;
					*(_DWORD*)(v15 + 8 * v16) = 29;
					*(_DWORD*)(v15 + 8 * v16 + 8) = 0;
					return 0i64;
				}
				goto LABEL_16;
			}
		}
		else
		{
			if ((a3 & 0x1000) != 0)
				goto LABEL_19;
			if ((a3 & 0x20) != 0)
				goto LABEL_10;
			if ((a3 & 0x4000) == 0)
			{
				if ((a3 & 0x200) == 0)
					return 0i64;
			LABEL_16:
				sub_14079A990(a4, 1);
				return 0i64;
			}
		}
	LABEL_21:
		sub_14079A990(a4, 0);
		return 0i64;
	}
	if ((a3 & 0x200) != 0)
		goto LABEL_16;
	if ((a3 & 0x4000) != 0)
		goto LABEL_21;
	if ((a3 & 0x1000) != 0)
		goto LABEL_19;
	if ((a3 & 0x20) != 0)
		LABEL_10:
	sub_14079A990(a4, 3);
	return 0i64;
}
// 140B7A480: using guessed type __int128 xmmword_140B7A480;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1405CB6B0: using guessed type char var_F8[32];

