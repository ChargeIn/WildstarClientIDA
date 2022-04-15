//----- (00000001401433C0) ----------------------------------------------------
__int64 __fastcall sub_1401433C0(_QWORD* a1)
{
	unsigned int* v2; // rax
	unsigned __int64 v3; // rax
	__m128* v4; // rax
	unsigned int v5; // ebx
	unsigned int v6; // edi
	_DWORD* v8; // rcx
	int v9; // eax
	_DWORD* v10; // rcx
	int v11; // eax
	_DWORD* v12; // rcx
	int v13; // eax
	_DWORD* v14; // rcx
	unsigned __int64 v15; // r8
	char* v16; // rax
	unsigned int v17; // ebx
	unsigned int v18; // edi
	__m128 v19; // xmm8
	__m128 v20; // xmm7
	__m128 v21; // xmm3
	__m128 v22; // xmm2
	unsigned int v23; // ebx
	__m128 v24; // xmm6
	__m128 v25; // xmm7
	double v26; // xmm0_8
	_DWORD* v27; // rax
	__m128 v28; // xmm8
	double v29; // xmm0_8
	__m128 v30; // xmm1
	unsigned int v31; // ebx
	__m128 v32; // [rsp+30h] [rbp-58h] BYREF
	unsigned __int64 v33; // [rsp+98h] [rbp+10h] BYREF

	v2 = (unsigned int*)sub_140143AE0((__int64)a1, 1);
	if (!v2)
	{
		v8 = dword_140A12138;
		if (a1[3] < a1[2])
			v8 = (_DWORD*)a1[3];
		v9 = v8[2];
		if (v9 != 3 && (v9 != 4 || !sub_14005AC80((char*)(*(_QWORD*)v8 + 32i64), &v33)))
			goto LABEL_21;
		v10 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v10 = (_DWORD*)(a1[3] + 16i64);
		v11 = v10[2];
		if (v11 != 3 && (v11 != 4 || !sub_14005AC80((char*)(*(_QWORD*)v10 + 32i64), &v33)))
			goto LABEL_21;
		v12 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
			v12 = (_DWORD*)(a1[3] + 32i64);
		v13 = v12[2];
		if (v13 == 3 || v13 == 4 && sub_14005AC80((char*)(*(_QWORD*)v12 + 32i64), &v33))
		{
			v24 = 0i64;
			v24.m128_f32[0] = sub_140056C40(a1, 1u);
			v25 = 0i64;
			v25.m128_f32[0] = sub_140056C40(a1, 2u);
			v26 = sub_140056C40(a1, 3u);
			v28 = 0i64;
			v27 = (_DWORD*)(a1[3] + 48i64);
			v28.m128_f32[0] = v26;
			if ((unsigned __int64)v27 >= a1[2] || v27 == dword_140A12138 || *(int*)(a1[3] + 56i64) <= 0)
				v29 = 1.0;
			else
				v29 = sub_140056C40(a1, 4u);
			v30 = 0i64;
			v30.m128_f32[0] = v29;
			v21 = _mm_unpacklo_ps(v24, v28);
			v22 = _mm_unpacklo_ps(v25, v30);
		}
		else
		{
		LABEL_21:
			v14 = (_DWORD*)a1[3];
			v15 = a1[2];
			if ((unsigned __int64)v14 >= v15)
				goto LABEL_30;
			if (v14 != dword_140A12138 && (unsigned int)(v14[2] - 3) <= 1)
			{
				v16 = (char*)sub_140056BB0(a1, 1u, 0i64);
				sub_14018F2D0(&v32, v16);
				v17 = sub_140142170(qword_140C63678, (unsigned __int16*)v32.m128_u64[1]);
				LODWORD(v33) = v17;
				v18 = sub_1401430E0(a1, (unsigned int*)&v33);
				sub_1401429A0(qword_140C63678, v17);
				if (v32.m128_u64[1])
					sub_14018B900(v32.m128_i64[1], 0);
				return v18;
			}
			if ((unsigned __int64)v14 >= v15 || v14 == dword_140A12138 || v14[2] != 5)
			{
			LABEL_30:
				LODWORD(v33) = 0;
				v23 = sub_1401430E0(a1, (unsigned int*)&v33);
				sub_1401429A0(qword_140C63678, 0);
				return v23;
			}
			v19 = sub_140144EF0(a1, "ColorTable", 1u, (unsigned __int64*)"r", 1);
			v20 = sub_140144EF0(a1, "ColorTable", 1u, (unsigned __int64*)"g", 2);
			v21 = _mm_unpacklo_ps(v19, sub_140144EF0(a1, "ColorTable", 1u, (unsigned __int64*)"b", 3));
			v22 = _mm_unpacklo_ps(v20, sub_140144EF0(a1, "ColorTable", 1u, (unsigned __int64*)"a", 4));
		}
		v32 = _mm_unpacklo_ps(v21, v22);
		v31 = sub_140141F10(qword_140C63678, &v32);
		LODWORD(v33) = v31;
		v18 = sub_1401430E0(a1, (unsigned int*)&v33);
		sub_1401429A0(qword_140C63678, v31);
		return v18;
	}
	v3 = *v2;
	if (v3 >= *(_QWORD*)(qword_140C63678 + 48))
		v4 = *(__m128**)(qword_140C63678 + 40);
	else
		v4 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v3);
	v32 = *v4;
	v5 = sub_140141F10(qword_140C63678, &v32);
	LODWORD(v33) = v5;
	v6 = sub_1401430E0(a1, (unsigned int*)&v33);
	sub_1401429A0(qword_140C63678, v5);
	return v6;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63678: using guessed type __int64 qword_140C63678;
// 1401433C0: using guessed type __m128 var_58;

