//----- (000000014071C1E0) ----------------------------------------------------
void __fastcall sub_14071C1E0(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rax

	v2 = *(_QWORD**)(a1 + 8);
	if (v2)
		*v2 = *(_QWORD*)(a1 + 16);
	v3 = *(_QWORD*)(a1 + 16);
	if (v3)
		*(_QWORD*)(v3 + 8) = *(_QWORD*)(a1 + 8);
	v4 = *(_QWORD*)a1;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	if (*(_DWORD*)((*(__int64(__fastcall**)(__int64))(v4 + 16))(a1) + 12))
	{
		if (*(_DWORD*)(a1 + 320))
			*(_DWORD*)(a1 + 320) = 0;
		*(_DWORD*)(a1 + 328) = 2;
		sub_14071C730(a1);
	}
}

