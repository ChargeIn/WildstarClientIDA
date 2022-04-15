//----- (00000001407D2220) ----------------------------------------------------
__int64 __fastcall sub_1407D2220(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rcx

	v2 = a1[27];
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 32i64))(v2);
		if (!(_DWORD)result)
			return result;
		if (!(unsigned int)sub_1407D24D0((__int64)a1))
			a1[1] = a1[3] + 32i64;
		v4 = a1[27];
		if (v4)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			a1[27] = 0i64;
		}
	}
	return 1i64;
}

