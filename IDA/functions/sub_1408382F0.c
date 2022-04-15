//----- (00000001408382F0) ----------------------------------------------------
__int64 __fastcall sub_1408382F0(
	__int64 a1,
	__int64 a2,
	unsigned int a3,
	__int32 a4,
	int a5,
	int a6,
	int* a7,
	unsigned int a8,
	__int64 a9,
	__int32 a10)
{
	unsigned int v13; // ebp
	unsigned __int64 v14; // rbx
	unsigned __int64 v15; // rdi
	__int64 v16; // rax
	__int64 v17; // r14
	__int32 v18; // r8d
	_DWORD* v19; // rax
	__int64 v20; // rdi
	__int64 v21; // rdx
	__int64 v22; // rcx
	__int64 v23; // rax
	unsigned int v24; // esi
	__int64 v25; // rcx
	__int64 v26; // rdx
	unsigned __int64 v27; // rcx
	__m128i* v28; // rax
	int v29; // ecx
	__m128i v30; // xmm0
	__int64 v31; // rcx
	__int64 v32; // rax
	_QWORD* v33; // rax
	__int64 v35; // rax
	__int64 v36; // rdx
	int v37; // edi
	unsigned int v39; // [rsp+68h] [rbp+10h]

	v13 = 31;
	if (!a2)
		return 31i64;
	v14 = *(_QWORD*)(a1 + 8i64 * (((int)a2 + a4) % 0xC1u) + 3112);
	v39 = ((int)a2 + a4) % 0xC1u;
	if (v14)
	{
		while (*(_QWORD*)v14 != a2 || *(_DWORD*)(v14 + 8) != a4)
		{
			v14 = *(_QWORD*)(v14 + 16);
			if (!v14)
				goto LABEL_6;
		}
	}
	else
	{
	LABEL_6:
		v14 = 0i64;
	}
	if (v14)
	{
		v15 = *(_QWORD*)(v14 + 40);
		v16 = *(_QWORD*)(v14 + 48);
		v17 = v14 + 40;
		if (v15 != v16)
		{
			while (*(_DWORD*)v15 != a5)
			{
				v15 += 24i64;
				if (v15 == v16)
					goto LABEL_11;
			}
			v24 = *(_DWORD*)(v15 + 4);
			v25 = *(_QWORD*)(a1 + 8i64 * (v24 % 0xC1));
			if (v25)
			{
				while (*(_DWORD*)v25 != v24)
				{
					v25 = *(_QWORD*)(v25 + 8);
					if (!v25)
						goto LABEL_28;
				}
				sub_140835080((__int64*)(v25 + 56), v14);
			}
		LABEL_28:
			v26 = *(_QWORD*)(v15 + 8);
			if (v26)
			{
				sub_140881720(dword_140C10F20, v26);
				*(_QWORD*)(v15 + 8) = 0i64;
			}
			*(_QWORD*)(v15 + 16) = 0i64;
			v27 = *(_QWORD*)(v14 + 48) - 24i64;
			if (v15 < v27)
				qmemcpy((void*)v15, (const void*)(v15 + 24), 24 * ((v27 - v15 - 1) / 0x18 + 1));
			*(_QWORD*)(v14 + 48) -= 24i64;
		}
	LABEL_11:
		v18 = a10;
	}
	else
	{
		v28 = (__m128i*)sub_1408819F0(dword_140C10F20, 64i64);
		v14 = (unsigned __int64)v28;
		if (!v28)
			return 52i64;
		v18 = a10;
		v17 = (__int64)&v28[2].m128i_i64[1];
		v28[2].m128i_i64[1] = 0i64;
		v28[3].m128i_i64[0] = 0i64;
		v28[3].m128i_i32[2] = 0;
		v28->m128i_i64[0] = a2;
		v28->m128i_i32[2] = a4;
		v28[2].m128i_i32[0] = a10;
		v29 = (int)*v28;
		v30 = _mm_srli_si128(*v28, 8);
		v28[1].m128i_i64[1] = a9;
		v31 = a1 + 8i64 * ((_mm_cvtsi128_si32(v30) + v29) % 0xC1u);
		v28[1].m128i_i64[0] = *(_QWORD*)(v31 + 3112);
		*(_QWORD*)(v31 + 3112) = v28;
		++* (_DWORD*)(a1 + 4656);
	}
	if (a7 && a8)
	{
		v19 = (_DWORD*)sub_1408353A0(v17);
		if (!v19)
		{
			v13 = 52;
		LABEL_16:
			v20 = a1;
			goto LABEL_17;
		}
		v19[1] = a3;
		*v19 = a5;
		v13 = sub_140837E30((__int64)(v19 + 2), a7, a8, a6);
		if (v13 != 1)
		{
			*(_QWORD*)(v17 + 8) -= 24i64;
			goto LABEL_16;
		}
	}
	else if (v18 != 3 || a4 != 64)
	{
		goto LABEL_16;
	}
	v20 = a1;
	v32 = sub_140836730(a1, a3);
	if (v32)
	{
		v33 = (_QWORD*)sub_140834EB0((__int64*)(v32 + 56), v14);
		if (v33)
			*v33 = v14;
		return sub_140839540(a1, a2);
	}
	v13 = 52;
LABEL_17:
	if (*(_QWORD*)(v17 + 8) == *(_QWORD*)v17)
	{
		v21 = v20 + 8i64 * v39;
		v22 = 0i64;
		v23 = *(_QWORD*)(v21 + 3112);
		if (v23)
		{
			while (*(_QWORD*)v23 != a2 || *(_DWORD*)(v23 + 8) != a4)
			{
				v22 = v23;
				v23 = *(_QWORD*)(v23 + 16);
				if (!v23)
					goto LABEL_48;
			}
			v35 = *(_QWORD*)(v23 + 16);
			if (v22)
				*(_QWORD*)(v22 + 16) = v35;
			else
				*(_QWORD*)(v21 + 3112) = v35;
			--* (_DWORD*)(v20 + 4656);
		}
	LABEL_48:
		sub_140837930((_QWORD*)v20, v14);
		v36 = *(_QWORD*)v17;
		v37 = dword_140C10F20;
		if (*(_QWORD*)v17)
		{
			*(_QWORD*)(v17 + 8) = v36;
			sub_140881720(dword_140C10F20, v36);
			*(_QWORD*)v17 = 0i64;
			*(_QWORD*)(v17 + 8) = 0i64;
			*(_DWORD*)(v17 + 16) = 0;
		}
		sub_140881720(v37, v14);
	}
	return v13;
}
// 140838468: conditional instruction was optimized away because rcx.8!=0
// 1408385E7: conditional instruction was optimized away because ebp.4==1
// 140C10F20: using guessed type int dword_140C10F20;

