#include "../winhttp.h"

//----- (000000014044D450) ----------------------------------------------------
void __fastcall sub_14044D450(_QWORD* a1)
{
	unsigned __int64 v2; // rdx
	unsigned __int64 v3; // r14
	__int64 v4; // rcx
	bool v5; // zf
	__int64 v6; // r12
	__int64 v7; // rcx
	__int64 v8; // r15
	__int64 v9; // rdi
	__int64 v10; // rsi
	__int64 v11; // rax
	unsigned int v12; // ecx
	__int64 v13; // rax
	int* v14; // rbx
	int* v15; // rcx
	unsigned int v16; // edi
	__int64 v17; // r11
	__int64 v18; // r11
	unsigned int v19; // r10d
	unsigned __int64 v20; // r8
	unsigned __int64 v21; // rdx
	unsigned __int64 v22; // rcx
	unsigned int* v23; // rax
	int* v24; // rax
	unsigned __int64 v25; // r9
	__int64 v26; // rcx
	__int64 v27; // rdx
	int* v28; // r8
	__int64 v29; // rcx
	__int64 i; // rcx
	__int64 j; // rcx
	__int64 v32; // rdi
	__int64 v33; // rbx
	char v34[8]; // [rsp+20h] [rbp-29h] BYREF
	int* v35; // [rsp+28h] [rbp-21h]
	__int64 v36; // [rsp+30h] [rbp-19h]
	unsigned __int64 v37; // [rsp+40h] [rbp-9h]
	__int64 v38; // [rsp+48h] [rbp-1h]
	__int64 v39; // [rsp+68h] [rbp+1Fh]

	v35 = sub_14018B280(64i64, 0);
	v36 = 0i64;
	*(_BYTE*)v35 = 0;
	v2 = 0i64;
	v37 = 0i64;
	*((_QWORD*)v35 + 1) = 0i64;
	*((_QWORD*)v35 + 2) = v35;
	for (*((_QWORD*)v35 + 3) = v35; v2 < a1[12]; v37 = v2)
	{
		v3 = 0i64;
		v4 = *(_QWORD*)(a1[11] + 8 * v2);
		v5 = *(_QWORD*)(v4 + 72) == 0i64;
		LODWORD(v39) = *(_DWORD*)v4;
		if (!v5)
		{
			v6 = v39;
			do
			{
				v7 = *(_QWORD*)(*(_QWORD*)(v4 + 64) + 8 * v3);
				v8 = *(_QWORD*)(v7 + 16);
				if (v8)
				{
					v9 = 0i64;
					v10 = *(_QWORD*)(v7 + 16);
					do
					{
						v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[11] + 8 * v2) + 64i64) + 8 * v3) + 8i64);
						if (!*(_DWORD*)(v11 + v9))
						{
							v12 = *(_DWORD*)(v11 + v9 + 4);
							v13 = *((_QWORD*)v35 + 1);
							LODWORD(v38) = v12;
							v14 = v35;
							if (!v13)
								goto LABEL_18;
							do
							{
								v14 = (int*)v13;
								if (v12 >= *(_DWORD*)(v13 + 32))
									v13 = *(_QWORD*)(v13 + 24);
								else
									v13 = *(_QWORD*)(v13 + 16);
							} while (v13);
							if (v14 == v35 || v12 < v14[8])
							{
							LABEL_18:
								v15 = sub_14018B280(64i64, 0);
								if (v15 != (int*)-32i64)
								{
									*((_QWORD*)v15 + 4) = v38;
									*((_QWORD*)v15 + 5) = v6;
									*((_QWORD*)v15 + 6) = v3;
									*((_QWORD*)v15 + 7) = v8;
								}
								*((_QWORD*)v14 + 2) = v15;
								if (v14 == v35)
								{
									*((_QWORD*)v35 + 1) = v15;
									*((_QWORD*)v35 + 3) = v15;
								}
								else if (v14 == *((int**)v35 + 2))
								{
									*((_QWORD*)v35 + 2) = v15;
								}
							}
							else
							{
								v15 = sub_14018B280(64i64, 0);
								if (v15 != (int*)-32i64)
								{
									*((_QWORD*)v15 + 4) = v38;
									*((_QWORD*)v15 + 5) = v6;
									*((_QWORD*)v15 + 6) = v3;
									*((_QWORD*)v15 + 7) = v8;
								}
								*((_QWORD*)v14 + 3) = v15;
								if (v14 == *((int**)v35 + 3))
									*((_QWORD*)v35 + 3) = v15;
							}
							*((_QWORD*)v15 + 1) = v14;
							*((_QWORD*)v15 + 2) = 0i64;
							*((_QWORD*)v15 + 3) = 0i64;
							sub_1400081C0((__int64)v15, (_QWORD*)v35 + 1);
							++v36;
							v2 = v37;
						}
						v9 += 16i64;
						--v10;
					} while (v10);
				}
				++v3;
				v4 = *(_QWORD*)(a1[11] + 8 * v2);
			} while (v3 < *(_QWORD*)(v4 + 72));
		}
		++v2;
	}
	v16 = 0;
	if (a1[16])
	{
		v17 = 0i64;
		do
		{
			v18 = a1[15] + 32 * v17;
			v19 = *(_DWORD*)(v18 + 4);
			*(_DWORD*)(v18 + 12) = 0;
			*(_QWORD*)(v18 + 16) = 0i64;
			*(_DWORD*)(v18 + 24) = 0;
			if (v19)
			{
				v20 = a1[10];
				v21 = 0i64;
				if (!v20)
					goto LABEL_62;
				while (1)
				{
					v22 = v21 + ((v20 - v21) >> 1);
					v23 = *(unsigned int**)(a1[9] + 8 * v22);
					if (v19 < *v23)
					{
						v20 = v21 + ((v20 - v21) >> 1);
					}
					else
					{
						if (v19 <= *v23)
						{
							if (v23)
								*(_DWORD*)(v18 + 24) = 1;
							goto LABEL_62;
						}
						v21 = v22 + 1;
					}
					if (v21 >= v20)
						goto LABEL_62;
				}
			}
			v24 = v35;
			v25 = -1i64;
			v26 = *((_QWORD*)v35 + 1);
			v27 = v26;
			while (v27)
			{
				if (*(_DWORD*)(v27 + 32) < *(_DWORD*)(v18 + 8))
				{
					v27 = *(_QWORD*)(v27 + 24);
				}
				else
				{
					v24 = (int*)v27;
					v27 = *(_QWORD*)(v27 + 16);
				}
			}
			v28 = v35;
			while (v26)
			{
				if (*(_DWORD*)(v18 + 8) >= *(_DWORD*)(v26 + 32))
				{
					v26 = *(_QWORD*)(v26 + 24);
				}
				else
				{
					v28 = (int*)v26;
					v26 = *(_QWORD*)(v26 + 16);
				}
			}
			while (v24 != v28)
			{
				if (*((_QWORD*)v24 + 7) < v25)
				{
					*(_DWORD*)(v18 + 12) = v24[10];
					*(_QWORD*)(v18 + 16) = *((_QWORD*)v24 + 6);
					v25 = *((_QWORD*)v24 + 7);
				}
				v29 = *((_QWORD*)v24 + 3);
				if (v29)
				{
					v24 = (int*)*((_QWORD*)v24 + 3);
					for (i = *(_QWORD*)(v29 + 16); i; i = *(_QWORD*)(i + 16))
						v24 = (int*)i;
				}
				else
				{
					for (j = *((_QWORD*)v24 + 1); v24 == *(int**)(j + 24); j = *(_QWORD*)(j + 8))
						v24 = (int*)j;
					if (*((_QWORD*)v24 + 3) != j)
						v24 = (int*)j;
				}
			}
		LABEL_62:
			v17 = ++v16;
		} while ((unsigned __int64)v16 < a1[16]);
	}
	if (v36)
	{
		v32 = *((_QWORD*)v35 + 1);
		if (v32)
		{
			do
			{
				sub_1400083B0((__int64)v34, *(_QWORD*)(v32 + 24));
				v33 = *(_QWORD*)(v32 + 16);
				sub_14018B900(v32, 0);
				v32 = v33;
			} while (v33);
		}
		*((_QWORD*)v35 + 2) = v35;
		*((_QWORD*)v35 + 1) = 0i64;
		*((_QWORD*)v35 + 3) = v35;
		v36 = 0i64;
	}
	sub_14018B900((__int64)v35, 0);
}
// 14044D450: using guessed type char var_80[8];

