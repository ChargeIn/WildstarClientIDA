//----- (0000000140633FE0) ----------------------------------------------------
__int64 __fastcall sub_140633FE0(__int64 a1, __int64 a2)
{
	unsigned int v2; // ebx
	unsigned int v3; // r10d
	__int64 v7; // r13
	__int64 v8; // r8
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rax
	int* v12; // r11
	unsigned int v13; // edx
	int* v14; // rdi
	int* v15; // rax
	unsigned __int64 v16; // rbp
	int* v17; // rax
	_QWORD* v18; // rdi
	unsigned __int64 v19; // rsi
	__m128 v20; // xmm6
	__int64 v21; // r15
	__m128 v22; // xmm0
	__int64 v23; // rax
	__int64 v24; // rax
	int* v25; // rsi
	__int64 v26; // rax
	__int64 v27; // rdx
	int* v28; // rcx
	__m128 v29; // [rsp+20h] [rbp-48h] BYREF
	__int64 v30; // [rsp+70h] [rbp+8h] BYREF
	int* v31; // [rsp+78h] [rbp+10h] BYREF

	v2 = *(_DWORD*)(a2 + 4);
	v3 = *(_DWORD*)(a1 + 31408);
	if (v2 < v3)
		return 2147500037i64;
	v7 = a1 + 31416;
	v8 = *(_QWORD*)(a1 + 31424);
	v9 = v8;
	v10 = *(_QWORD*)(v8 + 8);
	v11 = v10;
	while (v11)
	{
		if (*(_DWORD*)(v11 + 32) < v2)
		{
			v11 = *(_QWORD*)(v11 + 24);
		}
		else
		{
			v9 = v11;
			v11 = *(_QWORD*)(v11 + 16);
		}
	}
	if (v9 == v8 || (v30 = v9, v2 < *(_DWORD*)(v9 + 32)))
		v30 = v8;
	v12 = *(int**)(a1 + 31424);
	if ((int*)v30 != v12 && *(_QWORD*)(v30 + 40))
		return 0i64;
	v13 = *(_DWORD*)a2;
	LODWORD(v30) = v13;
	if (v13 < v3)
	{
		if ((unsigned int)sub_1402DD480(*(_QWORD*)(a1 + 31400), (__int64)&v30, &v31))
		{
			v14 = v31;
			goto LABEL_27;
		}
		return 2147500037i64;
	}
	v15 = (int*)v8;
	while (v10)
	{
		if (*(_DWORD*)(v10 + 32) < v13)
		{
			v10 = *(_QWORD*)(v10 + 24);
		}
		else
		{
			v15 = (int*)v10;
			v10 = *(_QWORD*)(v10 + 16);
		}
	}
	if (v15 == (int*)v8 || (v31 = v15, v13 < v15[8]))
		v31 = (int*)v8;
	if (v31 == v12)
		return 2147500037i64;
	v14 = *(int**)(*((_QWORD*)v31 + 5) + 8i64);
LABEL_27:
	v16 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v14 + 32i64))(v14);
	if (v16 != *(_DWORD*)(a2 + 20))
		return 2147500037i64;
	v17 = sub_14018B280(96i64, 0);
	if (v17)
		v18 = (_QWORD*)sub_1407A2C40((__int64)v17, v14);
	else
		v18 = 0i64;
	v19 = 0i64;
	v20 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 8), (__m128) * (unsigned int*)(a2 + 16)),
		_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 12), (__m128)0i64));
	if (v16)
	{
		v21 = 0i64;
		do
		{
			v22 = *(__m128*)(*(__int64(__fastcall**)(_QWORD*, unsigned __int64))(*v18 + 40i64))(v18, v19);
			v23 = *(_QWORD*)(a2 + 24);
			v29 = _mm_add_ps(v22, v20);
			v22.m128_i32[0] = *(_DWORD*)(v23 + 4 * v19);
			v24 = v18[3];
			v29.m128_i32[1] = v22.m128_i32[0];
			*(__m128*)(v21 + v24) = v29;
			sub_1407A4640((__int64)v18);
			++v19;
			v21 += 112i64;
		} while (v19 < v16);
	}
	v25 = sub_14018B280(16i64, 0);
	*v25 = v2;
	*((_QWORD*)v25 + 1) = v18;
	v25[1] = sub_14018CDF0();
	v26 = *(_QWORD*)(v7 + 8);
	v27 = *(_QWORD*)(v26 + 8);
	v28 = (int*)v26;
	while (v27)
	{
		if (*(_DWORD*)(v27 + 32) < v2)
		{
			v27 = *(_QWORD*)(v27 + 24);
		}
		else
		{
			v28 = (int*)v27;
			v27 = *(_QWORD*)(v27 + 16);
		}
	}
	if (v28 == (int*)v26 || v2 < v28[8])
	{
		v30 = (__int64)v28;
		v29.m128_i32[0] = v2;
		v29.m128_u64[1] = 0i64;
		sub_140055C60(v7, &v31, &v30, &v29);
		v28 = v31;
	}
	*((_QWORD*)v28 + 5) = v25;
	return 0i64;
}

