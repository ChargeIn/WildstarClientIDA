//----- (000000014085EFB0) ----------------------------------------------------
bool __fastcall sub_14085EFB0(__int64 a1)
{
	__int64 v2; // rdi
	float v3; // xmm6_4
	float v4; // xmm1_4
	int v5; // edx
	float v6; // xmm1_4
	float v7; // xmm8_4
	float v8; // xmm8_4
	__int64 v9; // rcx
	_DWORD* i; // rax
	float v11; // xmm7_4
	__int64 v12; // rbx
	float v13; // xmm7_4
	bool v14; // cf

	if ((*(_BYTE*)(a1 + 380) & 0x20) == 0)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 120i64))(a1);
	v2 = *(_QWORD*)(a1 + 536);
	v3 = 0.0;
	v4 = 0.0;
	if (v2)
	{
		if ((*(_BYTE*)(v2 + 328) & 1) == 0)
			sub_14085C930(*(_QWORD*)(a1 + 536));
		v4 = *(float*)(v2 + 324);
	}
	v5 = dword_140C61BFC;
	v6 = (float)(v4 + *(float*)(a1 + 200)) * 0.050000001;
	if (v6 >= -37.0)
	{
		if ((dword_140C61BFC & 1) == 0)
		{
			v5 = dword_140C61BFC | 1;
			dword_140C61BF8 = 1272224376;
			dword_140C61BFC |= 1u;
		}
		v7 = (float)((float)((float)((float)(COERCE_FLOAT(
			((int)(float)((float)(*(float*)&dword_140C61BF8 * v6) + 1065353200.0) & 0x7FFFFF)
			+ 1065353216)
			* 0.32518977)
			+ 0.020805772)
			* COERCE_FLOAT(
				((int)(float)((float)(*(float*)&dword_140C61BF8 * v6) + 1065353200.0) & 0x7FFFFF)
				+ 1065353216))
			+ 0.65304345)
			* COERCE_FLOAT((int)(float)((float)(*(float*)&dword_140C61BF8 * v6) + 1065353200.0) & 0xFF800000);
	}
	else
	{
		v7 = 0.0;
	}
	v8 = v7 * *(float*)(a1 + 204);
	if (!*(_BYTE*)(a1 + 280))
	{
		v9 = 0i64;
		for (i = (_DWORD*)(a1 + 260); !*i; ++i)
		{
			if (++v9 >= 4)
			{
				v11 = *(float*)(a1 + 236);
				v12 = *(_QWORD*)(a1 + 536);
				if (v12)
				{
					if ((*(_BYTE*)(v12 + 328) & 1) == 0)
					{
						sub_14085C930(v12);
						v5 = dword_140C61BFC;
					}
					v11 = v11 + *(float*)(v12 + 320);
				}
				v13 = v11 * 0.050000001;
				if (v13 >= -37.0)
				{
					if ((v5 & 1) == 0)
					{
						dword_140C61BF8 = 1272224376;
						dword_140C61BFC = v5 | 1;
					}
					v3 = (float)((float)((float)((float)(COERCE_FLOAT(
						((int)(float)((float)(v13 * *(float*)&dword_140C61BF8) + 1065353200.0) & 0x7FFFFF)
						+ 1065353216)
						* 0.32518977)
						+ 0.020805772)
						* COERCE_FLOAT(
							((int)(float)((float)(v13 * *(float*)&dword_140C61BF8) + 1065353200.0) & 0x7FFFFF)
							+ 1065353216))
						+ 0.65304345)
						* COERCE_FLOAT((int)(float)((float)(v13 * *(float*)&dword_140C61BF8) + 1065353200.0) & 0xFF800000);
				}
				v14 = *(float*)&dword_140C10F58 < (float)(v3* v8);
				return !v14;
			}
		}
	}
	v14 = *(float*)&dword_140C10F58 < v8;
	return !v14;
}
// 140C10F58: using guessed type int dword_140C10F58;
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;

