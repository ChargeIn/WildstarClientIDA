//----- (000000014045AE10) ----------------------------------------------------
__int64 __fastcall sub_14045AE10(__int64 a1)
{
	__int64 i; // rdx
	__int64 v3; // rax
	__int64 j; // rdx
	__int64 v6; // rcx

	for (i = *(_QWORD*)(a1 + 5568); i; i = *(_QWORD*)(i + 16))
	{
		v3 = *(_QWORD*)(i + 456);
		if (v3)
		{
			while (*(_DWORD*)(a1 + 8) != *(_DWORD*)(v3 + 900)
				|| *(_DWORD*)(v3 + 676)
				|| (*(_DWORD*)(v3 + 896) & 0x200) != 0)
			{
				v3 = *(_QWORD*)(v3 + 8);
				if (!v3)
					goto LABEL_8;
			}
			return 1i64;
		}
	LABEL_8:
		;
	}
	for (j = *(_QWORD*)(a1 + 5576); ; j = *(_QWORD*)(j + 24))
	{
		if (!j)
			return 0i64;
		v6 = *(_QWORD*)(*(_QWORD*)(j + 56) + 456i64);
		if (v6)
			break;
	LABEL_17:
		;
	}
	while (*(_DWORD*)(a1 + 8) != *(_DWORD*)(v6 + 900) || *(_DWORD*)(v6 + 676) || (*(_DWORD*)(v6 + 896) & 0x200) != 0)
	{
		v6 = *(_QWORD*)(v6 + 8);
		if (!v6)
			goto LABEL_17;
	}
	return 1i64;
}

