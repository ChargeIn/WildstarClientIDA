//----- (000000014026C1F0) ----------------------------------------------------
__int64 __fastcall sub_14026C1F0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	__int64 v4; // rcx
	__int64 result; // rax
	__int64 v6; // rcx

	v2 = a2;
	*(_DWORD*)(a1 + 4i64 * a2 + 7528) = 4;
	*(_DWORD*)(a1 + 4i64 * a2 + 7608) = 27;
	v4 = *(_QWORD*)(a1 + 8i64 * a2 + 7544);
	if (v4)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 8 * v2 + 7544) = 0i64;
	}
	v6 = *(_QWORD*)(a1 + 8 * v2 + 7624);
	if (v6)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
		*(_QWORD*)(a1 + 8 * v2 + 7624) = 0i64;
	}
	return result;
}

