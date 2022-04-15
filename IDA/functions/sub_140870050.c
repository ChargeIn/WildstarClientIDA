//----- (0000000140870050) ----------------------------------------------------
__int64 __fastcall sub_140870050(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	__int64 v4; // rbx
	__int64 i; // rbx

	v4 = *(_QWORD*)(a1 + 56);
	if (v4)
	{
		for (i = *(_QWORD*)(v4 + 24); i; i = *(_QWORD*)(i + 32))
		{
			if ((!a2 || *(_QWORD*)(i + 176) == a2) && (!a4 || a4 == *(_DWORD*)(i + 120)))
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)i + 56i64))(i, a3);
		}
	}
	return 1i64;
}

