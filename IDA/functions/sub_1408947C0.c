//----- (00000001408947C0) ----------------------------------------------------
__int64 __fastcall sub_1408947C0(__int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
	unsigned int v6; // esi
	int* v7; // rdx
	unsigned int v8; // ebx
	int v9; // edi
	__int64 result; // rax
	unsigned int v11; // eax
	__int64 v12; // rdi
	__int64 v13; // rax
	__int64 v14; // rsi
	unsigned int v15; // r9d
	__int64 v16; // r10
	__int64 v17; // rdx
	unsigned int v18; // eax
	__int64 v19; // r8
	int v20; // ecx
	int v21; // ecx
	__int64 v22; // xmm0_8
	__int64 v23; // xmm1_8
	__int64 v24; // xmm0_8
	__int64 v25; // xmm1_8
	int v26; // ecx
	int v27; // ecx
	__int64 v28; // xmm0_8
	__int64 v29; // xmm1_8
	__int64 v30; // xmm0_8
	__int64 v31; // xmm1_8
	int v32; // ecx
	int v33; // ecx
	__int64 v34; // xmm0_8
	__int64 v35; // xmm1_8
	__int64 v36; // xmm0_8
	__int64 v37; // xmm1_8
	int v38; // ecx
	int v39; // ecx
	__int64 v40; // xmm0_8
	__int64 v41; // xmm1_8
	__int64 v42; // xmm0_8
	__int64 v43; // xmm1_8
	__int64 v44; // r8
	__int64 v45; // r9
	int v46; // ecx
	int v47; // ecx
	__int64 v48; // xmm0_8
	__int64 v49; // xmm1_8
	__int64 v50; // xmm0_8
	__int64 v51; // xmm1_8
	int v52; // r9d
	__int64 v53; // r15
	__int64 v54; // rax
	unsigned int v55; // esi
	int* v56; // r8
	unsigned __int64 v57; // rdi
	char v58; // al
	__int64 v59; // rax
	__int64 v60; // rcx
	int v61; // edx
	int v62; // eax
	__int64 v63; // rdi
	char v64; // bl
	unsigned int v65; // edi
	int v66; // eax
	int* v67; // rcx
	int v68; // edx
	__m128i v69; // [rsp+30h] [rbp-31h] BYREF
	int v70; // [rsp+40h] [rbp-21h]
	char v71[4]; // [rsp+50h] [rbp-11h] BYREF
	int v72; // [rsp+54h] [rbp-Dh]
	__m128i v73; // [rsp+58h] [rbp-9h]
	int v74; // [rsp+68h] [rbp+7h]
	__int64 v75; // [rsp+70h] [rbp+Fh]
	int* v76; // [rsp+C8h] [rbp+67h] BYREF
	int v77; // [rsp+D0h] [rbp+6Fh] BYREF

	v77 = a3;
	v76 = (int*)(a2 + 4);
	v6 = *(_DWORD*)(a2 + 4);
	v7 = (int*)(a2 + 8);
	v8 = 1;
	v76 = v7;
	v9 = 0;
	if (v6)
	{
		while (1)
		{
			if (v8 == 1)
			{
				result = sub_14083FD40(&v76, &v77, (__int64)v71);
				if ((_DWORD)result != 1)
					return result;
				if (v75)
				{
					v11 = sub_140893F60(a1, v73.m128i_i32[0]);
				}
				else
				{
					v70 = v74;
					v69 = v73;
					v11 = sub_140894030(a1, _mm_cvtsi128_si32(v73), v72, (__int64)&v69);
				}
				v8 = v11;
				if (v11 != 1)
					return 2i64;
			}
			if (++v9 >= v6)
			{
				v7 = v76;
				goto LABEL_10;
			}
		}
	}
	else
	{
	LABEL_10:
		v12 = (unsigned int)*v7;
		v76 = v7 + 1;
		if ((_DWORD)v12)
		{
			v13 = sub_1408819F0(dword_140C10F20, 40 * v12);
			v14 = v13;
			if (!v13)
				return 52i64;
			v15 = 0;
			v16 = 0i64;
			if ((int)v12 >= 4)
			{
				v17 = v13 + 8;
				v18 = ((unsigned int)(v12 - 4) >> 2) + 1;
				v19 = v18;
				v15 = 4 * v18;
				v16 = 4i64 * v18;
				do
				{
					v20 = *v76++;
					*(_DWORD*)(v17 - 8) = v20;
					v21 = *v76++;
					*(_DWORD*)(v17 - 4) = v21;
					v22 = *(_QWORD*)v76;
					v76 += 2;
					*(_QWORD*)v17 = v22;
					v23 = *(_QWORD*)v76;
					v76 += 2;
					*(_QWORD*)(v17 + 8) = v23;
					v24 = *(_QWORD*)v76;
					v76 += 2;
					*(_QWORD*)(v17 + 16) = v24;
					v25 = *(_QWORD*)v76;
					v76 += 2;
					*(_QWORD*)(v17 + 24) = v25;
					v26 = *v76++;
					*(_DWORD*)(v17 + 32) = v26;
					v27 = *v76++;
					*(_DWORD*)(v17 + 36) = v27;
					v28 = *(_QWORD*)v76;
					v76 += 2;
					*(_QWORD*)(v17 + 40) = v28;
					v29 = *(_QWORD*)v76;
					v76 += 2;
					*(_QWORD*)(v17 + 48) = v29;
					v30 = *(_QWORD*)v76;
					v76 += 2;
					*(_QWORD*)(v17 + 56) = v30;
					v31 = *(_QWORD*)v76;
					v76 += 2;
					*(_QWORD*)(v17 + 64) = v31;
					v32 = *v76++;
					*(_DWORD*)(v17 + 72) = v32;
					v33 = *v76++;
					*(_DWORD*)(v17 + 76) = v33;
					v34 = *(_QWORD*)v76;
					v76 += 2;
					*(_QWORD*)(v17 + 80) = v34;
					v35 = *(_QWORD*)v76;
					v76 += 2;
					*(_QWORD*)(v17 + 88) = v35;
					v36 = *(_QWORD*)v76;
					v17 += 160i64;
					v76 += 2;
					*(_QWORD*)(v17 - 64) = v36;
					v37 = *(_QWORD*)v76;
					v76 += 2;
					*(_QWORD*)(v17 - 56) = v37;
					v38 = *v76++;
					*(_DWORD*)(v17 - 48) = v38;
					v39 = *v76++;
					*(_DWORD*)(v17 - 44) = v39;
					v40 = *(_QWORD*)v76;
					v76 += 2;
					*(_QWORD*)(v17 - 40) = v40;
					v41 = *(_QWORD*)v76;
					v76 += 2;
					*(_QWORD*)(v17 - 32) = v41;
					v42 = *(_QWORD*)v76;
					v76 += 2;
					*(_QWORD*)(v17 - 24) = v42;
					v43 = *(_QWORD*)v76;
					v76 += 2;
					*(_QWORD*)(v17 - 16) = v43;
					--v19;
				} while (v19);
			}
			if (v15 < (unsigned int)v12)
			{
				v44 = v14 + 8 * (v16 + 4 * v16 + 1);
				v45 = (unsigned int)v12 - v15;
				do
				{
					v44 += 40i64;
					v46 = *v76++;
					*(_DWORD*)(v44 - 48) = v46;
					v47 = *v76++;
					*(_DWORD*)(v44 - 44) = v47;
					v48 = *(_QWORD*)v76;
					v76 += 2;
					*(_QWORD*)(v44 - 40) = v48;
					v49 = *(_QWORD*)v76;
					v76 += 2;
					*(_QWORD*)(v44 - 32) = v49;
					v50 = *(_QWORD*)v76;
					v76 += 2;
					*(_QWORD*)(v44 - 24) = v50;
					v51 = *(_QWORD*)v76;
					v76 += 2;
					*(_QWORD*)(v44 - 16) = v51;
					--v45;
				} while (v45);
			}
			v52 = *v76++;
			v8 = sub_140894DA0(a1, v12, v14, v52);
			sub_140881720(dword_140C10F20, v14);
		}
		if (v8 != 1)
			return v8;
		sub_140894E70(a1 + 192);
		v53 = (unsigned int)*v76++;
		if ((_DWORD)v53)
		{
			v54 = sub_1408819F0(dword_140C10F20, 24 * v53);
			*(_QWORD*)(a1 + 192) = v54;
			*(_QWORD*)(a1 + 200) = v54;
			if (!v54)
				return 2i64;
			*(_DWORD*)(a1 + 208) = v53;
			v55 = 0;
			v56 = v76;
			do
			{
				v57 = (unsigned int)((*(_DWORD*)(a1 + 200) - *(_DWORD*)(a1 + 192)) / 24);
				if ((v57 < *(unsigned int*)(a1 + 208) || (v58 = sub_140836BE0(a1 + 192, 1), v56 = v76, v58))
					&& v57 < *(unsigned int*)(a1 + 208))
				{
					v59 = *(_QWORD*)(a1 + 200);
					if (v59)
					{
						*(_QWORD*)(v59 + 8) = 0i64;
						*(_QWORD*)(v59 + 16) = 0i64;
						v56 = v76;
					}
					v60 = *(_QWORD*)(a1 + 200);
					*(_QWORD*)(a1 + 200) = v60 + 24;
				}
				else
				{
					v60 = 0i64;
				}
				v61 = *v56;
				v76 = v56 + 1;
				v62 = v56[1];
				v76 = v56 + 2;
				v63 = (unsigned int)v56[2];
				v56 += 3;
				v76 = v56;
				if ((_DWORD)v63)
				{
					if ((unsigned int)sub_140894580(v60, v61, v62, v56, v63) != 1)
						return 2i64;
					v56 = &v76[3 * v63];
					v76 = v56;
				}
				++v55;
			} while (v55 < (unsigned int)v53);
		}
		v64 = a5;
		result = sub_1408546E0((_BYTE*)a1, (unsigned int**)&v76, &v77, a5);
		v65 = result;
		if (!v64)
		{
			if ((_DWORD)result == 1)
			{
				v66 = *v76++;
				v67 = v76 + 1;
				*(_DWORD*)(a1 + 252) = v66;
				v68 = *(v67 - 1);
				v76 = v67;
				sub_1408943A0(a1, v68);
			}
			return v65;
		}
	}
	return result;
}
// 140894C3E: conditional instruction was optimized away because r15d.4!=0
// 140C10F20: using guessed type int dword_140C10F20;
// 1408947C0: using guessed type char var_60[4];

