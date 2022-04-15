#include "../winhttp.h"

//----- (00000001405A4E60) ----------------------------------------------------
__int64 __fastcall sub_1405A4E60(__int64 a1, __int64 a2)
{
	__m128* v4; // rax
	__m128* v5; // rbx
	__int64 v6; // rbp
	__int32 v7; // xmm0_4
	__int64 v8; // rcx
	__int64 v9; // rdi
	int v10; // eax
	__int64 v11; // rdx
	int v12; // eax
	__int64 v13; // rcx
	unsigned int* v14; // rbx
	__int64 v15; // rdi
	_DWORD* v16; // rax
	__int64 v17; // rcx

	v4 = (__m128*)sub_14055DE80(a1, *(_DWORD*)a2, *(_DWORD*)(a2 + 4));
	v5 = v4;
	if (v4)
	{
		v6 = v4[19].m128_i64[1];
		v7 = *(_DWORD*)(a2 + 24);
		v4[22] = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 12), (__m128) * (unsigned int*)(a2 + 20)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 16), (__m128)0i64));
		v4[23].m128_i32[0] = v7;
		sub_14053D890((__int64)v4, *(_BYTE*)(a2 + 28), *(_QWORD*)(a2 + 32), *(_BYTE*)(a2 + 40), *(_QWORD*)(a2 + 48));
		v5[21].m128_i32[2] = *(_DWORD*)(a2 + 8);
		sub_14053DD00((__int64)v5);
		v8 = *(_QWORD*)(a1 + 120);
		if (v8)
		{
			sub_14046AFC0(v8, v6, 0i64);
			v9 = *(_QWORD*)(v6 + 56);
			if (v9)
			{
				v10 = (*(__int64(__fastcall**)(__m128*))(v5->m128_u64[0] + 8))(v5);
				v11 = *(_QWORD*)(*(_QWORD*)(a1 + 120) + 5640i64);
				if (v11)
				{
					while (*(_DWORD*)(v11 + 8) != v10)
					{
						v11 = *(_QWORD*)(v11 + 136);
						if (!v11)
							goto LABEL_24;
					}
					v12 = (*(__int64(__fastcall**)(__m128*))(v5->m128_u64[0] + 8))(v5);
					v13 = *(_QWORD*)(*(_QWORD*)(a1 + 120) + 5640i64);
					if (v13)
					{
						while (*(_DWORD*)(v13 + 4) != 1 || v12 != *(_DWORD*)(v13 + 12))
						{
							v13 = *(_QWORD*)(v13 + 136);
							if (!v13)
								goto LABEL_14;
						}
						sub_1407A0390(v13);
					}
				LABEL_14:
					v14 = (unsigned int*)(v9 + 4);
					v15 = 3i64;
					do
					{
						if (*v14)
						{
							v16 = (_DWORD*)sub_14023DC80(*v14);
							if (v16)
							{
								v17 = *(_QWORD*)(*(_QWORD*)(a1 + 120) + 5640i64);
								if (v17)
								{
									while (*(_DWORD*)(v17 + 4) != 2 || *v16 != *(_DWORD*)(v17 + 12))
									{
										v17 = *(_QWORD*)(v17 + 136);
										if (!v17)
											goto LABEL_23;
									}
									sub_1407A0390(v17);
								}
							}
						}
					LABEL_23:
						++v14;
						--v15;
					} while (v15);
				}
			}
		}
	LABEL_24:
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 28048) + 192i64))(
			*(_QWORD*)(a1 + 28048),
			*(unsigned int*)(*(_QWORD*)(v6 + 112) + 4i64));
	}
	return 0i64;
}

