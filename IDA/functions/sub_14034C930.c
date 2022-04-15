//----- (000000014034C930) ----------------------------------------------------
__int64 __fastcall sub_14034C930(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int v3; // ebp
	unsigned int v4; // r13d
	unsigned int v5; // r15d
	int v6; // edi
	int v7; // r9d
	float v8; // xmm7_4
	int v10; // edx
	float v11; // xmm5_4
	float v12; // xmm4_4
	int v13; // eax
	int v14; // eax
	bool v15; // cc
	__int64 result; // rax
	bool v17; // cf
	unsigned int v18; // ecx

	v3 = *(_DWORD*)(a2 + 32);
	v4 = *(_DWORD*)(a2 + 44);
	v5 = *(_DWORD*)(a2 + 40);
	v6 = *(_DWORD*)(a2 + 28);
	v7 = *(_DWORD*)(a2 + 24);
	v8 = fmaxf(*(float*)(a2 + 36), *(float*)(a3 + 36));
	*(float*)(a1 + 20) = fminf(*(float*)(a2 + 20), *(float*)(a3 + 20));
	*(float*)(a1 + 36) = v8;
	v10 = *(_DWORD*)(a2 + 16);
	v11 = fminf(*(float*)(a2 + 12), *(float*)(a3 + 12));
	v12 = fminf(*(float*)(a2 + 8), *(float*)(a3 + 8));
	*(_DWORD*)a1 = *(_DWORD*)a3 & *(_DWORD*)a2;
	v13 = *(_DWORD*)(a2 + 4);
	*(float*)(a1 + 8) = v12;
	*(float*)(a1 + 12) = v11;
	v14 = *(_DWORD*)(a3 + 4) & v13;
	if (*(_DWORD*)(a3 + 16) < v10)
		v10 = *(_DWORD*)(a3 + 16);
	v15 = *(_DWORD*)(a3 + 24) < v7;
	*(_DWORD*)(a1 + 4) = v14;
	if (v15)
		v7 = *(_DWORD*)(a3 + 24);
	result = a1;
	if (*(_DWORD*)(a3 + 28) < v6)
		v6 = *(_DWORD*)(a3 + 28);
	v17 = v3 < *(_DWORD*)(a3 + 32);
	*(_DWORD*)(a1 + 16) = v10;
	if (v17)
		v3 = *(_DWORD*)(a3 + 32);
	v17 = *(_DWORD*)(a3 + 40) < v5;
	*(_DWORD*)(a1 + 24) = v7;
	if (v17)
		v5 = *(_DWORD*)(a3 + 40);
	v17 = *(_DWORD*)(a3 + 44) < v4;
	*(_DWORD*)(a1 + 32) = v3;
	if (v17)
		v4 = *(_DWORD*)(a3 + 44);
	*(_DWORD*)(a1 + 28) = v6;
	*(_DWORD*)(a1 + 44) = v4;
	*(_DWORD*)(a1 + 40) = v5;
	v18 = *(_DWORD*)(a2 + 48);
	if (*(_DWORD*)(a3 + 48) < v18)
		v18 = *(_DWORD*)(a3 + 48);
	*(_DWORD*)(result + 48) = v18;
	return result;
}

