//----- (00000001400618B0) ----------------------------------------------------
__int64 __fastcall sub_1400618B0(__int64 a1, char* a2, int a3)
{
	char* v4; // rax
	__int64 v6; // rdi
	char* v7; // rsi
	__int64 v8; // rdi
	int v9; // edx
	int v10; // eax
	int v11; // edx
	char* v12; // r14
	__int64 v13; // rbp
	unsigned __int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rcx
	unsigned __int64 i; // rax
	bool v19; // zf
	int v21; // edx
	int v22; // edx
	__int64 v23; // rdx
	__int64 v24; // rdx
	char* v25; // rcx
	__int64 v26; // rax
	int v27; // eax

	v4 = a2;
	if (*((_DWORD*)a2 + 2) != 6)
		v4 = sub_1400617F0(a1, a2);
	v6 = *(_QWORD*)v4;
	v7 = &v4[-*(_QWORD*)(a1 + 64)];
	*(_QWORD*)(*(_QWORD*)(a1 + 40) + 24i64) = *(_QWORD*)(a1 + 48);
	if (*(_BYTE*)(v6 + 10))
	{
		if ((__int64)(*(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 16)) <= 320)
		{
			v21 = *(_DWORD*)(a1 + 88);
			if (v21 < 20)
				v22 = v21 + 20;
			else
				v22 = 2 * v21;
			sub_140061210(a1, v22);
		}
		v23 = *(_QWORD*)(a1 + 40);
		if (v23 == *(_QWORD*)(a1 + 72))
		{
			v24 = sub_140061370(a1);
		}
		else
		{
			v24 = v23 + 40;
			*(_QWORD*)(a1 + 40) = v24;
		}
		v25 = &v7[*(_QWORD*)(a1 + 64)];
		*(_QWORD*)(v24 + 8) = v25;
		v25 += 16;
		*(_QWORD*)v24 = v25;
		v26 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)(a1 + 24) = v25;
		*(_DWORD*)(v24 + 32) = a3;
		*(_QWORD*)(v24 + 16) = v26 + 320;
		if ((*(_BYTE*)(a1 + 100) & 1) != 0)
			sub_1400613E0(a1, 0, -1);
		v27 = (*(__int64(__fastcall**)(__int64))(**(_QWORD**)(*(_QWORD*)(a1 + 40) + 8i64) + 32i64))(a1);
		if (v27 >= 0)
		{
			sub_140061C90(a1, *(_QWORD*)(a1 + 16) - 16i64 * v27);
			return 1i64;
		}
		else
		{
			return 2i64;
		}
	}
	else
	{
		v8 = *(_QWORD*)(v6 + 32);
		v9 = *(unsigned __int8*)(v8 + 115);
		if (*(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 16) <= 16 * v9)
		{
			v10 = *(_DWORD*)(a1 + 88);
			if (v9 > v10)
				v11 = v10 + v9;
			else
				v11 = 2 * v10;
			sub_140061210(a1, v11);
		}
		v12 = &v7[*(_QWORD*)(a1 + 64)];
		if (*(_BYTE*)(v8 + 114))
		{
			v15 = sub_140061510(a1, v8, (unsigned int)((__int64)(*(_QWORD*)(a1 + 16) - (_QWORD)v12) >> 4) - 1);
			v12 = &v7[*(_QWORD*)(a1 + 64)];
			v13 = v15;
		}
		else
		{
			v13 = (__int64)(v12 + 16);
			v14 = (unsigned __int64)&v12[16 * *(unsigned __int8*)(v8 + 113) + 16];
			if (*(_QWORD*)(a1 + 16) > v14)
				*(_QWORD*)(a1 + 16) = v14;
		}
		v16 = *(_QWORD*)(a1 + 40);
		if (v16 == *(_QWORD*)(a1 + 72))
		{
			v17 = sub_140061370(a1);
		}
		else
		{
			v17 = v16 + 40;
			*(_QWORD*)(a1 + 40) = v17;
		}
		*(_QWORD*)(v17 + 8) = v12;
		*(_QWORD*)v17 = v13;
		*(_QWORD*)(a1 + 24) = v13;
		*(_QWORD*)(v17 + 16) = v13 + 16i64 * *(unsigned __int8*)(v8 + 115);
		*(_QWORD*)(a1 + 48) = *(_QWORD*)(v8 + 24);
		*(_DWORD*)(v17 + 36) = 0;
		*(_DWORD*)(v17 + 32) = a3;
		for (i = *(_QWORD*)(a1 + 16); i < *(_QWORD*)(v17 + 16); i += 16i64)
			*(_DWORD*)(i + 8) = 0;
		v19 = (*(_BYTE*)(a1 + 100) & 1) == 0;
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(v17 + 16);
		if (!v19)
		{
			*(_QWORD*)(a1 + 48) += 4i64;
			sub_1400613E0(a1, 0, -1);
			*(_QWORD*)(a1 + 48) -= 4i64;
		}
		return 0i64;
	}
}

