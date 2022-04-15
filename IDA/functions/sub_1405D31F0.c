//----- (00000001405D31F0) ----------------------------------------------------
__int64 __fastcall sub_1405D31F0(__int64 a1, _OWORD* a2, _OWORD* a3)
{
	int v3; // r9d
	int v4; // r8d
	int v5; // edx
	__int64 result; // rax
	int v7; // [rsp+20h] [rbp-18h]

	if (!*(_DWORD*)(a1 + 688))
	{
		*(_DWORD*)(a1 + 848) = 0;
		*(_OWORD*)(a1 + 864) = *a2;
		*(_OWORD*)(a1 + 880) = 0i64;
		if (!*(_DWORD*)(a1 + 688))
		{
			*(_DWORD*)(a1 + 896) = 0;
			*(_OWORD*)(a1 + 912) = *a3;
			*(_OWORD*)(a1 + 928) = 0i64;
		}
		v3 = *(_DWORD*)(a1 + 732);
		v4 = *(_DWORD*)(a1 + 728);
		v5 = *(_DWORD*)(a1 + 724);
		v7 = *(_DWORD*)(a1 + 736);
		*(_DWORD*)(a1 + 688) = 1;
		return sub_1405D3870(a1, v5, v4, v3, v7);
	}
	return result;
}

