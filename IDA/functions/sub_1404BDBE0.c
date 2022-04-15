//----- (00000001404BDBE0) ----------------------------------------------------
void __fastcall sub_1404BDBE0(__int64 a1, int a2)
{
	__int64 v3; // rcx

	if (*(_DWORD*)(a1 + 244) != a2)
	{
		*(_DWORD*)(a1 + 244) = a2;
		v3 = *(_QWORD*)(a1 + 256);
		if (v3)
		{
			if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 152i64))(v3))
			{
				if (*(_DWORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 256) + 152i64))(*(_QWORD*)(a1 + 256))
					+ 128) != 7)
					(**(void(__fastcall***)(__int64))a1)(a1);
			}
		}
	}
}

