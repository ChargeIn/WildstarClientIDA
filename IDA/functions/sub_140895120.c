//----- (0000000140895120) ----------------------------------------------------
__int64 __fastcall sub_140895120(__int64 a1, int a2, int a3, _QWORD* a4)
{
	__int64 v4; // r10
	__int64 v5; // rax
	__int64 v6; // rax

	v4 = *(_QWORD*)(a1 + 8);
	if (v4 && *(_DWORD*)(v4 + 16) < a2 + a3)
	{
		*a4 = v4;
		v5 = *(_QWORD*)(a1 + 8);
		if (v5)
		{
			v6 = *(_QWORD*)(v5 + 8);
			if (!v6)
				*(_QWORD*)(a1 + 16) = 0i64;
			*(_QWORD*)(a1 + 8) = v6;
		}
		return 45i64;
	}
	else
	{
		*a4 = 0i64;
		return 17i64;
	}
}

