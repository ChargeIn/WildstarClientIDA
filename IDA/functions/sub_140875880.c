//----- (0000000140875880) ----------------------------------------------------
__int64 __fastcall sub_140875880(__int64 a1, __int64* a2)
{
	__int64 v2; // rax
	char v3; // r8
	int v4; // xmm2_4
	int v5; // xmm1_4
	int v6; // xmm0_4
	__int64 result; // rax

	v2 = *a2 + 13;
	v3 = *(_BYTE*)*a2;
	*a2 = v2;
	v4 = *(_DWORD*)(v2 - 12);
	v5 = *(_DWORD*)(v2 - 8);
	v6 = *(_DWORD*)(v2 - 4);
	result = 1i64;
	*(_DWORD*)(a1 + 88) = v4;
	*(_DWORD*)(a1 + 92) = v5;
	*(_DWORD*)(a1 + 96) = v6;
	*(_BYTE*)(a1 + 100) = v3;
	return result;
}

