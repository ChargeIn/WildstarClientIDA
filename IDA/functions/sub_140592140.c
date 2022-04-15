//----- (0000000140592140) ----------------------------------------------------
__int64 __fastcall sub_140592140(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rdi
	float v4; // xmm6_4
	float v5; // xmm7_4
	float v6; // xmm7_4
	float v7; // xmm0_4
	float v8; // xmm7_4
	float v9; // xmm5_4
	float v10; // xmm8_4
	float v11; // xmm2_4
	float v12; // xmm4_4
	float v13; // xmm7_4

	result = (__int64)sub_1400B5DF0(*(_QWORD*)a1, *(_DWORD*)(a1 + 72), 0i64);
	v3 = result;
	if (result || *(_DWORD*)(a1 + 408))
	{
		v4 = 0.0;
		v5 = 1.0;
		if (result)
		{
			result = sub_1405A3B90();
			if (*(_DWORD*)(v3 + 344) >= (int)result)
			{
				result = sub_1405A3B90();
				v6 = (float)(*(_DWORD*)(v3 + 344) - result) + 1.0;
				if (dword_140C7DF74)
				{
					v7 = *(float*)&dword_140C7DF70;
				}
				else
				{
					dword_140C7DF74 = 1;
					result = sub_140200220(0x4DFu);
					if (result)
					{
						v7 = *(float*)(result + 24);
						dword_140C7DF70 = LODWORD(v7);
					}
					else
					{
						v7 = 0.0;
						dword_140C7DF70 = 0;
					}
				}
				v5 = 1.0 - (float)(v7 * v6);
			}
		}
		v8 = v5 * (float)(1.0 - *(float*)(a1 + 416));
		if (dword_140C7DF64)
		{
			v9 = *(float*)&dword_140C7DF60;
		}
		else
		{
			dword_140C7DF64 = 1;
			result = sub_140200220(0x4DEu);
			if (result)
			{
				v9 = *(float*)(result + 40);
				dword_140C7DF60 = LODWORD(v9);
			}
			else
			{
				v9 = 0.0;
				dword_140C7DF60 = 0;
			}
		}
		v10 = 1.0 - *(float*)(a1 + 420);
		v11 = fmaxf(0.0, fminf((float)((float)((float)(*(float*)(a1 + 880) / *(float*)(a1 + 484)) - 1.0) * v9) * v8, 1.0));
		*(float*)(a1 + 888) = v11;
		v12 = fmaxf(0.0, fminf(v10 * v11, 1.0));
		*(float*)(a1 + 884) = v12;
		if (v12 > 0.0 && *(_DWORD*)(a1 + 408))
		{
			if ((dword_140C8AF58 & 1) != 0)
			{
				result = (unsigned int)dword_140C8AF64;
			}
			else
			{
				dword_140C8AF58 |= 1u;
				result = 0i64;
				dword_140C8AF64 = 0;
			}
			v13 = *(float*)(a1 + 880) / *(float*)(a1 + 484);
			if ((_DWORD)result)
			{
				v4 = *(float*)&dword_140C8AF60;
			}
			else
			{
				dword_140C8AF64 = 1;
				result = sub_140200220(0x4E5u);
				if (result)
					v4 = *(float*)(result + 24);
				dword_140C8AF60 = LODWORD(v4);
			}
			if (v13 < v4)
				*(_DWORD*)(a1 + 884) = 0;
		}
	}
	else
	{
		*(_DWORD*)(a1 + 888) = 1065353216;
		*(_DWORD*)(a1 + 884) = 1065353216;
	}
	return result;
}
// 140C7DF60: using guessed type int dword_140C7DF60;
// 140C7DF64: using guessed type int dword_140C7DF64;
// 140C7DF70: using guessed type int dword_140C7DF70;
// 140C7DF74: using guessed type int dword_140C7DF74;
// 140C8AF58: using guessed type int dword_140C8AF58;
// 140C8AF60: using guessed type int dword_140C8AF60;
// 140C8AF64: using guessed type int dword_140C8AF64;

