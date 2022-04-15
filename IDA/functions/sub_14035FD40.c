//----- (000000014035FD40) ----------------------------------------------------
__int64 __fastcall sub_14035FD40(__int64 a1)
{
	int v2; // edi
	__int64 v3; // r9
	__int64 v4; // r8
	_QWORD* v5; // r8
	__int64 v6; // r9
	float v7; // xmm0_4
	__int64 v8; // r8
	__int64 v9; // r11
	__int64 v10; // r10
	__int64 v11; // rcx
	int v12; // eax
	__int64 v13; // rax
	_QWORD* v14; // rcx
	__int64 v15; // rax
	_QWORD* v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rax
	__m128 v19; // xmm2
	__m128 v20; // xmm2
	__int128 v22[4]; // [rsp+20h] [rbp-48h] BYREF
	__int64 v23; // [rsp+70h] [rbp+8h]

	if ((*(_DWORD*)(a1 + 128) & 0x880) == 2176)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6192) + 88i64))(*(_QWORD*)(a1 + 6192));
	if ((*(_BYTE*)(a1 + 128) & 0x60) == 0 || (v2 = sub_1403640D0((__m128*)a1), v2 >= 0))
	{
		if ((*(_DWORD*)(a1 + 128) & 0x880) != 2176 || (v2 = sub_1403647D0(a1), v2 >= 0))
		{
			v3 = a1 + 5568;
			v4 = a1 + 5608;
			do
			{
				LODWORD(v23) = sub_1407C2C10(v3, *(_QWORD*)(v4 - 8));
				v7 = sub_1407C2C10(v6, *v5);
				v4 = v8 + 8;
				*((float*)&v23 + 1) = v7;
				*(_QWORD*)(v9 + v4 + 5656) = v23;
			} while (v10 != 1);
			v11 = *(_QWORD*)(a1 + 576);
			if (v11)
			{
				v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 24i64))(v11);
				if (v12)
				{
					if (v12 != 1)
						goto LABEL_18;
					v13 = *(_QWORD*)(a1 + 576);
					v14 = *(_QWORD**)(v13 + 336);
					if (v14)
					{
						*(float*)(a1 + 5776) = sub_1407C2C10((__int64)v14, *(_QWORD*)(*v14 + 8i64 * *(_QWORD*)(v13 + 352)));
						goto LABEL_18;
					}
				}
				else
				{
					v15 = *(_QWORD*)(a1 + 576);
					v16 = *(_QWORD**)(v15 + 200);
					if (v16)
					{
						*(float*)(a1 + 5776) = sub_1407C2C10((__int64)v16, *(_QWORD*)(*v16 + 8i64 * *(_QWORD*)(v15 + 216)));
						goto LABEL_18;
					}
				}
				*(_DWORD*)(a1 + 5776) = 0;
			}
			else
			{
				*(_DWORD*)(a1 + 5776) = 2139095039;
			}
		LABEL_18:
			if ((*(_BYTE*)(a1 + 128) & 0x10) != 0)
			{
				if (*(_DWORD*)(a1 + 4336))
				{
					v17 = *(_QWORD*)(a1 + 4784);
					if (v17)
					{
						(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v17 + 48) + 320i64))(*(_QWORD*)(v17 + 48), 1i64);
						(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 4784) + 48i64) + 296i64))(
							*(_QWORD*)(*(_QWORD*)(a1 + 4784) + 48i64),
							1i64);
						v18 = *(_QWORD*)(a1 + 4784);
						v19 = *(__m128*)(a1 + 1136);
						v22[0] = xmmword_140C78410;
						v20 = _mm_sub_ps(v19, *(__m128*)(a1 + 1120));
						v22[2] = xmmword_140C78430;
						v22[1] = xmmword_140C78420;
						v22[3] = (__int128)_mm_unpacklo_ps(
							_mm_unpacklo_ps(v20, _mm_shuffle_ps(v20, v20, 170)),
							_mm_unpacklo_ps(_mm_shuffle_ps(v20, v20, 85), (__m128)0x3F800000u));
						(*(void(__fastcall**)(_QWORD, __int128*))(**(_QWORD**)(v18 + 48) + 72i64))(*(_QWORD*)(v18 + 48), v22);
					}
				}
			}
			v2 = 0;
		}
	}
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6192) + 112i64))(*(_QWORD*)(a1 + 6192));
	return (unsigned int)v2;
}
// 14035FDC9: variable 'v3' is possibly undefined
// 14035FDDA: variable 'v6' is possibly undefined
// 14035FDCE: variable 'v5' is possibly undefined
// 14035FDDF: variable 'v8' is possibly undefined
// 14035FDEE: variable 'v9' is possibly undefined
// 14035FDF9: variable 'v10' is possibly undefined
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;

