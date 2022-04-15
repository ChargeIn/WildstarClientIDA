//----- (00000001402FC9C0) ----------------------------------------------------
void __fastcall sub_1402FC9C0(__int64 a1)
{
	bool v2; // zf
	__int64 i; // rbx
	__int64 v4; // rcx

	if (!*(_DWORD*)(a1 + 1440))
	{
		v2 = *(_QWORD*)(a1 + 1424) == 0i64;
		*(_DWORD*)(a1 + 1440) = 1;
		if (!v2)
		{
			if (*(_DWORD*)(a1 + 1444))
			{
				for (i = 0i64; (unsigned int)i < *(_DWORD*)(*(_QWORD*)(a1 + 64) + 760i64); i = (unsigned int)(i + 1))
				{
					v4 = *(_QWORD*)(*(_QWORD*)(a1 + 1424) + 8 * i);
					if (v4)
						(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 64i64))(v4, 0xFFFFFFFFi64);
				}
			}
		}
	}
}

