#include "../winhttp.h"

//----- (0000000140577660) ----------------------------------------------------
__int64 __fastcall sub_140577660(__int64 a1, _DWORD* a2)
{
	__int64 v4; // rbp
	__int64 v5; // rax
	__int64 v6; // r9
	__int64 v7; // rcx
	__int64 v8; // r12
	unsigned int* v9; // rax
	int v10; // edx
	__int64 v11; // rax
	__int64 v12; // r9
	__int64 v13; // rsi
	__int64 v14; // r8
	int* v15; // rax
	int* v16; // rdx
	int** v17; // r8
	__int64 v18; // rax
	unsigned int v19; // r8d
	__m128 v21; // [rsp+60h] [rbp-68h] BYREF
	__m256 v22; // [rsp+70h] [rbp-58h] BYREF
	__int128 v23; // [rsp+90h] [rbp-38h]
	__int128 v24; // [rsp+A0h] [rbp-28h]

	v4 = sub_140248F00(a2[2]);
	if (v4)
	{
		v5 = sub_140248F00(a2[3]);
		v7 = (unsigned int)a2[4];
		v8 = v5;
		v21 = 0i64;
		if ((_DWORD)v7)
		{
			v9 = (unsigned int*)sub_14023D400(v7);
			if (v9)
				v21 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)v9[27], (__m128)v9[29]),
					_mm_unpacklo_ps((__m128)v9[28], (__m128)0i64));
		}
		v10 = a2[1];
		v22 = ymmword_140C78390;
		v23 = xmmword_140C783B0;
		v24 = xmmword_140C783C0;
		if (v10)
		{
			v11 = sub_1403D90D0(qword_140C65898, v10);
			v13 = v11;
			if (v11)
			{
				if (*(_QWORD*)(v11 + 5864))
				{
					v14 = *(unsigned int*)(v4 + 148);
					if (!(_DWORD)v14
						|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
							+ 24i64))(
								qword_140C659A0,
								v11,
								v14,
								0i64,
								0i64,
								0))
					{
						v19 = a2[1];
						*(_QWORD*)&v24 = *(_QWORD*)(v13 + 4576);
						DWORD2(v24) = *(_DWORD*)(v13 + 4584);
						sub_1405787D0(
							(__int64)&v21,
							*a2,
							v19,
							v12,
							v4,
							v8,
							(__int128*)&v22,
							0,
							(_QWORD*)(v13 + 1416),
							(__int128*)&v21,
							0);
					}
					else
					{
						v15 = sub_14018B280(88i64, 0);
						v16 = v15;
						if (v15)
						{
							*(_QWORD*)v15 = off_140B6CC98;
							*((_QWORD*)v15 + 1) = 0i64;
							*((_QWORD*)v15 + 2) = 0i64;
							*((_QWORD*)v15 + 3) = 0i64;
							*((_QWORD*)v15 + 4) = 0i64;
							v15[10] = *a2;
							v15[11] = a2[1];
							v15[12] = a2[2];
							v15[13] = a2[3];
							v15[14] = a2[4];
							v15[15] = a2[5];
							v15[16] = a2[6];
							v15[17] = a2[7];
							*((_QWORD*)v15 + 9) = (unsigned int)a2[8];
							*((_QWORD*)v15 + 10) = 0i64;
						}
						else
						{
							v16 = 0i64;
						}
						v17 = (int**)(a1 + 8);
						if (!*((_QWORD*)v16 + 3))
						{
							*((_QWORD*)v16 + 3) = v17;
							*((_QWORD*)v16 + 4) = *v17;
							*v17 = v16;
							v18 = *((_QWORD*)v16 + 4);
							if (v18)
								*(_QWORD*)(v18 + 24) = v16 + 8;
						}
					}
				}
				else
				{
					sub_140579AC0((__int64*)(v11 + 1432), a2);
					sub_1400293C0(a1 + 16, (__int64)&v21, a2 + 1);
				}
			}
		}
		else
		{
			LODWORD(v24) = a2[6];
			*(_QWORD*)((char*)&v24 + 4) = *(_QWORD*)(a2 + 7);
			sub_1405787D0(v7, *a2, 0, v6, v4, v8, (__int128*)&v22, 0, 0i64, (__int128*)&v21, 0);
		}
	}
	return 0i64;
}
// 140577892: variable 'v12' is possibly undefined
// 1405778E4: variable 'v7' is possibly undefined
// 1405778E4: variable 'v6' is possibly undefined
// 140B6CC98: using guessed type __int64 (__fastcall *off_140B6CC98[4])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;

