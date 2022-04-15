//----- (000000014037AC40) ----------------------------------------------------
void __fastcall sub_14037AC40(__int64 a1, _OWORD* a2)
{
	__m128 v3; // xmm1
	__m128 v4; // xmm2
	int v5; // ecx
	int v6; // r9d
	__m128 v7; // xmm3
	int v8; // ecx
	int v9; // edx
	__m128 v10; // xmm2
	int v11; // ecx
	int v12; // ecx
	int v13; // r8d
	int v14; // r8d
	bool v15; // cc
	__int64 v16; // rdi
	int CurrentThreadId; // r8d
	__int64 v18; // rcx
	__int64 v19; // rcx
	int v20; // edx
	int v21; // eax
	int v22; // r8d
	int v23; // ecx
	unsigned __int64 v24; // rbx
	__int64 v25; // rax
	bool v26; // cf
	__int64 v27; // rax
	int* v28; // rax
	int v29; // ecx
	int* v30; // rdx
	_QWORD* v31; // rax
	int v32; // edx
	unsigned int v33; // r15d
	int v34; // eax
	__int64 v35; // rbx
	__int64 v36; // rsi
	__int64* v37; // rsi
	__int64** v38; // rcx
	__int64 v39; // rax
	__int64* v40; // rcx
	__int64 v41; // rax
	HANDLE EventW; // rcx
	unsigned __int64 v43; // [rsp+20h] [rbp-19h] BYREF
	unsigned __int64 v44; // [rsp+28h] [rbp-11h] BYREF
	int v45; // [rsp+30h] [rbp-9h]
	int v46; // [rsp+34h] [rbp-5h]
	int v47; // [rsp+38h] [rbp-1h]
	int v48; // [rsp+3Ch] [rbp+3h]
	unsigned __int64* v49; // [rsp+40h] [rbp+7h]
	int* v50; // [rsp+48h] [rbp+Fh]
	unsigned __int64* v51; // [rsp+58h] [rbp+1Fh]
	__int64* v52; // [rsp+60h] [rbp+27h]
	int j; // [rsp+A0h] [rbp+67h] BYREF
	int i; // [rsp+A4h] [rbp+6Bh]
	__int64 v55; // [rsp+A8h] [rbp+6Fh] BYREF

	*(_OWORD*)(a1 + 48) = *a2;
	*(_OWORD*)(a1 + 64) = a2[1];
	if (*(_QWORD*)(a1 + 16))
	{
		v3 = (__m128)(unsigned int)dword_140C43FB8;
		v4 = (__m128)(unsigned int)dword_140C43FB8;
		v4.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * *(float*)(a1 + 48)) + 0.5) * 2048.0;
		v5 = (int)v4.m128_f32[0];
		if ((int)v4.m128_f32[0] != 0x80000000 && (float)v5 != v4.m128_f32[0])
			v4.m128_f32[0] = (float)(v5 - (_mm_movemask_ps(_mm_unpacklo_ps(v4, v4)) & 1));
		v7 = (__m128)(unsigned int)dword_140C43FB8;
		v6 = (int)v4.m128_f32[0];
		v7.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * *(float*)(a1 + 56)) + 0.5) * 2048.0;
		v8 = (int)v7.m128_f32[0];
		if ((int)v7.m128_f32[0] != 0x80000000 && (float)v8 != v7.m128_f32[0])
			v7.m128_f32[0] = (float)(v8 - (_mm_movemask_ps(_mm_unpacklo_ps(v7, v7)) & 1));
		v10 = (__m128)(unsigned int)dword_140C43FB8;
		v9 = (int)v7.m128_f32[0];
		v10.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * *(float*)(a1 + 64)) + 0.5) * 2048.0;
		v11 = (int)v10.m128_f32[0];
		if ((int)v10.m128_f32[0] != 0x80000000 && (float)v11 != v10.m128_f32[0])
			v10.m128_f32[0] = (float)(v11 - (_mm_movemask_ps(_mm_unpacklo_ps(v10, v10)) & 1));
		v12 = (int)v10.m128_f32[0] + 1;
		v3.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * *(float*)(a1 + 72)) + 0.5) * 2048.0;
		v13 = (int)v3.m128_f32[0];
		if ((int)v3.m128_f32[0] != 0x80000000 && (float)v13 != v3.m128_f32[0])
			v3.m128_f32[0] = (float)(v13 - (_mm_movemask_ps(_mm_unpacklo_ps(v3, v3)) & 1));
		v49 = &v44;
		v50 = &dword_140C44560;
		v14 = (int)v3.m128_f32[0] + 1;
		if (dword_140C44560 < v12)
			v12 = dword_140C44560;
		v51 = &v43;
		if (dword_140C44564 < v14)
			v14 = dword_140C44564;
		v52 = &qword_140C44558;
		if (v6 < (int)qword_140C44558)
			v6 = qword_140C44558;
		v47 = v12;
		if (v9 < SHIDWORD(qword_140C44558))
			v9 = HIDWORD(qword_140C44558);
		v45 = v6;
		v48 = v14;
		v46 = v9;
		if (v6 >= v12 || v9 >= v14)
		{
			v6 = qword_140C784C0;
			v9 = HIDWORD(qword_140C784C0);
			v12 = qword_140C784C8;
			v14 = HIDWORD(qword_140C784C8);
		}
		v43 = __PAIR64__(v9, v6);
		v44 = __PAIR64__(v14, v12);
		if (__PAIR64__(v9, v6) == *(_QWORD*)(a1 + 24) && v44 == *(_QWORD*)(a1 + 32))
		{
			if (!*(_QWORD*)(a1 + 104))
			{
				v15 = *(float*)(a1 + 80) <= *(float*)(a1 + 68);
				*(_DWORD*)(a1 + 12) = 0;
				if (v15)
					*(_DWORD*)(a1 + 12) = 1;
				if (*(float*)(a1 + 84) >= *(float*)(a1 + 52))
					*(_DWORD*)(a1 + 12) |= 2u;
			}
		}
		else
		{
			*(_DWORD*)(a1 + 24) = v6;
			*(_DWORD*)(a1 + 28) = v9;
			*(_DWORD*)(a1 + 32) = v12;
			*(_DWORD*)(a1 + 36) = v14;
			v16 = *(_QWORD*)(a1 + 16);
			CurrentThreadId = GetCurrentThreadId();
			if (*(_DWORD*)(v16 + 48) == CurrentThreadId)
			{
				++* (_QWORD*)(v16 + 56);
			}
			else
			{
				v18 = 0i64;
				while (_InterlockedCompareExchange64((volatile signed __int64*)(v16 + 56), 1i64, 0i64))
				{
					_mm_pause();
					if ((unsigned __int64)++v18 >= 0x400)
					{
						sub_14019FB60(v16 + 48, CurrentThreadId);
						goto LABEL_39;
					}
				}
				*(_DWORD*)(v16 + 48) = CurrentThreadId;
			}
		LABEL_39:
			v19 = *(_QWORD*)(a1 + 40);
			if (v19)
				sub_1403762E0(v19);
			*(_QWORD*)(a1 + 40) = 0i64;
			v20 = *(_DWORD*)(a1 + 24);
			v21 = *(_DWORD*)(a1 + 32);
			if (v20 < v21)
			{
				v22 = *(_DWORD*)(a1 + 28);
				v23 = *(_DWORD*)(a1 + 36);
				if (v22 < v23)
				{
					v24 = (v23 - v22) * (v21 - v20);
					v25 = 32 * v24;
					if (!is_mul_ok(v24, 0x20ui64))
						v25 = -1i64;
					v26 = __CFADD__(v25, 8i64);
					v27 = v25 + 8;
					if (v26)
						v27 = -1i64;
					v28 = sub_14018B280(v27, 0);
					if (v28)
					{
						v29 = v24 - 1;
						*v28 = v24;
						v30 = v28 + 2;
						if ((int)v24 - 1 >= 0)
						{
							v31 = v28 + 6;
							do
							{
								--v29;
								*v31 = 0i64;
								v31[1] = 0i64;
								*(v31 - 2) = 0i64;
								v31 += 4;
							} while (v29 >= 0);
						}
					}
					else
					{
						v30 = 0i64;
					}
					*(_QWORD*)(a1 + 40) = v30;
					v32 = *(_DWORD*)(a1 + 28);
					v33 = 0;
					for (i = v32; v32 < *(_DWORD*)(a1 + 36); i = v32)
					{
						v34 = *(_DWORD*)(a1 + 24);
						for (j = v34; v34 < *(_DWORD*)(a1 + 32); j = v34)
						{
							v35 = 0i64;
							v55 = 0i64;
							if (v34 >= (int)qword_140C44530
								&& v34 < dword_140C44538
								&& v32 >= SHIDWORD(qword_140C44530)
								&& v32 < dword_140C4453C)
							{
								sub_14035BEC0(*(_QWORD*)(a1 + 16), &j, &v55);
								v35 = v55;
							}
							v36 = v33++;
							v37 = (__int64*)(*(_QWORD*)(a1 + 40) + 32 * v36);
							*v37 = v35;
							v37[1] = a1;
							(**(void(__fastcall***)(__int64))v35)(v35);
							v38 = (__int64**)(*v37 + 88);
							if (!v37[2])
							{
								v37[2] = (__int64)v38;
								v37[3] = (__int64)*v38;
								*v38 = v37;
								v39 = v37[3];
								if (v39)
									*(_QWORD*)(v39 + 16) = v37 + 3;
							}
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 8i64))(v35);
							v32 = i;
							v34 = j + 1;
						}
						++v32;
					}
				}
			}
			if (!*(_QWORD*)(a1 + 104))
			{
				v40 = (__int64*)(*(_QWORD*)(a1 + 16) + 5480i64);
				*(_QWORD*)(a1 + 104) = v40;
				*(_QWORD*)(a1 + 112) = *v40;
				*v40 = a1;
				v41 = *(_QWORD*)(a1 + 112);
				if (v41)
					*(_QWORD*)(v41 + 104) = a1 + 112;
			}
			if (*(_QWORD*)(v16 + 56) <= 1ui64)
			{
				*(_DWORD*)(v16 + 48) = 0;
				_InterlockedExchange64((volatile __int64*)(v16 + 56), 0i64);
				if (*(_QWORD*)(v16 + 64))
				{
					if (!*(_QWORD*)(v16 + 72))
					{
						EventW = CreateEventW(0i64, 0, 0, 0i64);
						if (_InterlockedCompareExchange64((volatile signed __int64*)(v16 + 72), (signed __int64)EventW, 0i64))
							CloseHandle(EventW);
					}
					SetEvent(*(HANDLE*)(v16 + 72));
				}
			}
			else
			{
				--* (_QWORD*)(v16 + 56);
			}
		}
	}
}
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C44530: using guessed type __int64 qword_140C44530;
// 140C44538: using guessed type int dword_140C44538;
// 140C4453C: using guessed type int dword_140C4453C;
// 140C44558: using guessed type __int64 qword_140C44558;
// 140C44560: using guessed type int dword_140C44560;
// 140C44564: using guessed type int dword_140C44564;
// 140C784C0: using guessed type __int64 qword_140C784C0;
// 140C784C8: using guessed type __int64 qword_140C784C8;

