#include "../winhttp.h"

//----- (00000001407A8A20) ----------------------------------------------------
void __fastcall sub_1407A8A20(__int64 a1)
{
	unsigned int v2; // eax
	unsigned int v3; // edi
	unsigned int v4; // r13d
	__int64* v5; // rsi
	int v6; // r9d
	int v7; // r15d
	unsigned int v8; // ebx
	__int64 v9; // rax
	__int64 v10; // rdi
	unsigned __int64 v11; // rdx
	unsigned __int64 v12; // rcx
	_DWORD* v13; // rax
	int* v14; // rax
	int* v15; // rcx
	__int64 v16; // rbx
	unsigned __int64 v17; // rcx
	unsigned __int64 v18; // r8
	__int64 v19; // rdx
	_WORD* v20; // rcx
	unsigned __int64 v21; // r8
	__int16 v22; // ax
	__int16* v23; // rax
	__int64 v24; // r8
	char* v25; // rdx
	signed __int64 v26; // r9
	__int16 v27; // ax
	_DWORD* v28; // rcx
	int* v29; // rax
	int* v30; // rcx
	int* v31; // rdx
	int* v32; // rcx
	__int64 v33; // rax
	__int128 v34; // xmm0
	int* v35; // rax
	int* v36; // rcx
	int* v37; // rcx
	int* v38; // rdx
	__int64 v39; // rax
	__int128 v40; // xmm0
	unsigned __int64 v41; // rbx
	int* v42; // rax
	int* v43; // rdi
	int* v44; // rax
	int* v45; // rdx
	int* v46; // rdi
	__int64 v47; // rcx
	int* v48; // rax
	int* v49; // rdx
	int* v50; // rdi
	__int64 v51; // rcx
	int v52; // [rsp+60h] [rbp+8h]
	unsigned int v53; // [rsp+68h] [rbp+10h]
	unsigned int v54; // [rsp+70h] [rbp+18h]

	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6AB08, qword_140C63858);
	}
	else
	{
		if (dword_140C64954)
		{
			v3 = 0;
			goto LABEL_9;
		}
		if ((int)sub_1402087C0() < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64350 + 40i64))(qword_140C64350);
	}
	v3 = v2;
LABEL_9:
	v4 = *(_DWORD*)(a1 + 144);
	v5 = (__int64*)(a1 + 136);
	v53 = v3;
	v54 = v4;
	sub_14004EED0((__int64*)(a1 + 136), v3 + v4);
	sub_14004EED0((__int64*)(a1 + 104), v3 + v4);
	sub_14004EED0((__int64*)(a1 + 120), v3 + v4);
	*(_DWORD*)(a1 + 152) = 0;
	v6 = 0;
	v52 = 0;
	v7 = 0;
	if (v3)
	{
		while (1)
		{
			v8 = v7 + v6;
			if (qword_140C63848)
				break;
			if (!dword_140C64954)
			{
				if ((int)sub_1402087C0() < 0)
				{
					v10 = 0i64;
				LABEL_18:
					v6 = v52;
					goto LABEL_19;
				}
				v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64350 + 32i64))(qword_140C64350, v8);
			LABEL_17:
				v10 = v9;
				goto LABEL_18;
			}
			v10 = 0i64;
		LABEL_19:
			v11 = *(_QWORD*)(a1 + 436152);
			v12 = 0i64;
			if (v11)
			{
				v13 = *(_DWORD**)(a1 + 436144);
				while (*v13 != *(_DWORD*)v10)
				{
					++v12;
					++v13;
					if (v12 >= v11)
						goto LABEL_23;
				}
				++v6;
				--v7;
				--v4;
				v52 = v6;
			}
			else
			{
			LABEL_23:
				v14 = sub_14018B280(392i64, 0);
				v15 = v14;
				if (v14)
					v14[36] = 1;
				else
					v15 = 0i64;
				v16 = 8i64 * v4;
				*(_QWORD*)(v16 + *v5) = v15;
				v17 = *(_QWORD*)(v10 + 8);
				if (v17)
				{
					if (v17 <= qword_140C3FE70)
						v18 = v17 + qword_140C3FE68;
					else
						v18 = 0i64;
				}
				else
				{
					v18 = 0i64;
				}
				v19 = 32i64;
				v20 = (_WORD*)(*(_QWORD*)(v16 + *v5) + 68i64);
				v21 = v18 - (_QWORD)v20;
				while (v19 != -2147483614)
				{
					v22 = *(_WORD*)((char*)v20 + v21);
					if (!v22)
						break;
					*v20++ = v22;
					if (!--v19)
					{
						--v20;
						break;
					}
				}
				*v20 = 0;
				v23 = sub_14034BDD0((__int64)v20, *(_DWORD*)(v10 + 16));
				v24 = 32i64;
				v25 = (char*)(*(_QWORD*)(v16 + *v5) + 4i64);
				v26 = (char*)v23 - v25;
				while (v24 != -2147483614)
				{
					v27 = *(_WORD*)&v25[v26];
					if (!v27)
						break;
					*(_WORD*)v25 = v27;
					v25 += 2;
					if (!--v24)
					{
						v25 -= 2;
						break;
					}
				}
				*(_WORD*)v25 = 0;
				**(_DWORD**)(v16 + *v5) = *(_DWORD*)v10;
				*(_DWORD*)(*(_QWORD*)(v16 + *v5) + 132i64) = *(_DWORD*)(v10 + 20);
				*(_DWORD*)(*(_QWORD*)(v16 + *v5) + 136i64) = *(_DWORD*)(v10 + 24);
				*(_DWORD*)(*(_QWORD*)(v16 + *v5) + 148i64) = *(_DWORD*)(v10 + 28);
				*(_DWORD*)(*(_QWORD*)(v16 + *v5) + 144i64) = 1;
				*(_DWORD*)(*(_QWORD*)(v16 + *v5) + 152i64) = 0;
				v28 = *(_DWORD**)(v16 + *v5);
				if ((unsigned int)(*v28 - 200) <= 3)
					v28[38] = 1;
				if (((*(_DWORD*)(v10 + 20) - 1) & 0xFFFFFFF7) != 0)
					++* (_DWORD*)(a1 + 152);
				sub_1407E4830((int*)(*(_QWORD*)(v16 + *v5) + 156i64), 0i64, 0xE0ui64);
				*(_DWORD*)(*(_QWORD*)(v16 + *v5) + 380i64) = 0;
				*(_DWORD*)(*(_QWORD*)(v16 + *v5) + 384i64) = 0;
				*(_DWORD*)(*(_QWORD*)(v16 + *v5) + 388i64) = 0;
				v29 = sub_14018B280(392i64, 0);
				v30 = v29;
				if (v29)
					v29[36] = 1;
				else
					v30 = 0i64;
				*(_QWORD*)(v16 + *(_QWORD*)(a1 + 104)) = v30;
				v31 = *(int**)(v16 + *v5);
				v32 = *(int**)(v16 + *(_QWORD*)(a1 + 104));
				if ((((unsigned __int8)v32 | (unsigned __int8)v31) & 0xF) != 0)
				{
					sub_1407DB590(v32, v31, 0x188ui64);
				}
				else
				{
					v33 = 3i64;
					do
					{
						v34 = *(_OWORD*)v31;
						v32 += 32;
						v31 += 32;
						*((_OWORD*)v32 - 8) = v34;
						*((_OWORD*)v32 - 7) = *((_OWORD*)v31 - 7);
						*((_OWORD*)v32 - 6) = *((_OWORD*)v31 - 6);
						*((_OWORD*)v32 - 5) = *((_OWORD*)v31 - 5);
						*((_OWORD*)v32 - 4) = *((_OWORD*)v31 - 4);
						*((_OWORD*)v32 - 3) = *((_OWORD*)v31 - 3);
						*((_OWORD*)v32 - 2) = *((_OWORD*)v31 - 2);
						*((_OWORD*)v32 - 1) = *((_OWORD*)v31 - 1);
						--v33;
					} while (v33);
					*(_QWORD*)v32 = *(_QWORD*)v31;
				}
				sub_1407E4830((int*)(*(_QWORD*)(*(_QWORD*)(a1 + 104) + 8i64 * v4) + 156i64), 0i64, 0xE0ui64);
				v35 = sub_14018B280(392i64, 0);
				v36 = v35;
				if (v35)
					v35[36] = 1;
				else
					v36 = 0i64;
				*(_QWORD*)(v16 + *(_QWORD*)(a1 + 120)) = v36;
				v37 = *(int**)(v16 + *(_QWORD*)(a1 + 120));
				v38 = *(int**)(v16 + *v5);
				if ((((unsigned __int8)v37 | (unsigned __int8)v38) & 0xF) != 0)
				{
					sub_1407DB590(v37, v38, 0x188ui64);
				}
				else
				{
					v39 = 3i64;
					do
					{
						v40 = *(_OWORD*)v38;
						v37 += 32;
						v38 += 32;
						*((_OWORD*)v37 - 8) = v40;
						*((_OWORD*)v37 - 7) = *((_OWORD*)v38 - 7);
						*((_OWORD*)v37 - 6) = *((_OWORD*)v38 - 6);
						*((_OWORD*)v37 - 5) = *((_OWORD*)v38 - 5);
						*((_OWORD*)v37 - 4) = *((_OWORD*)v38 - 4);
						*((_OWORD*)v37 - 3) = *((_OWORD*)v38 - 3);
						*((_OWORD*)v37 - 2) = *((_OWORD*)v38 - 2);
						*((_OWORD*)v37 - 1) = *((_OWORD*)v38 - 1);
						--v39;
					} while (v39);
					*(_QWORD*)v37 = *(_QWORD*)v38;
				}
				sub_1407E4830((int*)(*(_QWORD*)(*(_QWORD*)(a1 + 120) + 8i64 * v4) + 156i64), 0i64, 0xE0ui64);
				v6 = v52;
			}
			v3 = v53;
			++v7;
			++v4;
			if (v7 + v6 >= v53)
			{
				v4 = v54;
				goto LABEL_65;
			}
		}
		v9 = qword_140C63848(off_140A6AB08, v8, qword_140C63858);
		goto LABEL_17;
	}
LABEL_65:
	v41 = v3 + v4 - v6;
	if (*(_QWORD*)(a1 + 144) <= v41)
	{
		v42 = sub_14018DB00(*v5, (unsigned int)v41, 8i64);
		v43 = v42;
		if ((int*)*v5 != v42)
		{
			sub_1407DB590(v42, (int*)*v5, 8i64 * *(_QWORD*)(a1 + 144));
			if (*v5)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v5 - 16) + 8i64))(*v5 - 16);
			*v5 = (__int64)v43;
		}
	}
	*(_QWORD*)(a1 + 144) = v41;
	if (*(_QWORD*)(a1 + 112) <= v41)
	{
		v44 = sub_14018DB00(*(_QWORD*)(a1 + 104), v41, 8i64);
		v45 = *(int**)(a1 + 104);
		v46 = v44;
		if (v45 != v44)
		{
			sub_1407DB590(v44, v45, 8i64 * *(_QWORD*)(a1 + 112));
			v47 = *(_QWORD*)(a1 + 104);
			if (v47)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v47 - 16) + 8i64))(v47 - 16);
			*(_QWORD*)(a1 + 104) = v46;
		}
	}
	*(_QWORD*)(a1 + 112) = v41;
	if (*(_QWORD*)(a1 + 128) <= v41)
	{
		v48 = sub_14018DB00(*(_QWORD*)(a1 + 120), v41, 8i64);
		v49 = *(int**)(a1 + 120);
		v50 = v48;
		if (v49 != v48)
		{
			sub_1407DB590(v48, v49, 8i64 * *(_QWORD*)(a1 + 128));
			v51 = *(_QWORD*)(a1 + 120);
			if (v51)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v51 - 16) + 8i64))(v51 - 16);
			*(_QWORD*)(a1 + 120) = v50;
		}
	}
	*(_QWORD*)(a1 + 128) = v41;
}
// 1407A8C17: conditional instruction was optimized away because rdx.8!=0
// 1407A8C67: conditional instruction was optimized away because r8.8!=0
// 140A6AB08: using guessed type wchar_t *off_140A6AB08[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64350: using guessed type __int64 qword_140C64350;
// 140C64954: using guessed type int dword_140C64954;

