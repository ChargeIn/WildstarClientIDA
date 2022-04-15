#include "../winhttp.h"

//----- (0000000140578F30) ----------------------------------------------------
unsigned int* __fastcall sub_140578F30(__int64 a1, unsigned int a2, unsigned int a3)
{
	int v3; // r15d
	unsigned int* result; // rax
	unsigned int* v5; // r13
	unsigned int* v6; // r14
	unsigned int* v7; // r13
	unsigned int v8; // ebx
	unsigned int* v9; // rdi
	unsigned int* v10; // rsi
	__int64 v11; // r9
	bool v12; // zf
	int v13; // ebx
	unsigned int v14; // r12d
	int v15; // ebx
	unsigned int v16; // r15d
	__int64 v17; // r8
	unsigned int* v18; // rcx
	unsigned int v19; // xmm0_4
	unsigned int v20; // xmm1_4
	unsigned int v21; // eax
	int v22; // xmm0_4
	unsigned int** v23; // r8
	unsigned int v24; // eax
	__m128 v25; // xmm2
	__m128 v26; // xmm3
	unsigned int v27; // eax
	__m128 v28; // xmm0
	__int64 v29; // [rsp+60h] [rbp-A0h] BYREF
	unsigned __int64 v30; // [rsp+68h] [rbp-98h]
	__int64 v31; // [rsp+70h] [rbp-90h]
	__int64 v32; // [rsp+78h] [rbp-88h]
	int v33; // [rsp+80h] [rbp-80h]
	__int64 v34; // [rsp+88h] [rbp-78h]
	unsigned int* v35; // [rsp+90h] [rbp-70h]
	__m128 v36; // [rsp+A0h] [rbp-60h] BYREF
	__m256 v37; // [rsp+B0h] [rbp-50h] BYREF
	__int128 v38; // [rsp+D0h] [rbp-30h]
	__int128 v39; // [rsp+E0h] [rbp-20h]
	char v40[16]; // [rsp+F0h] [rbp-10h] BYREF
	unsigned int v42; // [rsp+150h] [rbp+50h] BYREF
	__int64 v43; // [rsp+158h] [rbp+58h]

	v42 = a3;
	v3 = a3;
	result = (unsigned int*)sub_14023D840(a2);
	v5 = result;
	if (result)
	{
		result = (unsigned int*)sub_1403D90D0(qword_140C65898, v3);
		v6 = result;
		if (result)
		{
			v7 = v5 + 1;
			v43 = 36i64;
			do
			{
				result = (unsigned int*)qword_140C63840;
				v8 = *v7;
				if (qword_140C63840)
				{
					result = (unsigned int*)qword_140C63840(off_140A6D658, v8, qword_140C63858);
				}
				else
				{
					if (dword_140C64C94)
						goto LABEL_17;
					result = (unsigned int*)sub_14023D1A0();
					if ((int)result < 0)
						goto LABEL_17;
					result = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64FE8 + 24i64))(
						qword_140C64FE8,
						v8);
				}
				v9 = result;
				if (result)
				{
					result = (unsigned int*)sub_140248F00(result[4]);
					v10 = result;
					if (result)
					{
						v34 = sub_140248F00(v9[5]);
						v12 = ((dword_140C8AF30 + 1) & 0x3FFFFFFF) == 0;
						v13 = (dword_140C8AF30 + 1) & 0x3FFFFFFF;
						v35 = 0i64;
						v29 = 0i64;
						v30 = 0i64;
						v31 = 0i64;
						v32 = 0i64;
						dword_140C8AF30 = v13;
						v33 = 0;
						if (v12 || v13 == 0x3FFFFFFF)
						{
							v13 = 1;
							dword_140C8AF30 = 1;
						}
						v14 = v9[5];
						v15 = v13 | 0x80000000;
						HIDWORD(v29) = v3;
						v16 = *v10;
						LODWORD(v29) = v15;
						HIDWORD(v31) = 0;
						v30 = __PAIR64__(v14, v16);
						if (*((_QWORD*)v6 + 733))
						{
							v17 = v10[37];
							if (!(_DWORD)v17
								|| (*(unsigned int(__fastcall**)(__int64, unsigned int*, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
									qword_140C659A0,
									v6,
									v17,
									0i64,
									0i64,
									0))
							{
								v24 = v6[1144];
								v25 = (__m128)v9[28];
								v26 = (__m128)v9[27];
								v3 = v42;
								v37 = ymmword_140C78390;
								v39 = xmmword_140C783C0;
								LODWORD(v39) = v24;
								DWORD1(v39) = v6[1145];
								v27 = v6[1146];
								v38 = xmmword_140C783B0;
								v28 = (__m128)v9[29];
								DWORD2(v39) = v27;
								v36 = _mm_unpacklo_ps(_mm_unpacklo_ps(v26, v28), _mm_unpacklo_ps(v25, (__m128)0i64));
								result = (unsigned int*)sub_1405787D0(
									(__int64)&v36,
									v15,
									v42,
									v11,
									(__int64)v10,
									v34,
									(__int128*)&v37,
									0,
									(_QWORD*)v6 + 177,
									(__int128*)&v36,
									0);
								goto LABEL_17;
							}
							result = (unsigned int*)sub_14018B280(88i64, 0);
							v18 = result;
							if (result)
							{
								v19 = v32;
								v20 = HIDWORD(v32);
								*(_QWORD*)result = off_140B6CC98;
								v21 = v42;
								*((_QWORD*)v18 + 1) = 0i64;
								*((_QWORD*)v18 + 2) = 0i64;
								*((_QWORD*)v18 + 3) = 0i64;
								*((_QWORD*)v18 + 4) = 0i64;
								v18[11] = v21;
								result = v35;
								v18[10] = v15;
								v18[12] = v16;
								v18[13] = v14;
								*((_QWORD*)v18 + 7) = (unsigned int)result;
								v18[16] = v19;
								v22 = v33;
								v18[17] = v20;
								v18[18] = v22;
								v18[19] = 0;
								*((_QWORD*)v18 + 10) = 0i64;
							}
							else
							{
								v18 = 0i64;
							}
							v23 = (unsigned int**)(a1 + 8);
							if (!*((_QWORD*)v18 + 3))
							{
								v3 = v42;
								*((_QWORD*)v18 + 3) = v23;
								*((_QWORD*)v18 + 4) = *v23;
								*v23 = v18;
								result = (unsigned int*)*((_QWORD*)v18 + 4);
								if (result)
									*((_QWORD*)result + 3) = v18 + 8;
								goto LABEL_17;
							}
						}
						else
						{
							sub_140579AC0((__int64*)v6 + 179, (int*)&v29);
							result = (unsigned int*)sub_1400293C0(a1 + 16, (__int64)v40, (int*)&v42);
						}
						v3 = v42;
					}
				}
			LABEL_17:
				++v7;
				--v43;
			} while (v43);
		}
	}
	return result;
}
// 140579296: variable 'v11' is possibly undefined
// 140A6D658: using guessed type wchar_t *off_140A6D658[2];
// 140B6CC98: using guessed type __int64 (__fastcall *off_140B6CC98[4])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64C94: using guessed type int dword_140C64C94;
// 140C64FE8: using guessed type __int64 qword_140C64FE8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C8AF30: using guessed type int dword_140C8AF30;
// 140578F30: using guessed type char var_40[16];

