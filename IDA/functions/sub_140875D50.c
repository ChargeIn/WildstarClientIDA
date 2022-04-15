//----- (0000000140875D50) ----------------------------------------------------
__int64 __fastcall sub_140875D50(_DWORD* a1, __int64* a2)
{
	__int64 v2; // rax
	int v3; // r8d
	int v4; // xmm2_4
	int v5; // xmm1_4
	int v6; // xmm0_4
	__int64 result; // rax

	v2 = *a2 + 13;
	v3 = *(unsigned __int8*)*a2;
	*a2 = v2;
	v4 = *(_DWORD*)(v2 - 12);
	v5 = *(_DWORD*)(v2 - 8);
	v6 = *(_DWORD*)(v2 - 4);
	result = 1i64;
	a1[22] = v4;
	a1[23] = v5;
	a1[24] = v6;
	a1[25] = v3;
	return result;
}

