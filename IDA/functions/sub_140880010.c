//----- (0000000140880010) ----------------------------------------------------
double __fastcall sub_140880010(__int64 a1, unsigned int a2)
{
	__int64 v2; // r14
	unsigned int v5; // edi
	__int64 v6; // r10
	unsigned int v7; // r9d
	unsigned int v8; // edx
	unsigned int v9; // ebx
	unsigned __int16 v10; // si
	unsigned int* v11; // r11
	unsigned int v12; // r9d
	int* v13; // rcx
	unsigned int v14; // r8d
	__int64 v15; // xmm0_8
	double result; // xmm0_8

	v2 = *(_QWORD*)(a1 + 16);
	if (!v2)
		return 0.0;
	v5 = *(_DWORD*)(v2 + 4);
	if (!v5)
		return 0.0;
	v6 = *(unsigned int*)(a1 + 80);
	v7 = *(_DWORD*)(a1 + 44);
	v8 = v6 + 1;
	v9 = *(_DWORD*)(v2 + 6 * (v6 + 2));
	v10 = *(_WORD*)(v2 + 6 * (v6 + 2) + 4);
	v11 = (unsigned int*)(v2 + 6 * (v6 + 2));
	if (a2 > v7)
		v12 = 0;
	else
		v12 = v7 - a2;
	while (v8 >= v5)
	{
	LABEL_11:
		if (v12 >= *v11)
		{
			*(_DWORD*)(a1 + 80) = v6;
			v15 = COERCE_UNSIGNED_INT((float)*((unsigned __int16*)v11 + 2));
			goto LABEL_14;
		}
		v9 = *(_DWORD*)(v2 + 12);
		v10 = *(_WORD*)(v2 + 16);
		v11 = (unsigned int*)(v2 + 12);
		LODWORD(v6) = 0;
		v8 = 1;
	}
	v13 = (int*)(v2 + 2 * (3i64 * v8 + 6));
	while (1)
	{
		v14 = *v13;
		v11 = (unsigned int*)v13;
		if (v12 >= v9 && v12 < v14)
			break;
		v10 = *((_WORD*)v13 + 2);
		++v8;
		LODWORD(v6) = v6 + 1;
		v13 = (int*)((char*)v13 + 6);
		v9 = v14;
		if (v8 >= v5)
			goto LABEL_11;
	}
	*(_DWORD*)(a1 + 80) = v6;
	v15 = COERCE_UNSIGNED_INT((float)*((unsigned __int16*)v13 + 2));
	*(float*)&v15 = (float)((float)((float)(*(float*)&v15 - (float)v10) * (float)(int)(v12 - v9))
		/ (float)(int)(v14 - v9))
		+ (float)v10;
LABEL_14:
	*(_QWORD*)&result = v15 ^ 0x8000000080000000ui64;
	*(float*)&result = *(float*)&result - *(float*)(v2 + 8);
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

