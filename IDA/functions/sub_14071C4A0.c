//----- (000000014071C4A0) ----------------------------------------------------
__int64 __fastcall sub_14071C4A0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v4; // rcx

	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 936i64))(a1);
	v4 = *(_QWORD*)(a2 + 224);
	if (v4)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a2 + 224) = 0i64;
	}
	*(_DWORD*)(a2 + 324) = 1;
	return result;
}

