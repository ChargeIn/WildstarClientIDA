#include "../winhttp.h"

//----- (00000001401C2970) ----------------------------------------------------
__int64 __fastcall sub_1401C2970(
	__int64 a1,
	_DWORD* a2,
	void(__fastcall** a3)(__int64, unsigned __int64, __int64),
	__int64 a4)
{
	int v4; // r14d
	__int64 v5; // r13
	unsigned __int64 v6; // rcx
	_DWORD* v7; // r15
	unsigned __int64 v9; // rdx
	unsigned __int64 v10; // rdi
	__int64 v11; // r8
	__m128i v12; // xmm1
	__int64 v13; // rax
	__m128i v14; // xmm0
	__m128i v15; // xmm0
	__int64 v16; // rax
	unsigned __int64 v17; // rcx
	__int64 result; // rax
	int* v19; // rsi
	unsigned __int64 v20; // r12
	__int64 v21; // rcx
	char* v22; // rdi
	unsigned __int64 v23; // r12
	__int16 v24; // bx
	__int64 v25; // r15
	int v26; // edi
	__int64 v27; // rdi
	bool v28; // zf
	int v29; // eax
	int v30; // edi
	__int64 v31; // rdx
	char* v32; // r8
	char v33; // al
	char v34; // cl
	unsigned int v35; // eax
	__int64 v36; // rdx
	__int64 v37; // [rsp+30h] [rbp-D0h]
	unsigned __int64 v38; // [rsp+38h] [rbp-C8h]
	__int64 v40; // [rsp+48h] [rbp-B8h]
	char* v41; // [rsp+50h] [rbp-B0h]
	__int64 v45; // [rsp+70h] [rbp-90h] BYREF
	int v46[5]; // [rsp+80h] [rbp-80h] BYREF
	__int64 v47; // [rsp+94h] [rbp-6Ch]
	__int16 v48; // [rsp+9Ch] [rbp-64h]
	char v49[66]; // [rsp+9Eh] [rbp-62h] BYREF
	__int64 v50; // [rsp+E0h] [rbp-20h]
	char v51[24]; // [rsp+F0h] [rbp-10h] BYREF

	v4 = 0;
	v5 = a1;
	v6 = *(_QWORD*)(a1 + 64);
	v7 = a2;
	v9 = 0i64;
	v10 = 0i64;
	if (v6)
	{
		if (v6 >= 2)
		{
			v11 = *(_QWORD*)(v5 + 56);
			v12 = 0i64;
			v13 = 0i64;
			do
			{
				v14.m128i_i64[0] = *(_QWORD*)(v13 + v11 + 24);
				v14.m128i_i64[1] = *(__int64*)(v13 + v11 + 56);
				v10 += 2i64;
				v13 += 64i64;
				v15 = _mm_add_epi64(v14, v12);
				v12 = v15;
			} while (v10 < v6 - (v6 & 1));
			v9 = _mm_add_epi64(v15, _mm_srli_si128(v15, 8)).m128i_u64[0];
		}
		if (v10 < v6)
		{
			v16 = 32 * v10;
			v17 = v6 - v10;
			do
			{
				v9 += *(_QWORD*)(v16 + *(_QWORD*)(v5 + 56) + 24);
				v16 += 32i64;
				--v17;
			} while (v17);
		}
	}
	if (a3 && *a3)
		(*a3)(0i64, v9, a4);
	if ((*(_BYTE*)(v5 + 16) & 2) == 0)
		return 2147942405i64;
	result = (*(__int64(__fastcall**)(_QWORD, _DWORD*, _QWORD))(**(_QWORD**)(v5 + 8) + 152i64))(
		*(_QWORD*)(v5 + 8),
		v7,
		a3);
	if ((int)result >= 0)
	{
		v19 = sub_14018B280(0x100000i64, 1u);
		v37 = (__int64)v19;
		if (!v19)
			return 2147942414i64;
		v38 = 0i64;
		v20 = 0i64;
		if (*(_QWORD*)(v5 + 64))
		{
			v21 = 0i64;
			v40 = 0i64;
			while (1)
			{
				v22 = (char*)(v21 + *(_QWORD*)(v5 + 56));
				v41 = v22;
				if ((*(int(__fastcall**)(_QWORD, _QWORD, __int64*))(**(_QWORD**)(v5 + 8) + 64i64))(
					*(_QWORD*)(v5 + 8),
					*(unsigned int*)v22,
					&v45) < 0)
					goto LABEL_53;
				v23 = *((_QWORD*)v22 + 3);
				if (v45 != v23)
					break;
				v24 = 0;
				v47 = 0i64;
				v46[0] = 1732584193;
				v46[1] = -271733879;
				v46[2] = -1732584194;
				v46[3] = 271733878;
				v48 = 0;
				v46[4] = -1009589776;
				v50 = 0i64;
				if (v23)
				{
					do
					{
						if (!*v7)
						{
							v26 = 1;
							goto LABEL_56;
						}
						v25 = v23;
						if (v23 > 0x100000)
							v25 = 0x100000i64;
						v26 = (*(__int64(__fastcall**)(_QWORD, _QWORD, unsigned __int64, int*, __int64))(**(_QWORD**)(v5 + 8)
							+ 88i64))(
								*(_QWORD*)(v5 + 8),
								*(unsigned int*)v22,
								*((_QWORD*)v22 + 3) - v23,
								v19,
								v25);
						if (v26 < 0)
							goto LABEL_56;
						v27 = v25;
						if (v4 || HIDWORD(v50))
							goto LABEL_58;
						do
						{
							--v27;
							if (HIDWORD(v50))
								break;
							v49[v24] = *(_BYTE*)v19;
							v24 = v48 + 1;
							v28 = (_DWORD)v47 == -8;
							LODWORD(v47) = v47 + 8;
							++v48;
							if (v28)
							{
								v29 = HIDWORD(v50);
								if (!++HIDWORD(v47))
									v29 = 1;
								HIDWORD(v50) = v29;
							}
							if (v24 == 64)
							{
								sub_1401C8CE0(v46);
								v24 = v48;
							}
							v19 = (int*)((char*)v19 + 1);
						} while (v27);
						v4 = v50;
						v5 = a1;
						v23 -= v25;
						if (a3 && *a3)
							(*a3)(v25, 0i64, a4);
						v22 = v41;
						v19 = (int*)v37;
						v7 = a2;
					} while (v23);
					if (HIDWORD(v50))
					{
					LABEL_58:
						v26 = -2147467259;
						goto LABEL_56;
					}
					if (!v4)
						goto LABEL_42;
					v4 = 0;
				}
				else
				{
				LABEL_42:
					sub_1401C8F20((__int64)v46);
					v4 = 0;
					memset(v49, 0, 0x40ui64);
					v47 = 0i64;
					LODWORD(v50) = 1;
				}
				v30 = 0;
				v31 = 0i64;
				v32 = v51;
				do
				{
					v33 = v30++;
					++v32;
					v34 = 3 - (v33 & 3);
					v35 = v46[v31 >> 2];
					v31 = v30;
					*(v32 - 1) = v35 >> (8 * v34);
				} while ((unsigned __int64)v30 < 0x14);
				v36 = 0i64;
				while (v51[v36] == v51[v36 + 4 + v41 - v51])
				{
					if ((unsigned __int64)++v36 >= 0x14)
					{
						v19 = (int*)v37;
						v7 = a2;
						v20 = v38;
						goto LABEL_54;
					}
				}
				v26 = (*(__int64(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v5 + 40i64))(v5, (unsigned int*)v41 + 1);
				if (v26 < 0)
					goto LABEL_56;
				v19 = (int*)v37;
				v7 = a2;
				v20 = v38;
			LABEL_54:
				++v20;
				v21 = v40 + 32;
				v38 = v20;
				v40 += 32i64;
				if (v20 >= *(_QWORD*)(v5 + 64))
					goto LABEL_55;
			}
			v20 = v38;
		LABEL_53:
			v26 = (*(__int64(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v5 + 40i64))(v5, (unsigned int*)v22 + 1);
			if (v26 < 0)
				goto LABEL_56;
			goto LABEL_54;
		}
	LABEL_55:
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 72i64))(v5);
		v26 = 0;
	LABEL_56:
		sub_14018B900(v37, 0);
		return (unsigned int)v26;
	}
	return result;
}
// 1401C2BA4: conditional instruction was optimized away because r15.8!=0
// 1401C2970: using guessed type char var_B2[66];
// 1401C2970: using guessed type char var_60[24];

