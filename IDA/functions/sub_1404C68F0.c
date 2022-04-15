//----- (00000001404C68F0) ----------------------------------------------------
__int64 __fastcall sub_1404C68F0(__int64 a1, __int64* a2)
{
	__int64 v3; // rcx
	int v4; // eax
	__int64 v6; // [rsp+38h] [rbp+10h] BYREF

	if (a2)
	{
		(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)a1 + 192i64))(a1, &v6);
		v3 = v6;
		if (v6)
		{
			v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 184i64))(v6);
			v3 = v6;
			if (v4)
			{
				(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)v6 + 200i64))(v6, &v6);
				return 0i64;
			}
		}
		*a2 = v3;
	}
	return 0i64;
}

