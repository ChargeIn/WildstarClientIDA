//----- (0000000140773A90) ----------------------------------------------------
_QWORD* __fastcall sub_140773A90(__int64 a1, __m128* a2, double a3, float a4, _DWORD* a5)
{
	_QWORD* v5; // rax
	_QWORD* v7; // rbx
	__m128* v10; // rdi
	float v11; // xmm0_4
	_QWORD* v12; // rcx
	__int64 v13; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* result; // rax
	_QWORD* v17; // rbx
	__m128* v18; // rdi
	_QWORD* v19; // rcx
	double v20; // xmm3_8
	_QWORD* v21; // rcx
	double v22; // xmm3_8
	__int64 v23; // rax
	__m128 v24; // [rsp+38h] [rbp-D0h] BYREF
	__int128 v25; // [rsp+48h] [rbp-C0h] BYREF
	__m128 v26; // [rsp+58h] [rbp-B0h] BYREF
	__m128 v27; // [rsp+68h] [rbp-A0h] BYREF
	__int128 v28; // [rsp+78h] [rbp-90h]
	__m128 v29; // [rsp+88h] [rbp-80h] BYREF
	__int128 v30; // [rsp+98h] [rbp-70h] BYREF
	float v31; // [rsp+A8h] [rbp-60h]
	int v32; // [rsp+ACh] [rbp-5Ch]
	char v33[64]; // [rsp+B8h] [rbp-50h] BYREF
	__int128 v34[6]; // [rsp+F8h] [rbp-10h] BYREF

	v5 = *(_QWORD**)(a1 + 824);
	v7 = (_QWORD*)v5[2];
	if (v7 != v5)
	{
		do
		{
			v10 = (__m128*)v7[5];
			v29 = v10[1];
			sub_140771080(&v24, &v29, a2, a3, LODWORD(a4), a5);
			v26 = v10[2];
			sub_140771080((__m128*) & v25, &v26, a2, a3, LODWORD(a4), a5);
			*(_QWORD*)&v30 = 0i64;
			v31 = (float)(1.0 / a4) * v10[14].m128_f32[0];
			v32 = v10[3].m128_i32[0];
			v11 = sub_1408FD190(*((float*)&v25 + 1) - v24.m128_f32[1], *(float*)&v25 - v24.m128_f32[0]);
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 1i64);
			*(float*)&v28 = v11;
			*((_QWORD*)&v28 + 1) = &v24;
			v27.m128_i32[0] = 1065353216;
			v27.m128_u64[1] = 0i64;
			v34[1] = v28;
			v34[0] = v27.m128_u64[0];
			sub_1401B0840((int*)v34, (__int64)v33);
			(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)qword_140C65680 + 88i64))(qword_140C65680, v33);
			v12 = (_QWORD*)v10[5].m128_u64[0];
			if (v12)
				sub_140103E60(
					v12,
					(__m128*) & v30,
					v10 + 4,
					0,
					COERCE_INT((float)(*(float*)&dword_140C63664 - v10[5].m128_f32[2]) * v10[5].m128_f32[3]));
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
			v13 = v7[3];
			if (v13)
			{
				v7 = (_QWORD*)v7[3];
				for (i = *(_QWORD**)(v13 + 16); i; i = (_QWORD*)i[2])
					v7 = i;
			}
			else
			{
				for (j = v7[1]; v7 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v7 = (_QWORD*)j;
				if (v7[3] != j)
					v7 = (_QWORD*)j;
			}
		} while (v7 != *(_QWORD**)(a1 + 824));
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 2i64);
	result = *(_QWORD**)(a1 + 824);
	v17 = (_QWORD*)result[2];
	if (v17 != result)
	{
		do
		{
			v18 = (__m128*)v17[5];
			v26 = v18[1];
			sub_140771080(&v24, &v26, a2, a3, LODWORD(a4), a5);
			v29 = v18[2];
			sub_140771080(&v27, &v29, a2, a3, LODWORD(a4), a5);
			v19 = (_QWORD*)v18[8].m128_u64[0];
			v25 = xmmword_140B7B240;
			if (v19)
			{
				*(_QWORD*)&v20 = (unsigned int)dword_140C63664;
				*(float*)&v20 = (float)(*(float*)&dword_140C63664 - v18[8].m128_f32[2]) * v18[8].m128_f32[3];
				sub_140103B20(v19, &v24, (__m128*) & v25, v20);
			}
			v21 = (_QWORD*)v18[11].m128_u64[0];
			v30 = xmmword_140B7B240;
			if (v21)
			{
				*(_QWORD*)&v22 = (unsigned int)dword_140C63664;
				*(float*)&v22 = (float)(*(float*)&dword_140C63664 - v18[11].m128_f32[2]) * v18[11].m128_f32[3];
				sub_140103B20(v21, &v27, (__m128*) & v30, v22);
			}
			v23 = v17[3];
			if (v23)
			{
				v17 = (_QWORD*)v17[3];
				for (result = *(_QWORD**)(v23 + 16); result; result = (_QWORD*)result[2])
					v17 = result;
			}
			else
			{
				for (result = (_QWORD*)v17[1]; v17 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v17 = result;
				if ((_QWORD*)v17[3] != result)
					v17 = result;
			}
		} while (v17 != *(_QWORD**)(a1 + 824));
	}
	return result;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;

