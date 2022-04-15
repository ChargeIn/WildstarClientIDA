//----- (0000000140779980) ----------------------------------------------------
__int64 __fastcall sub_140779980(__int64 a1)
{
	__int64 v1; // rax
	__int64 result; // rax
	int v4; // edx
	unsigned int v5; // eax
	unsigned int v6; // edx

	v1 = *(_QWORD*)(a1 + 144);
	if (*(_DWORD*)(v1 + 4) == 5)
		return 0i64;
	result = *(unsigned int*)(v1 + 12);
	if (!(_DWORD)result)
		return 0i64;
	if (!*(_DWORD*)(a1 + 156))
		return result;
	v4 = sub_14018CDF0();
	v5 = *(_DWORD*)(*(_QWORD*)(a1 + 144) + 12i64);
	v6 = v4 - *(_DWORD*)(a1 + 156);
	if (v6 > v5)
		return 0i64;
	else
		return v5 - v6;
}

