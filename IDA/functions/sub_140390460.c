//----- (0000000140390460) ----------------------------------------------------
__int64 __fastcall sub_140390460(__int64 a1, __int64 a2)
{
	int v2; // ecx
	int v3; // edx

	v2 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 104i64);
	v3 = *(_DWORD*)(*(_QWORD*)(a2 + 16) + 104i64);
	if (v2 >= v3)
		return v2 > v3;
	else
		return 0xFFFFFFFFi64;
}

