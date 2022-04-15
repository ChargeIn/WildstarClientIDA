//----- (000000014040D060) ----------------------------------------------------
__int64 __fastcall sub_14040D060(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
	int v8; // eax
	unsigned int v9; // edx
	int v10; // r9d
	float v11; // xmm0_4
	unsigned int v12; // r9d

	if (*(_DWORD*)(a1 + 188) && (v8 = *(_DWORD*)(a1 + 32)) != 0)
		*(_DWORD*)(a2 + 4) = v8;
	else
		*(_DWORD*)(a2 + 4) = a4;
	if (*(_DWORD*)(a1 + 184))
		v9 = *(_DWORD*)(a1 + 24);
	else
		v9 = *(_DWORD*)(a2 + 4);
	v10 = *(_DWORD*)(a2 + 32);
	*(_DWORD*)(a2 + 12) = v9;
	*(_DWORD*)(a2 + 8) = a5;
	v11 = sub_14040F660(a3, v9, *(_DWORD*)(*(_QWORD*)(a1 + 16) + 320i64) == 33, v10 & 8);
	v12 = *(_DWORD*)(a2 + 12);
	*(float*)(a2 + 20) = v11 * *(float*)(a1 + 200);
	sub_14040F710(
		a3,
		(float*)(a1 + 216),
		(unsigned int*)(a2 + 12),
		v12,
		(int*)(a1 + 24),
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 320i64) == 33);
	*(float*)(a2 + 24) = *(float*)(a2 + 20) * *(float*)(a1 + 216);
	sub_14040D160((_QWORD*)a1, a2);
	return sub_14040CF90(a1, a2);
}

