//----- (00000001405CD200) ----------------------------------------------------
void __fastcall sub_1405CD200(__int64* a1, __int64 a2, __int64 a3, double a4)
{
	double v4; // xmm2_8
	__m128* v7; // rcx
	__m128 v8; // xmm4
	__m128 v9; // xmm3
	__m128 v10; // xmm2
	_DWORD* v11; // rcx
	int v12; // eax
	__int64 v13; // rcx
	__m128* v14; // rcx
	__m128 v15; // xmm3
	__m128 v16; // xmm4
	_DWORD* v17; // rcx
	int v18; // eax
	__int64 v19; // rcx
	__int64 v20; // rcx
	_DWORD* v21; // rcx
	int v22; // eax
	int v23; // r8d
	int v24; // edx
	int v25; // r9d
	int v26; // ebx
	_QWORD* v27; // rdx
	__int64 v28; // rax
	_DWORD* i; // rcx
	_DWORD* v30; // rax
	int v31; // r8d
	int v32; // edx
	__int64 v33; // rax

	switch (*(_DWORD*)a2)
	{
	case 0:
		sub_1405CE500((_QWORD**)a1, 1, v4, a4);
		break;
	case 1:
		sub_1405CE730(0x140000000i64, a2);
		break;
	case 2:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "StoryPanelDialog_Hide", &unk_1409D1096);
		break;
	case 3:
		sub_14062CD90((__m128**) * a1, a2);
		break;
	case 4:
		sub_14062CF20((_QWORD*)*a1, a2, a3, a4);
		break;
	case 5:
		v7 = *(__m128**)(*a1 + 8);
		if (v7)
		{
			v8 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 20), (__m128) * (unsigned int*)(a2 + 28)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 24), (__m128)0i64));
			v9 = _mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 8), (__m128) * (unsigned int*)(a2 + 16));
			v10 = (__m128) * (unsigned int*)(a2 + 12);
			v7[53].m128_i32[0] = 0;
			v7[54] = _mm_unpacklo_ps(v9, _mm_unpacklo_ps(v10, (__m128)0i64));
			v7[55] = v8;
		}
		break;
	case 6:
		v11 = *(_DWORD**)(*a1 + 8);
		if (v11)
		{
			v12 = *(_DWORD*)(a2 + 8);
			if (!v11[172])
			{
				v11[212] = 1;
				v11[216] = v12;
			}
		}
		break;
	case 7:
		v13 = *(_QWORD*)(*a1 + 8);
		if (v13)
			sub_1405D3580(v13, *(_DWORD*)(a2 + 8), *(_DWORD*)(a2 + 12), *(float*)(a2 + 16), *(_DWORD*)(a2 + 20));
		break;
	case 8:
		v14 = *(__m128**)(*a1 + 8);
		if (v14)
		{
			v15 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 20), (__m128) * (unsigned int*)(a2 + 28)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 24), (__m128)0i64));
			v16 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 8), (__m128) * (unsigned int*)(a2 + 16)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 12), (__m128)0i64));
			if (!v14[43].m128_i32[0])
			{
				v14[56].m128_i32[0] = 0;
				v14[57] = v16;
				v14[58] = v15;
			}
		}
		break;
	case 9:
		v17 = *(_DWORD**)(*a1 + 8);
		if (v17)
		{
			v18 = *(_DWORD*)(a2 + 8);
			if (!v17[172])
			{
				v17[224] = 1;
				v17[228] = v18;
			}
		}
		break;
	case 0xA:
		v19 = *(_QWORD*)(*a1 + 8);
		if (v19)
			sub_1405D3640(v19, *(_DWORD*)(a2 + 8), *(_DWORD*)(a2 + 12), *(float*)(a2 + 16));
		break;
	case 0xB:
		v20 = *(_QWORD*)(*a1 + 8);
		if (v20 && !*(_DWORD*)(v20 + 688))
			sub_1405D3700(v20, *(_DWORD*)(a2 + 8), *(_DWORD*)(a2 + 12), *(_DWORD*)(a2 + 16), *(_DWORD*)(a2 + 20));
		break;
	case 0xC:
		v21 = *(_DWORD**)(*a1 + 8);
		if (v21)
		{
			v22 = *(_DWORD*)(a2 + 20);
			v23 = *(_DWORD*)(a2 + 12);
			v24 = *(_DWORD*)(a2 + 16);
			v25 = *(_DWORD*)(a2 + 8);
			if (!v21[172])
			{
				v21[212] = 3;
				v21[216] = v25;
				v21[217] = v23;
				v21[218] = v24;
				v21[219] = v22;
			}
		}
		break;
	case 0xD:
		sub_140003460(a1 + 12, (int*)(a2 + 8));
		sub_1403EB430(qword_140C65898, *(_DWORD*)(a2 + 8), *(_DWORD*)(a2 + 4), 0, 0);
		break;
	case 0xE:
		v26 = *(_DWORD*)(a2 + 8);
		if (v26)
			sub_1403EB690(0x140000000i64, v26, 0, 0);
		v27 = (_QWORD*)a1[13];
		v28 = 0i64;
		if (v27)
		{
			for (i = (_DWORD*)a1[12]; *i != v26; ++i)
			{
				if (++v28 >= (unsigned __int64)v27)
					return;
			}
			sub_1401C2F20((__int64)(a1 + 12), v28);
		}
		break;
	case 0xF:
		sub_1405CE970((__int64)a1, a2);
		break;
	case 0x10:
		sub_1405CEAE0((__int64)a1, (_DWORD*)a2);
		break;
	case 0x11:
		sub_140578050((__int64*)qword_140C65B78, *(_DWORD*)(a2 + 8), 0);
		break;
	case 0x12:
		sub_1405CEF50((__int64)a1, (unsigned int*)a2, v4, a4);
		break;
	case 0x13:
		sub_1405CF080((__int64)a1, a2, v4, a4);
		break;
	case 0x14:
		sub_1405CF120(0x140000000i64, a2, v4);
		break;
	case 0x15:
		sub_1405CF290(0x140000000i64, (_DWORD*)a2, v4);
		break;
	case 0x16:
		sub_1405CF580(0x140000000i64, a2, v4);
		break;
	case 0x17:
		sub_14062D0F0((__int64*)*a1, COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a2 + 8)), *(float*)(a2 + 12));
		break;
	case 0x18:
		sub_1405CF640((__int64)a1, a2);
		break;
	case 0x19:
		sub_1405CF840((__int64)a1, (unsigned int*)a2);
		break;
	case 0x1A:
		v30 = (_DWORD*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(a2 + 8));
		if (v30)
		{
			v31 = *(_DWORD*)(a2 + 16);
			v32 = *(_DWORD*)(a2 + 12);
			if ((v30[2] & 0xC0000000) == 0x40000000 && v30[972] != v32)
			{
				v30[972] = v32;
				v30[973] = v31;
				v30[974] = 1;
			}
		}
		break;
	case 0x1B:
		v33 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a2 + 8));
		if (v33 && (*(_DWORD*)(v33 + 8) & 0xC0000000) == 0x40000000 && *(_DWORD*)(v33 + 3888))
		{
			*(_DWORD*)(v33 + 3896) = 1;
			*(_QWORD*)(v33 + 3888) = 0i64;
		}
		break;
	case 0x1C:
		*((_DWORD*)a1 + 13) = *(_BYTE*)(a2 + 8) == 0;
		break;
	case 0x1D:
		sub_1405CEC10((__int64)a1, a2);
		break;
	case 0x1E:
		sub_1405CECB0((__int64)a1, a2);
		break;
	case 0x1F:
		*((_DWORD*)a1 + 20) = *(unsigned __int8*)(a2 + 8);
		break;
	case 0x20:
		*((_DWORD*)a1 + 21) = dword_140C636A8 - *((_DWORD*)a1 + 6);
		break;
	case 0x21:
		sub_1405CEE40((__int64)a1, a2);
		break;
	case 0x22:
		sub_1405CF8E0((__int64)a1, a2);
		break;
	default:
		return;
	}
}
// 1405CD24D: variable 'v4' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B78: using guessed type __int64 qword_140C65B78;

