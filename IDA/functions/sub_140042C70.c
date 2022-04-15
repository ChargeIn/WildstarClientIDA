//----- (0000000140042C70) ----------------------------------------------------
__int64 __fastcall sub_140042C70(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64* v4; // rax
	unsigned int v5; // r13d
	unsigned __int64 v6; // rsi
	__int64 v7; // rcx
	__int64 v8; // rbx
	int* v9; // rax
	unsigned __int16* v10; // r15
	__int64 v11; // r12
	char* v12; // rax
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rbx
	__int64 v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rbx
	__int64 v19; // rax
	unsigned __int64* v20; // r14
	__int64 v21; // rbx
	__int64 v22; // rax
	__int64 v23; // rcx
	__m128 v24; // xmm3
	__m128 v25; // xmm2
	__m128 v26; // xmm0
	__int64 v27; // rdx
	bool v28; // zf
	int v29; // esi
	__int64 v30; // rbx
	__int64 v31; // rax
	_DWORD* v32; // rcx
	__int64* v33; // rax
	__int64 v35; // [rsp+28h] [rbp-79h]
	__int64 v36; // [rsp+38h] [rbp-69h] BYREF
	unsigned __int64 v37; // [rsp+40h] [rbp-61h]
	char v38[8]; // [rsp+48h] [rbp-59h] BYREF
	int* v39; // [rsp+50h] [rbp-51h]
	int* v40; // [rsp+58h] [rbp-49h]
	int* v41; // [rsp+60h] [rbp-41h]
	__int64 v42; // [rsp+68h] [rbp-39h]
	unsigned __int64 v43; // [rsp+70h] [rbp-31h]
	__int64 v44; // [rsp+80h] [rbp-21h]
	__int64 v45; // [rsp+88h] [rbp-19h]
	__int64 v46; // [rsp+90h] [rbp-11h] BYREF
	__int64 v47; // [rsp+98h] [rbp-9h]
	__m128 v48; // [rsp+B8h] [rbp+17h] BYREF
	int v49; // [rsp+108h] [rbp+67h]
	__int64 v50; // [rsp+110h] [rbp+6Fh]
	__int64 v51; // [rsp+118h] [rbp+77h]

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v37 = 0i64;
	v36 = 0i64;
	if ((*(int(__fastcall**)(__int64, __int64*))(*(_QWORD*)qword_140C65670 + 32i64))(qword_140C65670, &v36) >= 0)
	{
		v4 = (__int64*)(*(__int64 (**)(void))(*(_QWORD*)qword_140C65670 + 24i64))();
		v5 = 0;
		v6 = v4[1];
		v50 = *v4;
		v42 = *v4;
		v51 = v4[2];
		v7 = v4[3];
		v45 = v4[4];
		v49 = v6;
		v43 = v6;
		v44 = v7;
		if (v37)
		{
			v8 = 0i64;
			do
			{
				v9 = sub_14018B280(16i64, 0);
				v10 = (unsigned __int16*)v9;
				v39 = v9;
				v40 = v9;
				v41 = v9 + 4;
				if (v9)
					*(_WORD*)v9 = 0;
				v11 = 5 * v8;
				LODWORD(v35) = *(_DWORD*)(v36 + 40 * v8 + 16);
				v12 = (char*)sub_14018EFA0(
					&v46,
					(__int64)L"%dx%d@%d",
					*(unsigned int*)(v36 + 40 * v8),
					*(unsigned int*)(v36 + 40 * v8 + 4),
					v35);
				if (v12 != v38)
				{
					sub_14001C480((__int64)v38, *((int**)v12 + 1), *((int**)v12 + 2));
					v10 = (unsigned __int16*)v39;
				}
				if (v47)
					sub_14018B900(v47, 0);
				v13 = *(_QWORD*)(a1 + 16);
				++v5;
				*(_DWORD*)(v13 + 8) = 3;
				*(double*)v13 = (double)(int)v5;
				v14 = *(_QWORD*)(a1 + 32);
				*(_QWORD*)(a1 + 16) += 16i64;
				if (*(_QWORD*)(v14 + 120) >= *(_QWORD*)(v14 + 112))
					sub_14005E2C0(a1);
				v15 = *(_QWORD*)(a1 + 16);
				v16 = sub_14005C1B0(a1, 0, 0);
				*(_DWORD*)(v15 + 8) = 5;
				*(_QWORD*)v15 = v16;
				v17 = *(_QWORD*)(a1 + 32);
				*(_QWORD*)(a1 + 16) += 16i64;
				if (*(_QWORD*)(v17 + 120) >= *(_QWORD*)(v17 + 112))
					sub_14005E2C0(a1);
				v18 = *(_QWORD*)(a1 + 16);
				v19 = sub_140062650(a1, (unsigned __int64*)"strDisplay", 0xAui64);
				*(_DWORD*)(v18 + 8) = 4;
				*(_QWORD*)v18 = v19;
				*(_QWORD*)(a1 + 16) += 16i64;
				v20 = (unsigned __int64*)sub_14018F0E0(&v46, v10)[1];
				if (v20)
				{
					v6 = -1i64;
					do
						++v6;
					while (*((_BYTE*)v20 + v6));
					if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
						sub_14005E2C0(a1);
					v21 = *(_QWORD*)(a1 + 16);
					v22 = sub_140062650(a1, v20, v6);
					LODWORD(v6) = v49;
					*(_DWORD*)(v21 + 8) = 4;
					*(_QWORD*)v21 = v22;
					*(_QWORD*)(a1 + 16) += 16i64;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
					*(_QWORD*)(a1 + 16) += 16i64;
				}
				if (v47)
					sub_14018B900(v47, 0);
				sub_14005EA50(
					a1,
					(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
					(int*)(*(_QWORD*)(a1 + 16) - 32i64),
					(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				v23 = v36;
				*(_QWORD*)(a1 + 16) -= 32i64;
				v24 = 0i64;
				v25 = 0i64;
				v26 = 0i64;
				v24.m128_f32[0] = (float)*(int*)(v23 + 8 * v11);
				v25.m128_f32[0] = (float)*(int*)(v23 + 8 * v11 + 4);
				v26.m128_f32[0] = (float)*(int*)(v23 + 8 * v11 + 16);
				v48 = _mm_unpacklo_ps(_mm_unpacklo_ps(v24, v26), _mm_unpacklo_ps(v25, (__m128)0i64));
				sub_1400F0170(a1, v27, qword_1409D0FD4, v48.m128_f32);
				if (*(_QWORD*)(v36 + 8 * v11) != __PAIR64__(HIDWORD(v42), v50)
					|| *(_QWORD*)(v36 + 8 * v11 + 12) != __PAIR64__(v51, HIDWORD(v43))
					|| (v28 = *(_DWORD*)(v36 + 8 * v11 + 8) == (_DWORD)v6, v29 = 1, !v28))
				{
					v29 = 0;
				}
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v30 = *(_QWORD*)(a1 + 16);
				v31 = sub_140062650(a1, (unsigned __int64*)"bCurrent", 8ui64);
				*(_DWORD*)(v30 + 8) = 4;
				*(_QWORD*)v30 = v31;
				*(_QWORD*)(a1 + 16) += 16i64;
				v32 = *(_DWORD**)(a1 + 16);
				v32[2] = 1;
				*v32 = v29 != 0;
				*(_QWORD*)(a1 + 16) += 16i64;
				v33 = (__int64*)sub_1400580E0(a1, -3);
				sub_14005EA50(a1, v33, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 32i64;
				sub_14005EA50(
					a1,
					(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
					(int*)(*(_QWORD*)(a1 + 16) - 32i64),
					(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 32i64;
				if (v10)
					sub_14018B900((__int64)v10, 0);
				LODWORD(v6) = v49;
				v8 = v5;
			} while (v5 < v37);
		}
	}
	if (v36)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v36 - 16) + 8i64))(v36 - 16);
	return 1i64;
}
// 140042D9C: variable 'v35' is possibly undefined
// 140042F4D: variable 'v27' is possibly undefined
// 1409D0FD4: using guessed type unsigned __int64 qword_1409D0FD4[5];
// 1409FEA18: using guessed type wchar_t aDxDD[9];
// 140C65670: using guessed type __int64 qword_140C65670;
// 140042C70: using guessed type char var_B0[8];

