//----- (00000001404FF5B0) ----------------------------------------------------
void __fastcall sub_1404FF5B0(__int64 a1)
{
	__m128 v1; // xmm0
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // r9
	__int64 v10; // rdx
	__int64 v11; // r8
	__m128i v12; // xmm1
	__m128i v13; // xmm1
	__int64 v14; // r8
	__int128 v15; // [rsp+60h] [rbp-48h] BYREF
	int v16; // [rsp+74h] [rbp-34h]

	v3 = *(_QWORD*)(a1 + 2328);
	if (v3 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v3 + 24i64))(v3) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
	v4 = *(_QWORD*)(a1 + 2184);
	if (v4)
	{
		LODWORD(v15) = 0;
		if ((*(unsigned int(__fastcall**)(__int64, __int128*, __int64))(*(_QWORD*)v4 + 24i64))(v4, &v15, 1i64))
		{
			v5 = *(_QWORD*)(a1 + 2120);
			LODWORD(v15) = 0;
			if ((*(unsigned int(__fastcall**)(__int64, __int128*))(*(_QWORD*)v5 + 32i64))(v5, &v15))
			{
				v6 = *(_QWORD*)(a1 + 2136);
				LODWORD(v15) = 0;
				if ((*(unsigned int(__fastcall**)(__int64, __int128*))(*(_QWORD*)v6 + 32i64))(v6, &v15))
				{
					v7 = *(_QWORD*)(a1 + 2152);
					LODWORD(v15) = 0;
					if ((*(unsigned int(__fastcall**)(__int64, __int128*))(*(_QWORD*)v7 + 32i64))(v7, &v15))
					{
						(*(void (**)(void))(*(_QWORD*)qword_140C65670 + 504i64))();
						(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 512i64))(qword_140C65670);
						*((_QWORD*)&v15 + 1) = *(_QWORD*)(a1 + 2128);
						LODWORD(v15) = 1;
						v16 = 0;
						(*(void(__fastcall**)(__int64, __int128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
							qword_140C65670,
							&v15,
							&unk_140C3FE88,
							&unk_140C3FE88,
							&unk_140C3FE88);
						(*(void(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670 + 528i64))(
							qword_140C65670,
							&unk_140C3FE88,
							1i64);
						(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 3i64);
						(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2184) + 296i64))(*(_QWORD*)(a1 + 2184), 1i64);
						(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2184) + 320i64))(*(_QWORD*)(a1 + 2184), 1i64);
						(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64, _DWORD))(**(_QWORD**)(a1 + 2160) + 80i64))(
							*(_QWORD*)(a1 + 2160),
							a1 + 1088,
							a1 + 1152,
							a1 + 1216,
							0);
						v8 = *(_QWORD*)(a1 + 2160);
						v9 = a1 + 1296;
						v10 = a1 + 1232;
						v11 = a1 + 1216;
						if ((*(_BYTE*)(a1 + 664) & 4) != 0)
							(*(void(__fastcall**)(__int64, __int64, __int64, __int64, int, int, int, _QWORD, _QWORD, int, _DWORD))(*(_QWORD*)v8 + 128i64))(
								v8,
								v10,
								v11,
								v9,
								2,
								3,
								-1,
								*(_QWORD*)(a1 + 2152),
								0i64,
								1065353216,
								0);
						else
							(*(void(__fastcall**)(__int64, __int64, __int64, __int64, int, int, _DWORD, _QWORD, _QWORD, int, _DWORD))(*(_QWORD*)v8 + 128i64))(
								v8,
								v10,
								v11,
								v9,
								2,
								3,
								0,
								0i64,
								0i64,
								1065353216,
								0);
						(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
						(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
						(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 464i64))(
							qword_140C65670,
							4i64,
							5i64);
						*((_QWORD*)&v15 + 1) = *(_QWORD*)(a1 + 2144);
						LODWORD(v15) = 1;
						v16 = 0;
						(*(void(__fastcall**)(__int64, __int128*, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
							qword_140C65670,
							&v15,
							&unk_140C3FE88,
							&unk_140C3FE88,
							&unk_140C3FE88);
						*(double*)v1.m128_u64 = (*(double(__fastcall**)(__int64, void*, __int64))(*(_QWORD*)qword_140C65670
							+ 528i64))(
								qword_140C65670,
								&unk_140C3FE88,
								1i64);
						v15 = 0i64;
						(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
							qword_140C65670,
							1i64,
							&v15);
						(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
							qword_140C65670,
							0i64,
							*(_QWORD*)(a1 + 2120),
							0i64,
							0i64);
						(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
							qword_140C65670,
							1i64,
							*(_QWORD*)(a1 + 2128));
						(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
							qword_140C65670,
							2i64,
							*(_QWORD*)(a1 + 2136));
						(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
							qword_140C65670,
							*(_QWORD*)(a1 + 2216),
							0i64);
						v1.m128_f32[0] = sub_1400C9C30(*(_QWORD*)(a1 + 16));
						v12 = _mm_shuffle_epi32(
							_mm_cvttps_epi32(
								_mm_add_ps(
									_mm_mul_ps(
										_mm_min_ps(
											_mm_max_ps(
												(__m128)0i64,
												_mm_unpacklo_ps((__m128)xmmword_140B7A4C0, _mm_unpacklo_ps((__m128)0x3F800000u, v1))),
											(__m128)xmmword_140B7B240),
										(__m128)xmmword_140B7B470),
									(__m128)xmmword_140B7AC50)),
							198);
						v13 = _mm_packus_epi16(v12, v12);
						(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670
							+ 664i64))(
								qword_140C65670,
								(unsigned int)_mm_cvtsi128_si32(_mm_packus_epi16(v13, v13)),
								v14,
								0i64,
								0i64,
								0i64);
						(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
						(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 552i64))(qword_140C65670);
						(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 544i64))(qword_140C65670);
						*(_DWORD*)(a1 + 1040) = 0;
					}
				}
			}
		}
	}
}
// 1404FF94E: variable 'v1' is possibly undefined
// 1404FF98C: variable 'v14' is possibly undefined
// 140B7A4C0: using guessed type __int128 xmmword_140B7A4C0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C65670: using guessed type __int64 qword_140C65670;

