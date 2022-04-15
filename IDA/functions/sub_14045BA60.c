//----- (000000014045BA60) ----------------------------------------------------
__int64 __fastcall sub_14045BA60(__int64 a1)
{
	int v1; // r8d
	__int64 v3; // rax

	if (*(_QWORD*)(a1 + 256))
	{
		v1 = *(_DWORD*)(a1 + 48);
		if (v1 >= 1)
		{
			if (v1 < 25)
				return (unsigned int)((v1 - 1) % 6);
			else
				return 5i64;
		}
		else
		{
			return 0i64;
		}
	}
	else
	{
		v3 = *(_QWORD*)(a1 + 24);
		if (v3)
			return *(unsigned __int8*)(v3 + 344);
		else
			return 1i64;
	}
}

