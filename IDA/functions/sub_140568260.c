//----- (0000000140568260) ----------------------------------------------------
__int64 __fastcall sub_140568260(_QWORD* a1)
{
	__int64 v1; // rdx
	int v3; // eax
	unsigned int v5; // eax
	int v6; // ecx
	int v7; // eax
	int v8; // eax
	int v9; // eax
	float* v10; // rax
	int v11; // eax
	_DWORD* v12; // rax
	__int64 v13; // rax
	unsigned int v14; // ecx
	int v15; // ecx
	unsigned int* v16; // rax
	unsigned int v17; // ecx
	_QWORD* v18; // rax
	unsigned __int64 v19; // r8
	__int64 v20; // rcx
	_DWORD* i; // rdx

	v1 = a1[14];
	v3 = *(_DWORD*)(v1 + 272);
	if ((v3 & 4) != 0 && (v3 & 8) != 0)
		return 48i64;
	if ((*(_DWORD*)(v1 + 268) & 0x10000000) != 0)
	{
		v5 = *(_DWORD*)(v1 + 124);
		if (v5 > 6)
			return 49i64;
		v6 = 106;
		if (!_bittest(&v6, v5))
			return 49i64;
	}
	v7 = *(_DWORD*)(v1 + 24);
	if (v7 >= 11)
		return 50i64;
	if (v7 == 3)
	{
		v8 = *(_DWORD*)(v1 + 124);
		if (v8 == 6 || v8 <= 1 || v8 >= 9)
			return 51i64;
	}
	else if (v7 == 10)
	{
		v9 = *(_DWORD*)(v1 + 124);
		if (v9 == 6 || v9 <= 1 || v9 >= 9)
			return 94i64;
		v10 = (float*)a1[9];
		if (!v10)
			return 95i64;
		if (v10[1] < *v10)
			return 96i64;
	}
	if (*(_DWORD*)(v1 + 28) > 0x927C0u)
		return 52i64;
	if (*(int*)(v1 + 244) >= 6)
		return 53i64;
	if (*(int*)(v1 + 256) > 3)
		return 54i64;
	v11 = *(_DWORD*)(v1 + 124);
	if (v11 == 4 && *(_DWORD*)(v1 + 296))
		return 62i64;
	if ((unsigned int)(v11 - 7) <= 1)
	{
		if (*(_DWORD*)(v1 + 296))
			return 62i64;
		if (*(float*)(v1 + 108) > *(float*)(v1 + 136) || *(float*)(v1 + 112) < *(float*)(v1 + 140))
			return 63i64;
	}
	if (*(float*)(v1 + 112) < *(float*)(v1 + 108))
		return 64i64;
	if (*(float*)(v1 + 120) > 360.0)
		return 65i64;
	v12 = (_DWORD*)a1[7];
	if (v12 && *v12 > 0x240C8400u)
		return 66i64;
	v13 = a1[9];
	if (v13)
	{
		v14 = *(_DWORD*)(v13 + 12);
		if (!v14)
			return 68i64;
		if (v14 > 0x3E8)
			return 69i64;
		if (*(float*)(v13 + 4) <= *(float*)v13)
			return 70i64;
		if (*(float*)(v13 + 8) > 360.0)
			return 71i64;
		v15 = *(_DWORD*)(v13 + 16);
		if (!v15 || v15 >= 6)
			return 72i64;
	}
	if (*(_DWORD*)(v1 + 160) > 0xBB8u)
		return 73i64;
	v16 = (unsigned int*)a1[10];
	if (v16)
	{
		v17 = v16[1];
		if (v17 > 0x927C0)
			return 74i64;
		if (*v16 >= v17)
			return 75i64;
		if (v16[2] >= v17)
			return 76i64;
	}
	v18 = (_QWORD*)a1[11];
	if (!v18)
		return 0i64;
	v19 = v18[1];
	if (v19 && *(_DWORD*)*v18 <= 0x927C0u)
	{
		v20 = 1i64;
		if (v19 > 1)
		{
			for (i = (_DWORD*)(*v18 + 4i64); (unsigned int)(*i - 1) <= 0x927BF; ++i)
			{
				if (++v20 >= v19)
					return 0i64;
			}
			return 89i64;
		}
		return 0i64;
	}
	return 89i64;
}

