//----- (00000001407E393C) ----------------------------------------------------
__int64 __fastcall sub_1407E393C(int a1, __int64 a2)
{
	__int64 result; // rax

	if (a1)
	{
		if ((*(_DWORD*)(a2 + 24) & 0x1000) != 0)
		{
			result = sub_1407E1164((_DWORD*)a2);
			*(_DWORD*)(a2 + 24) &= 0xFFFFEEFF;
			*(_DWORD*)(a2 + 36) = 0;
			*(_QWORD*)a2 = 0i64;
			*(_QWORD*)(a2 + 16) = 0i64;
		}
	}
	return result;
}

