//----- (00000001402F6200) ----------------------------------------------------
__int64 __fastcall sub_1402F6200(__int64 a1, __int64 a2)
{
	int v4; // edx
	int v5; // ecx
	__int64 result; // rax
	bool v7; // zf
	__int64 i; // rdi
	__int64 v9; // rcx
	float* j; // rdi
	float v11; // xmm1_4
	int v12; // xmm0_4
	__int64 v13; // rax
	int v14; // xmm1_4
	int v15[6]; // [rsp+20h] [rbp-18h] BYREF

	if (*(_DWORD*)(a1 + 1064) != *(_DWORD*)a2 || *(float*)(a2 + 4) != *(float*)(a1 + 1068))
		goto LABEL_6;
	v4 = *(_DWORD*)(a2 + 8);
	v5 = *(_DWORD*)(a1 + 1072);
	if ((v5 ^ v4) < 0)
		v5 = 0x80000000 - v5;
	result = abs32(v5 - v4);
	if ((int)result > 84)
	{
	LABEL_6:
		v7 = (*(_BYTE*)(a1 + 48) & 1) == 0;
		*(_DWORD*)(a1 + 1064) = *(_DWORD*)a2;
		*(_DWORD*)(a1 + 1068) = *(_DWORD*)(a2 + 4);
		result = *(unsigned int*)(a2 + 8);
		*(_DWORD*)(a1 + 1072) = result;
		if (!v7)
		{
			result = *(_QWORD*)(a1 + 64);
			for (i = 0i64; (unsigned int)i < *(_DWORD*)(result + 448); i = (unsigned int)(i + 1))
			{
				v9 = *(_QWORD*)(*(_QWORD*)(a1 + 1056) + 24 * i + 16);
				if (v9)
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v9 + 48i64))(v9, *(unsigned int*)(a1 + 1064));
				result = *(_QWORD*)(a1 + 64);
			}
		}
		for (j = *(float**)(a1 + 1232); j; j = (float*)*((_QWORD*)j + 156))
		{
			v11 = j[37];
			v12 = *(_DWORD*)(a1 + 1068);
			v15[0] = *(_DWORD*)(a1 + 1064);
			v13 = *(_QWORD*)j;
			*(float*)&v14 = v11 * *(float*)(a1 + 1072);
			v15[1] = v12;
			v15[2] = v14;
			result = (*(__int64(__fastcall**)(float*, int*))(v13 + 240))(j, v15);
		}
	}
	return result;
}

