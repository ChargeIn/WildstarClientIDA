//----- (0000000140367B30) ----------------------------------------------------
__int64 __fastcall sub_140367B30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 result; // rax

	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 152i64))(a2, a3);
	if ((*(_DWORD*)(a1 + 128) & 0x10000) != 0)
	{
		if (a4)
		{
			*(_DWORD*)(a3 + 704) = *(_DWORD*)(((unsigned __int64)*(unsigned int*)(a4 + 36) << 7)
				+ *(_QWORD*)(a1 + 16)
				+ 1272);
			*(_DWORD*)(a3 + 708) = *(_DWORD*)(((unsigned __int64)*(unsigned int*)(a4 + 36) << 7)
				+ *(_QWORD*)(a1 + 16)
				+ 1276);
			*(_DWORD*)(a3 + 712) = *(_DWORD*)(((*(unsigned int*)(a4 + 36) + 10i64) << 7) + *(_QWORD*)(a1 + 16));
			*(_DWORD*)(a3 + 716) = *(_DWORD*)(((unsigned __int64)*(unsigned int*)(a4 + 36) << 7)
				+ *(_QWORD*)(a1 + 16)
				+ 1284);
		}
		else
		{
			*(_QWORD*)(a3 + 704) = 0i64;
			*(_QWORD*)(a3 + 712) = 0i64;
		}
	}
	else
	{
		*(_QWORD*)(a3 + 696) = 0i64;
	}
	*(_OWORD*)(a3 + 208) = *(_OWORD*)(a1 + 864);
	*(float*)(a3 + 748) = *(float*)(a1 + 136) * 0.75;
	*(_DWORD*)(a3 + 752) = *(_DWORD*)(a1 + 136);
	if ((*(_DWORD*)(a1 + 128) & 0x80000) == 0)
		*(_DWORD*)(a3 + 744) = 0;
	result = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 288) + 224i64))(*(_QWORD*)(a1 + 288), 0i64);
	*(_QWORD*)(a3 + 760) = result;
	return result;
}

