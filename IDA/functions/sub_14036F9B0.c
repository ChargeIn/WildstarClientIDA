//----- (000000014036F9B0) ----------------------------------------------------
__int64 __fastcall sub_14036F9B0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rcx

	v2 = *(_QWORD*)(a1 + 48);
	if (v2)
		result = sub_14036FF20(v2);
	v4 = *(_QWORD*)(a1 + 56);
	if (v4)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	return result;
}

