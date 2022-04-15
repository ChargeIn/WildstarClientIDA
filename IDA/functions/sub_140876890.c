//----- (0000000140876890) ----------------------------------------------------
__int64 __fastcall sub_140876890(__int64 a1, __int64* a2)
{
	char v3; // r9
	__int64 v4; // rax
	int v5; // xmm1_4
	int v6; // xmm0_4
	char v7; // cl

	v3 = *(_BYTE*)(*a2)++;
	*(_BYTE*)(a1 + 100) = v3 != 0;
	v4 = *a2 + 12;
	*a2 = v4;
	v5 = *(_DWORD*)(v4 - 8);
	v6 = *(_DWORD*)(v4 - 4);
	*(_DWORD*)(a1 + 88) = *(_DWORD*)(v4 - 12);
	*(_DWORD*)(a1 + 92) = v5;
	*(_DWORD*)(a1 + 96) = v6;
	v7 = *(_BYTE*)(*a2)++;
	*(_BYTE*)(a1 + 101) = v7 != 0;
	return sub_140876B30(a1, a2);
}

