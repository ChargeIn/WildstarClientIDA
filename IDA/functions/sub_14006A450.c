//----- (000000014006A450) ----------------------------------------------------
__int64 __fastcall sub_14006A450(__int64* a1, int a2)
{
	__int64 result; // rax
	int v3; // r8d

	result = *(unsigned __int8*)(*a1 + 115);
	v3 = a2 + *((_DWORD*)a1 + 15);
	if (v3 > (int)result)
	{
		if (v3 >= 250)
			sub_140062CF0(a1[3], aFunctionOrExpr, *(_DWORD*)(a1[3] + 16));
		*(_BYTE*)(*a1 + 115) = v3;
	}
	*((_DWORD*)a1 + 15) += a2;
	return result;
}

