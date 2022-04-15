//----- (0000000140540430) ----------------------------------------------------
void** __fastcall sub_140540430(__int64 a1)
{
	void** result; // rax
	unsigned int v3; // ecx
	_QWORD* v4; // rbx
	_QWORD* v5; // rdi
	__int64 v6; // r8
	__int64 v7; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v10; // rdx
	unsigned int v11; // ecx
	int v12; // r8d
	bool v13; // zf
	_QWORD* v14; // rdi
	_QWORD* v15; // rbx
	__int64 v16; // r8
	__int64 v17; // rax
	unsigned __int64 v18; // r15
	unsigned int v19; // ebx
	unsigned int v20; // r8d
	__int64 v21; // r10
	__int64 v22; // rcx
	__int64 v23; // r11
	unsigned int v24; // edx
	int v25; // edx
	int v26; // edx
	_QWORD* v27; // r12
	_QWORD* v28; // rdi
	__int64 v29; // r14
	unsigned int v30; // esi
	unsigned int v31; // eax
	__int64 v32; // rdx
	int v33; // ebx
	int* v34; // rsi
	__int64 v35; // rbx
	__int64 v36; // r15
	int* v37; // rax
	int* v38; // r14
	int* v39; // rdx
	__int64 v40; // rcx
	__int64 v41; // rax
	__m128i v42; // [rsp+58h] [rbp-39h] BYREF
	__m128i v43; // [rsp+68h] [rbp-29h] BYREF
	int v44; // [rsp+78h] [rbp-19h]
	int v45[2]; // [rsp+88h] [rbp-9h] BYREF
	__int64 v46; // [rsp+90h] [rbp-1h]
	void(__fastcall * v47)(__int64); // [rsp+98h] [rbp+7h]
	__int128 v48; // [rsp+A0h] [rbp+Fh]
	void* retaddr; // [rsp+F0h] [rbp+5Fh] BYREF
	unsigned int v50; // [rsp+F8h] [rbp+67h]
	unsigned __int64 v51; // [rsp+100h] [rbp+6Fh]

	result = &retaddr;
	v3 = *(_DWORD*)(a1 + 840);
	if (v3)
	{
		v43 = (__m128i)__PAIR64__(v3, *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 24i64) == 8);
		v44 = 0;
		sub_1405663F0(qword_140C65B70 + 1616, &v42, &v43);
		v5 = (_QWORD*)v42.m128i_i64[1];
		v4 = (_QWORD*)v42.m128i_i64[0];
		while (v4 != v5)
		{
			v6 = v4[7];
			if (v6 && (*(_DWORD*)(v6 + 16) & 0x100) == 0)
				sub_140543630(a1, 0, v6, *(_DWORD*)(a1 + 340), 0, 0, 0, 0i64, 0.0, 0);
			v7 = v4[3];
			if (v7)
			{
				v4 = (_QWORD*)v4[3];
				for (i = *(_QWORD**)(v7 + 16); i; i = (_QWORD*)i[2])
					v4 = i;
			}
			else
			{
				for (j = v4[1]; v4 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v4 = (_QWORD*)j;
				if (v4[3] != j)
					v4 = (_QWORD*)j;
			}
		}
		v10 = *(_QWORD*)(a1 + 312);
		result = *(void***)(v10 + 112);
		v11 = *((_DWORD*)result + 31);
		if (v11 <= 7 && (v12 = 133, _bittest(&v12, v11))
			|| *((_DWORD*)result + 6) == 3
			&& !*((_DWORD*)result + 39)
			&& (result = (void**)(v11 - 4), ((unsigned int)result & 0xFFFFFFFB) == 0))
		{
			v13 = *(_DWORD*)(*(_QWORD*)(v10 + 112) + 24i64) == 8;
			v45[1] = *(_DWORD*)(a1 + 840);
			v46 = 1i64;
			v45[0] = v13;
			LODWORD(v47) = 0;
			sub_1405663F0(qword_140C65B70 + 1616, &v43, v45);
			v42 = v43;
			result = (void**)_mm_srli_si128(v43, 8).m128i_u64[0];
			if ((void**)v43.m128i_i64[0] != result)
			{
				v14 = (_QWORD*)v42.m128i_i64[1];
				v15 = (_QWORD*)v42.m128i_i64[0];
				do
				{
					v16 = v15[7];
					if (v16 && (*(_DWORD*)(v16 + 16) & 0x100) == 0)
						sub_140543630(a1, 0, v16, *(_DWORD*)(a1 + 340), 0, 0, 0, 0i64, 0.0, 0);
					v17 = v15[3];
					if (v17)
					{
						v15 = (_QWORD*)v15[3];
						for (result = *(void***)(v17 + 16); result; result = (void**)result[2])
							v15 = result;
					}
					else
					{
						for (result = (void**)v15[1]; v15 == result[3]; result = (void**)result[1])
							v15 = result;
						if ((void**)v15[3] != result)
							v15 = result;
					}
				} while (v15 != v14);
			}
		}
		v18 = 0i64;
		v51 = 0i64;
		while (v18 == 2)
		{
		LABEL_95:
			v51 = ++v18;
			if (v18 >= 8)
				return result;
		}
		v19 = 0;
		v50 = 0;
		while (1)
		{
			v20 = *(_DWORD*)(a1 + 840);
			v21 = *(_QWORD*)(qword_140C65B70 + 1624);
			v22 = *(_QWORD*)(v21 + 8);
			v23 = v21;
			result = (void**)v22;
			if (v22)
				break;
		LABEL_66:
			v43.m128i_i64[0] = v21;
			v43.m128i_i64[1] = v23;
			v42 = v43;
			if (v21 != v23)
			{
				v27 = (_QWORD*)v42.m128i_i64[1];
				v28 = (_QWORD*)v42.m128i_i64[0];
				do
				{
					v29 = v28[7];
					if (v29)
					{
						v30 = *(_DWORD*)(v29 + 132);
						if (v30)
						{
							v31 = sub_140540B30(a1, v19);
							if (!v31 && *(_DWORD*)(v29 + 8) == 2)
							{
								v32 = *(_QWORD*)(a1 + 312);
								if (*(_DWORD*)(*(_QWORD*)(v32 + 112) + 24i64) != 8 && !*(_QWORD*)(v32 + 80))
									v31 = *(_DWORD*)(a1 + 80);
							}
							v33 = 0;
							if (v31 >= v30)
								v33 = v31 - v30;
							v34 = sub_14018B280(96i64, 0);
							if (v34)
							{
								*((_QWORD*)v34 + 4) = 0i64;
								*((_QWORD*)v34 + 5) = 0i64;
								*((_QWORD*)v34 + 7) = 0i64;
								*((_QWORD*)v34 + 8) = 0i64;
								v34[4] = 1414420037;
								v34[21] = 0;
							}
							else
							{
								v34 = 0i64;
							}
							v47 = sub_14053C4F0;
							v45[0] = 0;
							v46 = (__int64)v34;
							*(_QWORD*)&v48 = 0i64;
							sub_140195960((__int64)(v34 + 4), v33, (__int64)v45, 4);
							*v34 = v18;
							v34[1] = v50;
							*((_QWORD*)v34 + 11) = a1;
							*((_QWORD*)v34 + 1) = v29;
							v35 = *(_QWORD*)(a1 + 448);
							v36 = v35 + 1;
							v37 = sub_14018DB00(*(_QWORD*)(a1 + 440), v35 + 1, 8i64);
							v38 = v37;
							*(_QWORD*)&v37[2 * v35] = v34;
							v39 = *(int**)(a1 + 440);
							if (v39 != v37)
							{
								sub_1407DB590(v37, v39, 8i64 * *(_QWORD*)(a1 + 448));
								v40 = *(_QWORD*)(a1 + 440);
								if (v40)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(v40 - 16) + 8i64))(v40 - 16);
								*(_QWORD*)(a1 + 440) = v38;
							}
							v19 = v50;
							*(_QWORD*)(a1 + 448) = v36;
							v18 = v51;
						}
					}
					v41 = v28[3];
					if (v41)
					{
						v28 = (_QWORD*)v28[3];
						for (result = *(void***)(v41 + 16); result; result = (void**)result[2])
							v28 = result;
					}
					else
					{
						for (result = (void**)v28[1]; v28 == result[3]; result = (void**)result[1])
							v28 = result;
						if ((void**)v28[3] != result)
							v28 = result;
					}
				} while (v28 != v27);
			}
			v50 = ++v19;
			if (v19 >= 0x20)
				goto LABEL_95;
		}
		while (1)
		{
			if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 24i64) == 8)
			{
				if (!*((_DWORD*)result + 8))
					goto LABEL_50;
			}
			else if (*((_DWORD*)result + 8))
			{
				v23 = (__int64)result;
				result = (void**)result[2];
				goto LABEL_51;
			}
			v24 = *((_DWORD*)result + 9);
			if (v20 >= v24)
			{
				if (v20 > v24
					|| (v25 = *((_DWORD*)result + 10), (int)v18 >= v25)
					&& ((int)v18 > v25
						|| (v26 = *((_DWORD*)result + 11), v26 <= 2) && (v26 < 2 || v19 >= *((_DWORD*)result + 12))))
				{
				LABEL_50:
					result = (void**)result[3];
					goto LABEL_51;
				}
			}
			v23 = (__int64)result;
			result = (void**)result[2];
		LABEL_51:
			if (!result)
			{
				while (1)
				{
					if (*(_DWORD*)(v22 + 32))
					{
						if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 24i64) != 8)
							goto LABEL_64;
					}
					else if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 24i64) == 8)
					{
						goto LABEL_63;
					}
					result = (void**)*(unsigned int*)(v22 + 36);
					if ((unsigned int)result >= v20)
					{
						if ((unsigned int)result > v20
							|| (result = (void**)*(unsigned int*)(v22 + 40), (int)result >= (int)v18)
							&& ((int)result > (int)v18
								|| (result = (void**)*(unsigned int*)(v22 + 44), (int)result >= 2)
								&& ((int)result > 2 || *(_DWORD*)(v22 + 48) >= v19)))
						{
						LABEL_64:
							v21 = v22;
							v22 = *(_QWORD*)(v22 + 16);
							goto LABEL_65;
						}
					}
				LABEL_63:
					v22 = *(_QWORD*)(v22 + 24);
				LABEL_65:
					if (!v22)
						goto LABEL_66;
				}
			}
		}
	}
	return result;
}
// 140540742: conditional instruction was optimized away because rcx.8!=0
// 140C65B70: using guessed type __int64 qword_140C65B70;

