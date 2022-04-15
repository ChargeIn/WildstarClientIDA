#include "../winhttp.h"

//----- (000000014053F710) ----------------------------------------------------
void __fastcall sub_14053F710(__int64 a1, __int64 a2)
{
	__int64 v2; // r12
	unsigned int v3; // r13d
	__int64 v5; // rbx
	int v6; // eax
	_QWORD* v7; // rdi
	_QWORD* v8; // r14
	BOOL v9; // r15d
	__int64 v10; // rsi
	__int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v16; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	int v19; // eax
	_QWORD* v20; // r14
	_QWORD* v21; // rdi
	__int64 v22; // rsi
	__int64 v23; // rax
	__int64 v24; // rbx
	__int64 v25; // rax
	__int64 n; // rax
	__int64 ii; // rax
	__int64 v28; // rax
	_QWORD* jj; // rax
	__int64 kk; // rax
	__int128 v31; // [rsp+50h] [rbp-88h] BYREF
	_BYTE v32[20]; // [rsp+60h] [rbp-78h] BYREF
	int v33[3]; // [rsp+80h] [rbp-58h] BYREF
	__int64 v34; // [rsp+8Ch] [rbp-4Ch]
	__int64 v35; // [rsp+E8h] [rbp+10h]

	if (a2)
	{
		v2 = a2 + 8;
		v3 = *(_DWORD*)(a2 + 8);
		if (sub_1403D90D0(qword_140C65898, v3))
		{
			sub_14053D680(a1, v2);
			LODWORD(v5) = 2;
			if (v3 == *(_DWORD*)(a1 + 344) && *(_DWORD*)(v2 + 8) == 1)
				LODWORD(v5) = 4;
			v6 = *(_DWORD*)(a1 + 840);
			*(_QWORD*)&v32[12] = 4i64;
			*(_DWORD*)v32 = 0;
			*(_DWORD*)&v32[4] = v6;
			*(_DWORD*)&v32[8] = 2;
			sub_1405663F0(qword_140C65B70 + 1616, &v31, v32);
			v8 = (_QWORD*)*((_QWORD*)&v31 + 1);
			v7 = (_QWORD*)v31;
			v5 = (int)v5;
			v9 = (_QWORD)v31 != *((_QWORD*)&v31 + 1);
			v35 = (int)v5;
			while (v7 != v8)
			{
				v10 = v7[7];
				if (v10 && !*(_DWORD*)(v10 + 132))
				{
					if ((*(_DWORD*)(v10 + 16) & 0x200) != 0 && v5 == 4)
					{
						v11 = *(_QWORD*)(a1 + 856);
						v12 = *(_QWORD*)(v11 + 16);
						if (v12 != v11)
						{
							do
							{
								if ((*(_BYTE*)(v12 + 40) & 4) != 0)
									sub_140543630(
										a1,
										2,
										v10,
										*(_DWORD*)(v12 + 36),
										4,
										0,
										*(_DWORD*)(a1 + 340),
										0i64,
										0.0,
										*(_DWORD*)(v12 + 60));
								v13 = *(_QWORD*)(v12 + 24);
								if (v13)
								{
									v12 = *(_QWORD*)(v12 + 24);
									for (i = *(_QWORD*)(v13 + 16); i; i = *(_QWORD*)(i + 16))
										v12 = i;
								}
								else
								{
									for (j = *(_QWORD*)(v12 + 8); v12 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
										v12 = j;
									if (*(_QWORD*)(v12 + 24) != j)
										v12 = j;
								}
							} while (v12 != *(_QWORD*)(a1 + 856));
						}
						v5 = v35;
					}
					else if ((*(_BYTE*)(v2 + 5) & 4) != 0 && *(_DWORD*)(v2 + 8) == 1)
					{
						sub_140543630(a1, 2, v10, v3, 4, 0, *(_DWORD*)(a1 + 340), 0i64, 0.0, 0);
					}
				}
				v16 = v7[3];
				if (v16)
				{
					v7 = (_QWORD*)v7[3];
					for (k = *(_QWORD**)(v16 + 16); k; k = (_QWORD*)k[2])
						v7 = k;
				}
				else
				{
					for (m = v7[1]; v7 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
						v7 = (_QWORD*)m;
					if (v7[3] != m)
						v7 = (_QWORD*)m;
				}
			}
			v19 = *(_DWORD*)(a1 + 840);
			v33[0] = 0;
			v33[1] = v19;
			v33[2] = 2;
			v34 = 2i64;
			sub_1405663F0(qword_140C65B70 + 1616, v32, v33);
			v31 = *(_OWORD*)v32;
			if (*(_QWORD*)v32 != _mm_srli_si128(*(__m128i*)v32, 8).m128i_u64[0])
			{
				v20 = (_QWORD*)*((_QWORD*)&v31 + 1);
				v21 = (_QWORD*)v31;
				do
				{
					v22 = v21[7];
					if (v22 && !*(_DWORD*)(v22 + 132))
					{
						if ((*(_DWORD*)(v22 + 16) & 0x200) != 0 && v5 == 2)
						{
							v23 = *(_QWORD*)(a1 + 856);
							v24 = *(_QWORD*)(v23 + 16);
							if (v24 != v23)
							{
								do
								{
									if ((*(_BYTE*)(v24 + 40) & 4) != 0)
										sub_140543630(
											a1,
											2,
											v22,
											*(_DWORD*)(v24 + 36),
											2,
											0,
											*(_DWORD*)(a1 + 340),
											0i64,
											0.0,
											*(_DWORD*)(v24 + 60));
									v25 = *(_QWORD*)(v24 + 24);
									if (v25)
									{
										v24 = *(_QWORD*)(v24 + 24);
										for (n = *(_QWORD*)(v25 + 16); n; n = *(_QWORD*)(n + 16))
											v24 = n;
									}
									else
									{
										for (ii = *(_QWORD*)(v24 + 8); v24 == *(_QWORD*)(ii + 24); ii = *(_QWORD*)(ii + 8))
											v24 = ii;
										if (*(_QWORD*)(v24 + 24) != ii)
											v24 = ii;
									}
								} while (v24 != *(_QWORD*)(a1 + 856));
							}
						}
						else if ((*(_BYTE*)(v2 + 5) & 4) != 0 && (!v9 || *(_DWORD*)(v2 + 8) != 1))
						{
							sub_140543630(a1, 2, v22, v3, 2, 0, *(_DWORD*)(a1 + 340), 0i64, 0.0, 0);
						}
					}
					v28 = v21[3];
					if (v28)
					{
						v21 = (_QWORD*)v21[3];
						for (jj = *(_QWORD**)(v28 + 16); jj; jj = (_QWORD*)jj[2])
							v21 = jj;
					}
					else
					{
						for (kk = v21[1]; v21 == *(_QWORD**)(kk + 24); kk = *(_QWORD*)(kk + 8))
							v21 = (_QWORD*)kk;
						if (v21[3] != kk)
							v21 = (_QWORD*)kk;
					}
					v5 = v35;
				} while (v21 != v20);
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

