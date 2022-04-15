//----- (0000000140485490) ----------------------------------------------------
unsigned __int64 __fastcall sub_140485490(__int64 a1, _QWORD* a2, unsigned int a3)
{
	_DWORD* v5; // rdi
	__int64 v6; // rcx
	unsigned __int64 v7; // rbx
	unsigned int v8; // r8d
	_DWORD* v9; // rcx
	unsigned int v10; // ecx
	_DWORD* v11; // rax
	int* v12; // rax
	int* v13; // rax
	unsigned __int64 v14; // rcx
	_DWORD* v15; // rax
	unsigned __int64 result; // rax
	int* v17; // rax

	v5 = (_DWORD*)sub_1401F6D60(a3);
	sub_1404852B0(v6, (__int64)a2, a3);
	v7 = 0i64;
	v8 = 0;
	v9 = v5 + 15;
	while (!*v9)
	{
		++v8;
		++v9;
		if (v8 >= 4)
		{
			v10 = 0;
			v11 = v5 + 19;
			while (!*v11)
			{
				++v10;
				++v11;
				if (v10 >= 4)
					goto LABEL_9;
			}
			break;
		}
	}
	v12 = sub_14018B280(32i64, 0);
	a2[24] = v12;
	*v12 = v5[15];
	*(_DWORD*)(a2[24] + 16i64) = v5[19];
	*(_DWORD*)(a2[24] + 4i64) = v5[16];
	*(_DWORD*)(a2[24] + 20i64) = v5[20];
	*(_DWORD*)(a2[24] + 8i64) = v5[17];
	*(_DWORD*)(a2[24] + 24i64) = v5[21];
	*(_DWORD*)(a2[24] + 12i64) = v5[18];
	*(_DWORD*)(a2[24] + 28i64) = v5[22];
LABEL_9:
	if (*((float*)v5 + 87) != 0.0 || *((float*)v5 + 88) != 0.0 || *((float*)v5 + 89) != 0.0)
	{
		v13 = sub_14018B280(12i64, 0);
		a2[25] = v13;
		*v13 = v5[87];
		*(_DWORD*)(a2[25] + 4i64) = v5[88];
		*(_DWORD*)(a2[25] + 8i64) = v5[89];
	}
	v14 = 0i64;
	v15 = v5 + 157;
	while (!*v15)
	{
		++v14;
		++v15;
		if (v14 >= 5)
		{
			result = (unsigned __int64)(v5 + 162);
			while (!*(_DWORD*)result)
			{
				++v7;
				result += 4i64;
				if (v7 >= 5)
					return result;
			}
			break;
		}
	}
	v17 = sub_14018B280(40i64, 0);
	a2[26] = v17;
	*v17 = v5[157];
	*(_DWORD*)(a2[26] + 4i64) = v5[158];
	*(_DWORD*)(a2[26] + 8i64) = v5[159];
	*(_DWORD*)(a2[26] + 12i64) = v5[160];
	*(_DWORD*)(a2[26] + 16i64) = v5[161];
	*(_DWORD*)(a2[26] + 20i64) = v5[162];
	*(_DWORD*)(a2[26] + 24i64) = v5[163];
	*(_DWORD*)(a2[26] + 28i64) = v5[164];
	*(_DWORD*)(a2[26] + 32i64) = v5[165];
	result = (unsigned int)v5[166];
	*(_DWORD*)(a2[26] + 36i64) = result;
	return result;
}
// 1404854BC: variable 'v6' is possibly undefined

