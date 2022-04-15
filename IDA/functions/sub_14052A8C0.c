//----- (000000014052A8C0) ----------------------------------------------------
void __fastcall sub_14052A8C0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rdi
	__int64 v4; // rcx
	__m128* v5; // rax
	__m128 v6; // xmm0
	__int64 v7; // rax
	unsigned int v8; // eax
	__m128 v9; // xmm3
	unsigned int v10; // r8d
	unsigned int v11; // edx
	__m128 v12; // xmm2
	__m128 v13; // xmm1
	char v14; // cl
	__int64 v15; // rcx
	__int64(__fastcall * **v16)(_QWORD); // rcx
	int* v17; // rax
	__m128 v18; // [rsp+30h] [rbp-40h] BYREF
	int v19; // [rsp+40h] [rbp-30h] BYREF
	__m128 v20; // [rsp+44h] [rbp-2Ch]
	int v21; // [rsp+54h] [rbp-1Ch]
	int v22; // [rsp+80h] [rbp+10h] BYREF

	if (*(_QWORD*)(a1 + 1152))
	{
		if (*(_DWORD*)(a1 + 1412) != 2)
		{
			v2 = *(_QWORD*)(a1 + 1416);
			if (!v2)
				goto LABEL_8;
			v19 = 0;
			if (!(*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v2 + 32i64))(v2, &v19))
				goto LABEL_8;
			*(_DWORD*)(a1 + 1412) = 2;
			sub_14052A120(a1);
		}
		if (*(_DWORD*)(a1 + 1344) != (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1152) + 152i64))(*(_QWORD*)(a1 + 1152)))
			sub_14052A120(a1);
	}
LABEL_8:
	v3 = *(_QWORD*)(a1 + 1192);
	if (v3)
	{
		if (!*(_DWORD*)(v3 + 32))
		{
			v4 = *(_QWORD*)(v3 + 56);
			if (v4)
			{
				v18.m128_i32[0] = 0;
				if ((*(unsigned int(__fastcall**)(__int64, __m128*))(*(_QWORD*)v4 + 32i64))(v4, &v18))
					*(_DWORD*)(v3 + 32) = 1;
			}
		}
		sub_14052E280(a1);
	}
	if (qword_140C65898)
	{
		v5 = *(__m128**)(qword_140C65898 + 25744);
		if (v5)
		{
			v6 = v5[286];
			v7 = *(_QWORD*)(qword_140C65898 + 72);
			v18 = v6;
			v18.m128_i32[1] = 0;
			v8 = (*(__int64(__fastcall**)(__int64))(v7 + 8))(qword_140C65898 + 72);
			v9 = v18;
			v10 = *(_DWORD*)(qword_140C65898 + 29008);
			v11 = v8;
			v12 = _mm_sub_ps(v18, *(__m128*)(a1 + 1360));
			v13 = _mm_mul_ps(v12, v12);
			if ((float)((float)(v13.m128_f32[0] + _mm_shuffle_ps(v13, v13, 85).m128_f32[0])
				+ _mm_shuffle_ps(v13, v13, 170).m128_f32[0]) > *(float*)&dword_140C46288)
			{
				if (*(float*)(a1 + 648) > 0.0)
				{
					v15 = *(_QWORD*)(a1 + 16);
					if (v15)
						v14 = sub_1400D1A60(v15);
					else
						v14 = 1;
				}
				else
				{
					v14 = 0;
				}
				sub_140529E90(a1, v11, v10, v18.m128_f32, v14 == 0);
				sub_14052E160(a1);
				*(_DWORD*)(a1 + 1024) = 1;
				v9 = v18;
			}
			*(__m128*)(a1 + 1360) = v9;
		}
	}
	if (*(_QWORD*)(a1 + 1152))
	{
		if (*(_QWORD*)(a1 + 1192))
		{
			if ((unsigned int)sub_14052B1A0(a1, (int*)&v18, (__m128*) & v19, (float*)&v22))
			{
				v16 = *(__int64(__fastcall****)(_QWORD))(a1 + 1152);
				v19 = 0;
				v20 = v18;
				v21 = 0;
				v22 = (**v16)(v16);
				v17 = sub_140538120(a1 + 1376, &v22);
				sub_140773E50((__int64)v17);
			}
		}
		*(_DWORD*)(a1 + 1024) = 0;
	}
}
// 14052AA37: variable 'v11' is possibly undefined
// 14052AA37: variable 'v10' is possibly undefined
// 140C46288: using guessed type int dword_140C46288;
// 140C65898: using guessed type __int64 qword_140C65898;

