//----- (0000000140860420) ----------------------------------------------------
__int64 __fastcall sub_140860420(__int64 a1, __int64 a2, __int64 a3, char a4)
{
	int v4; // xmm2_4

	if ((((_DWORD)a2 - 0x1000000) & 0xFEFFFFFF) != 0)
	{
		if ((((_DWORD)a2 - 0x4000000) & 0xFBFFFFFF) == 0)
		{
			if (a4)
			{
				*(_QWORD*)(a1 + 120) = 0i64;
				if ((_DWORD)a2 == 0x4000000)
				{
					LOBYTE(a2) = 1;
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)(a1 - 16) + 40i64))(a1 - 16, a2);
				}
			}
			*(_DWORD*)(a1 + 284) = v4;
		}
	}
	else
	{
		if (a4)
		{
			*(_QWORD*)(a1 + 112) = 0i64;
			if ((_DWORD)a2 == 0x2000000)
			{
				LOBYTE(a3) = 1;
				(**(void(__fastcall***)(__int64, _QWORD, __int64, _QWORD))(a1 - 16))(a1 - 16, 0i64, a3, 0i64);
			}
		}
		*(_DWORD*)(a1 + 280) = v4;
	}
	return sub_14085D440(a1 - 16);
}
// 14086046D: variable 'v4' is possibly undefined

