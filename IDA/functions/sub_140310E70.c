//----- (0000000140310E70) ----------------------------------------------------
unsigned __int64 __fastcall sub_140310E70(__int64 a1)
{
	unsigned __int64 result; // rax
	_DWORD* v3; // rdi
	int v4; // esi

	for (result = _InterlockedExchangeAdd64((volatile signed __int64*)(a1 + 184), 1ui64);
		result < *(_QWORD*)(a1 + 160);
		result = _InterlockedExchangeAdd64((volatile signed __int64*)(a1 + 184), 1ui64))
	{
		v3 = *(_DWORD**)(*(_QWORD*)(a1 + 152) + 8 * result);
		if (v3[77] <= *(_DWORD*)(a1 + 228))
		{
			v4 = *(_DWORD*)(a1 + 236);
			if (!*((_QWORD*)v3 + 45))
			{
				v4 = *(_DWORD*)(a1 + 236) & 0x7800;
				if ((*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)v3 + 400i64))(v3))
					v4 |= *(_DWORD*)(a1 + 236) & 1;
			}
			sub_140300DD0((__int64)v3, v4 | 0x10000);
			(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v3 + 8i64))(v3);
		}
		else
		{
			*(_QWORD*)(*(_QWORD*)(a1 + 168) + 8 * _InterlockedExchangeAdd64((volatile signed __int64*)(a1 + 192), 1ui64)) = v3;
		}
	}
	return result;
}

