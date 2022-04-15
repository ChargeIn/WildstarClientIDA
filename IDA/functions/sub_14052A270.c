//----- (000000014052A270) ----------------------------------------------------
void __fastcall sub_14052A270(__int64 a1, _DWORD* a2, __int64 a3)
{
	unsigned int v3; // ebp
	_DWORD* v4; // r14
	_DWORD* v6; // rdi
	__int64 v7; // rsi
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rdi
	_DWORD* v11; // rdx
	_DWORD* v12; // r8
	__int64 v13; // r9
	unsigned int v14; // ecx
	unsigned int v15; // eax
	__m128 v16; // xmm2
	__m128i v17; // xmm2
	int v18; // [rsp+30h] [rbp-28h] BYREF
	__int64 v19; // [rsp+38h] [rbp-20h]
	int v20; // [rsp+44h] [rbp-14h]

	if (a3)
	{
		v3 = a3;
		v4 = a2;
		if (*(_QWORD*)(a1 + 1152))
		{
			if (*(_DWORD*)(a1 + 1412) == 2)
			{
				v6 = a2;
				v7 = a3;
				do
				{
					v8 = (*(__int64(__fastcall**)(_QWORD, _DWORD*))(**(_QWORD**)(a1 + 1152) + 96i64))(
						*(_QWORD*)(a1 + 1152),
						v6);
					if (v8 != -1)
						*(_BYTE*)(v8 + *(_QWORD*)(a1 + 1352)) = 1;
					v6 += 2;
					--v7;
				} while (v7);
				v9 = *(_QWORD*)(a1 + 1424);
				if (v9 && *(_QWORD*)(a1 + 1456))
				{
					if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 48i64))(v9))
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 504i64))(qword_140C65670);
						(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
						v19 = *(_QWORD*)(a1 + 1424);
						v18 = 1;
						v20 = 0;
						(*(void(__fastcall**)(__int64, int*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
							qword_140C65670,
							&v18,
							&unk_140C3FE88,
							&unk_140C3FE88,
							&unk_140C3FE88);
						(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
							qword_140C65670,
							&unk_140C3FE88,
							1i64);
						(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
							qword_140C65670,
							*(_QWORD*)(a1 + 1456),
							0i64);
						v10 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 224i64))(
							qword_140C65670,
							28 * v3,
							0i64,
							0i64);
						if (v10)
						{
							v12 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1152) + 88i64))(*(_QWORD*)(a1 + 1152));
							if (v3)
							{
								v11 = (_DWORD*)(v10 + 16);
								v13 = v3;
								do
								{
									v14 = *v4 - *v12;
									v15 = v4[1] - v12[1];
									*(v11 - 1) = 1065353216;
									*v11 = -16645630;
									v11 += 7;
									v4 += 2;
									v16 = _mm_cvtepi32_ps(
										_mm_unpacklo_epi32(
											_mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), _mm_cvtsi32_si128(0)),
											_mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(0))));
									v17 = (__m128i)_mm_unpacklo_ps(
										_mm_unpacklo_ps(v16, (__m128)0i64),
										_mm_unpacklo_ps(_mm_shuffle_ps(v16, v16, 85), (__m128)0i64));
									*(v11 - 11) = _mm_cvtsi128_si32(v17);
									*(v11 - 10) = _mm_cvtsi128_si32(_mm_srli_si128(v17, 4));
									*(v11 - 9) = _mm_cvtsi128_si32(_mm_srli_si128(v17, 8));
									--v13;
								} while (v13);
							}
							(*(void(__fastcall**)(__int64, _DWORD*, _DWORD*))(*(_QWORD*)qword_140C65670 + 232i64))(
								qword_140C65670,
								v11,
								v12);
						}
						(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD*)qword_140C65670 + 648i64))(
							qword_140C65670,
							0i64,
							0i64,
							v3,
							1);
						(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
						(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
						(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
					}
					else
					{
						sub_14052D5C0(a1);
					}
				}
			}
		}
	}
}
// 14052A2BA: conditional instruction was optimized away because r8.8!=0
// 14052A494: variable 'v11' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;

