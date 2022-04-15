//----- (000000014070C8C0) ----------------------------------------------------
__int64 __fastcall sub_14070C8C0(__int64 a1, _QWORD* a2, __int64 a3, int a4, float a5)
{
	__int64 result; // rax
	int v9; // ebp
	int v10; // edx
	int v11; // r9d
	int v12; // r10d
	int v13; // r8d
	__int128 v14; // xmm7
	__int64 v15; // rax
	int v16; // xmm6_4
	__int64 v17; // rax
	__int64 v18; // rax
	int v19; // eax
	__int64 v20; // rax
	__int128 v21; // xmm9
	__int64 v22; // rax
	int v23; // edi
	__int64 v24; // rax
	int v25; // xmm8_4
	__int64 v26; // rax
	__m128 v27; // xmm0
	int v28; // ecx

	if ((dword_140C8B088 & 1) == 0)
	{
		dword_140C8B098 = 0;
		dword_140C8B0A8 = 0;
		dword_140C8B0B8 = 0;
		dword_140C8B0C8 = 0;
		dword_140C8B0D8 = 0;
		dword_140C8B088 |= 1u;
	}
	result = sub_14070CF60(a1, a4);
	v9 = result;
	if (result)
	{
		v10 = dword_140C8B088;
		if ((dword_140C8B088 & 2) != 0)
		{
			v11 = dword_140C8B0E4;
		}
		else
		{
			v10 = dword_140C8B088 | 2;
			v11 = 0;
			dword_140C8B0E4 = 0;
			dword_140C8B088 |= 2u;
		}
		if ((v10 & 4) != 0)
		{
			v12 = dword_140C8B064;
		}
		else
		{
			v10 |= 4u;
			v12 = 0;
			dword_140C8B064 = 0;
			dword_140C8B088 = v10;
		}
		if ((v10 & 8) != 0)
		{
			v13 = dword_140C8B06C;
		}
		else
		{
			v10 |= 8u;
			v13 = 0;
			dword_140C8B06C = 0;
			dword_140C8B088 = v10;
		}
		switch (*(_DWORD*)(a1 + 380))
		{
		case 1:
		case 2:
			v14 = 0i64;
			if (v11)
			{
				v16 = dword_140C8B0E0;
			}
			else
			{
				dword_140C8B0E4 = 1;
				v15 = sub_140200220(0x52Eu);
				v10 = dword_140C8B088;
				if (v15)
				{
					v16 = *(int*)(v15 + 24);
					dword_140C8B0E0 = v16;
				}
				else
				{
					*(float*)&v16 = 0.0;
					dword_140C8B0E0 = 0;
				}
			}
			goto LABEL_29;
		case 3:
		case 4:
			v14 = 0i64;
			if (v13)
			{
				v16 = dword_140C8B068;
			}
			else
			{
				dword_140C8B06C = 1;
				v18 = sub_140200220(0x52Eu);
				v10 = dword_140C8B088;
				if (v18)
				{
					v16 = *(int*)(v18 + 32);
					dword_140C8B068 = v16;
				}
				else
				{
					*(float*)&v16 = 0.0;
					dword_140C8B068 = 0;
				}
			}
			goto LABEL_29;
		case 5:
		case 6:
			v14 = 0i64;
			if (v12)
			{
				v16 = dword_140C8B060;
			}
			else
			{
				dword_140C8B064 = 1;
				v17 = sub_140200220(0x52Eu);
				v10 = dword_140C8B088;
				if (v17)
				{
					v16 = *(int*)(v17 + 28);
					dword_140C8B060 = v16;
				}
				else
				{
					*(float*)&v16 = 0.0;
					dword_140C8B060 = 0;
				}
			}
		LABEL_29:
			if ((v10 & 0x10) != 0)
			{
				v19 = dword_140C8B074;
			}
			else
			{
				v10 |= 0x10u;
				v19 = 0;
				dword_140C8B088 = v10;
				dword_140C8B074 = 0;
			}
			if ((v10 & 0x20) == 0)
			{
				v10 |= 0x20u;
				dword_140C8B07C = 0;
				dword_140C8B088 = v10;
			}
			if ((v10 & 0x40) == 0)
			{
				dword_140C8B084 = 0;
				dword_140C8B088 = v10 | 0x40;
			}
			if (v19)
			{
				v21 = (unsigned int)dword_140C8B070;
			}
			else
			{
				dword_140C8B074 = 1;
				v20 = sub_140200220(0x25Au);
				if (v20)
				{
					v21 = *(unsigned int*)(v20 + 24);
					dword_140C8B070 = *(_DWORD*)(v20 + 24);
				}
				else
				{
					v21 = v14;
					dword_140C8B070 = v14;
				}
			}
			v22 = *(_QWORD*)(a3 + 120);
			if (v22)
				v23 = *(_DWORD*)(v22 + 56);
			else
				v23 = 0;
			if (dword_140C8B07C)
			{
				v25 = dword_140C8B078;
			}
			else
			{
				dword_140C8B07C = 1;
				v24 = sub_140200220(0x25Au);
				if (v24)
				{
					v25 = *(int*)(v24 + 28);
					dword_140C8B078 = v25;
				}
				else
				{
					v25 = v14;
					dword_140C8B078 = v14;
				}
			}
			if (dword_140C8B084)
			{
				LODWORD(v14) = dword_140C8B080;
			}
			else
			{
				dword_140C8B084 = 1;
				v26 = sub_140200220(0x25Au);
				if (v26)
					LODWORD(v14) = *(_DWORD*)(v26 + 32);
				dword_140C8B080 = v14;
			}
			v27.m128_u64[1] = *((_QWORD*)&v21 + 1);
			*(double*)v27.m128_u64 = sub_1408FBFC0(*(double*)&v21, (float)((float)v23 + *(float*)&v25) / *(float*)&v14);
			v27.m128_f32[0] = (float)(v27.m128_f32[0] * (float)(*(float*)&v16 * a5)) * (float)v9;
			v28 = (int)v27.m128_f32[0];
			if ((int)v27.m128_f32[0] != 0x80000000 && (float)v28 != v27.m128_f32[0])
				v27.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v27, v27)) & 1) + v28);
			*a2 = (unsigned int)(int)v27.m128_f32[0];
			a2[1] = 1i64;
			a2[2] = 0i64;
			if (!*a2)
				*a2 = 1i64;
			result = 1i64;
			break;
		default:
			result = 0i64;
			break;
		}
	}
	return result;
}
// 140C8B060: using guessed type int dword_140C8B060;
// 140C8B064: using guessed type int dword_140C8B064;
// 140C8B068: using guessed type int dword_140C8B068;
// 140C8B06C: using guessed type int dword_140C8B06C;
// 140C8B070: using guessed type int dword_140C8B070;
// 140C8B074: using guessed type int dword_140C8B074;
// 140C8B078: using guessed type int dword_140C8B078;
// 140C8B07C: using guessed type int dword_140C8B07C;
// 140C8B080: using guessed type int dword_140C8B080;
// 140C8B084: using guessed type int dword_140C8B084;
// 140C8B088: using guessed type int dword_140C8B088;
// 140C8B098: using guessed type int dword_140C8B098;
// 140C8B0A8: using guessed type int dword_140C8B0A8;
// 140C8B0B8: using guessed type int dword_140C8B0B8;
// 140C8B0C8: using guessed type int dword_140C8B0C8;
// 140C8B0D8: using guessed type int dword_140C8B0D8;
// 140C8B0E0: using guessed type int dword_140C8B0E0;
// 140C8B0E4: using guessed type int dword_140C8B0E4;

