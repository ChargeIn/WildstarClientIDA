//----- (000000014034A630) ----------------------------------------------------
__int64 __fastcall sub_14034A630(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 16);
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
	result = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	return result;
}

