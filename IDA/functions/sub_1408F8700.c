//----- (00000001408F8700) ----------------------------------------------------
__int64 __fastcall sub_1408F8700(__int64 a1, __int64* a2)
{
	__int64 v2; // rax
	__int64 v5; // rax
	__int64 result; // rax
	int v7; // [rsp+38h] [rbp+10h] BYREF

	v2 = *a2;
	v7 = 1;
	v5 = (*(__int64(__fastcall**)(__int64*, __int64))(v2 + 8))(a2, 208i64);
	if (!v5)
		return 0i64;
	result = sub_1408F8380(v5, a1, &v7);
	if (result && v7 != 1)
	{
		(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)result + 32i64))(result, a2);
		return 0i64;
	}
	return result;
}

