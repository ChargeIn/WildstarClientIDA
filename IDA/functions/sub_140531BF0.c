//----- (0000000140531BF0) ----------------------------------------------------
__int64 __fastcall sub_140531BF0(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	__int64 v4; // rax

	result = sub_14052E9B0(a1);
	if (result)
	{
		v3 = *(_QWORD*)(result + 1152);
		if (v3)
			LODWORD(v3) = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 168i64))(v3) + 4);
		v4 = a1[2];
		*(_DWORD*)(v4 + 8) = 3;
		*(double*)v4 = (double)(int)v3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

