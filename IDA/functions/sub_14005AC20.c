//----- (000000014005AC20) ----------------------------------------------------
__int64 __fastcall sub_14005AC20(__int64 a1, __int64 a2)
{
	int v2; // r8d

	v2 = *(_DWORD*)(a1 + 8);
	if (v2 != *(_DWORD*)(a2 + 8))
		return 0i64;
	if (!v2)
		return 1i64;
	if (v2 - 1)
		return *(double*)a2 == *(double*)a1;
	else
		return *(_DWORD*)a1 == *(_DWORD*)a2;
}

