//----- (000000014035BF90) ----------------------------------------------------
__int64 __fastcall sub_14035BF90(__int64 a1, int* a2)
{
	int v2; // r9d
	int v3; // eax

	v2 = *a2;
	if (*a2 < *(_DWORD*)(a1 + 2188))
		return 0i64;
	if (v2 >= *(_DWORD*)(a1 + 2196))
		return 0i64;
	v3 = a2[1];
	if (v3 < *(_DWORD*)(a1 + 2192) || v3 >= *(_DWORD*)(a1 + 2200))
		return 0i64;
	else
		return *(_QWORD*)(*(_QWORD*)(a1 + 2272)
			+ 8i64
			* (v2 % *(_DWORD*)(a1 + 2204)
				+ *(_DWORD*)(a1 + 2204)
				* (v3 % *(_DWORD*)(a1 + 2208) + *(_DWORD*)(a1 + 2208) * (v3 % *(_DWORD*)(a1 + 2208) < 0))
				+ *(_DWORD*)(a1 + 2204) * (unsigned int)(v2 % *(_DWORD*)(a1 + 2204) < 0)));
}

