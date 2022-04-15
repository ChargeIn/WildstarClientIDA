//----- (00000001403DA300) ----------------------------------------------------
__int64 __fastcall sub_1403DA300(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdx

	if (*(_QWORD*)(a1 + 120))
	{
		v2 = sub_14039DEF0(a1);
		if (v2)
		{
			v3 = *(_QWORD*)(v2 + 184);
			if (v3)
			{
				v4 = *(unsigned int*)(v3 + 104);
				if ((_DWORD)v4)
					(*(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 120) + 5512i64)
						+ 16i64))(
							*(_QWORD*)(*(_QWORD*)(a1 + 120) + 5512i64),
							v4,
							0i64,
							0i64,
							0i64,
							0i64,
							0i64);
			}
		}
	}
	return 0i64;
}

