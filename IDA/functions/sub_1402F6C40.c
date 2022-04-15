//----- (00000001402F6C40) ----------------------------------------------------
__int64 __fastcall sub_1402F6C40(__int64* a1, int a2, unsigned __int16 a3)
{
	__int64 v3; // rax
	unsigned int v7; // edi
	__int64 v8; // r10
	unsigned int v9; // r9d
	unsigned int v10; // r8d
	__int64 v11; // rcx
	int v12; // edx
	unsigned int v13; // r8d
	__int64 v14; // rcx
	unsigned int v15; // edx
	__int64 v16; // r14
	unsigned int v17; // esi
	unsigned int v18; // ebx
	unsigned __int16* v19; // r11
	int v20; // ebp
	unsigned __int16* v21; // r10
	unsigned int v22; // ecx
	unsigned int v23; // r9d
	unsigned int v24; // eax
	__int64 v25; // rax
	__int64 v26; // rax
	int v27; // ecx
	int* v28; // r8
	__int64 v29; // r9
	__int64 v30; // rax
	unsigned int v31; // ecx
	int* i; // r8
	unsigned int v33; // r9d
	int v35[4]; // [rsp+20h] [rbp-C8h] BYREF
	unsigned int v36[32]; // [rsp+30h] [rbp-B8h] BYREF

	v3 = *a1;
	v35[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 1400))(a1, v35);
	v7 = 0;
	v8 = *(_QWORD*)(a1[7] + 184);
	v9 = 0;
	v10 = *(_DWORD*)(v8 + 32);
	if (!v10)
	{
	LABEL_7:
		v13 = *(unsigned __int16*)(v8 + 28);
		goto LABEL_8;
	}
	while (1)
	{
		v11 = v9 + ((v10 - v9) >> 1);
		v12 = *(unsigned __int16*)(*(_QWORD*)(v8 + 40) + 2 * v11);
		if (a2 >= v12)
			break;
		v10 = v9 + ((v10 - v9) >> 1);
	LABEL_6:
		if (v9 >= v10)
			goto LABEL_7;
	}
	if (a2 > v12)
	{
		v9 = v11 + 1;
		goto LABEL_6;
	}
	v13 = *(unsigned __int16*)(*(_QWORD*)(v8 + 48) + 2 * v11);
LABEL_8:
	v14 = a1[8];
	v15 = 0;
	v16 = *(_QWORD*)(v14 + 24);
	v17 = *(_DWORD*)(v14 + 16);
	v18 = v13;
	v19 = (unsigned __int16*)(v16 + 112i64 * v13);
	v20 = *v19;
	if (v13 >= v17)
		return v36[0];
	v21 = (unsigned __int16*)(v16 + 112i64 * v13);
	while (v15 < 0x20 && *v21 == v20)
	{
		v22 = *((_DWORD*)v21 + 6);
		v23 = *((_DWORD*)v21 + 7);
		if (v22 != v23)
		{
			v24 = *(_DWORD*)(a1[2] + 496);
			if (v22 >= v23)
			{
				if (v24 >= v23 && v24 < v22)
					goto LABEL_21;
			}
			else if (v24 < v22 || v24 >= v23)
			{
				goto LABEL_21;
			}
		}
		v25 = v15++;
		v36[v25] = v18;
	LABEL_21:
		++v18;
		v21 += 56;
		if (v18 >= v17)
			break;
	}
	if (v15)
		goto LABEL_27;
	if (v13 >= v17)
		return v36[0];
	do
	{
		if (v15 >= 0x20)
			break;
		if (*v19 != v20)
			break;
		v26 = v15;
		v19 += 56;
		++v15;
		v36[v26] = v13++;
	} while (v13 < v17);
LABEL_27:
	if (v15 <= 1)
		return v36[0];
	v27 = 0;
	v28 = (int*)v36;
	v29 = v15;
	do
	{
		v30 = (unsigned int)*v28++;
		v27 += *(unsigned __int16*)(112 * v30 + v16 + 8);
		--v29;
	} while (v29);
	if (!v27)
		return v36[(unsigned __int64)(v15 * a3) >> 16];
	v31 = ((unsigned int)a3 * v27) >> 16;
	for (i = (int*)v36; ; ++i)
	{
		v33 = *(unsigned __int16*)(112i64 * (unsigned int)*i + v16 + 8);
		if (v31 < v33)
			break;
		++v7;
		v31 -= v33;
		if (v7 >= v15)
			return v36[0];
	}
	return (unsigned int)*i;
}
// 1402F6D92: conditional instruction was optimized away because edx.4>=2u
// 1402F6DC8: conditional instruction was optimized away because edx.4>=2u
// 1402F6C40: using guessed type int var_C8[4];
// 1402F6C40: using guessed type unsigned int var_B8[32];

