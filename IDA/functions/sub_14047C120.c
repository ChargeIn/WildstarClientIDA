//----- (000000014047C120) ----------------------------------------------------
char __fastcall sub_14047C120(_QWORD* a1)
{
	int v2; // eax
	__int64 v3; // rcx

	v2 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 32i64))(a1);
	if (v2)
	{
		v3 = a1[23];
		LOBYTE(v2) = 0;
		if (v3)
			LOBYTE(v2) = *(_DWORD*)(v3 + 4) == 7;
	}
	return v2;
}
