//----- (000000014056B3D0) ----------------------------------------------------
__int64 __fastcall sub_14056B3D0(_DWORD* a1)
{
	__int64 v2; // rax
	__int64 result; // rax

	if (a1[6])
	{
		v2 = *(_QWORD*)a1;
		a1[6] = 0;
		(*(void(__fastcall**)(_DWORD*, _QWORD))(v2 + 144))(a1, 0i64);
		return (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 176i64))(a1);
	}
	return result;
}

