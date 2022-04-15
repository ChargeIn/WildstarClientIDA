//----- (0000000140273600) ----------------------------------------------------
__int64 __fastcall sub_140273600(__int64 a1)
{
	__int64 v1; // rax
	unsigned int v2; // ebx
	__int64 v3; // rdx
	__int64 v5; // rcx

	v1 = *(_QWORD*)(a1 + 6616);
	if (v1)
	{
		v2 = 0;
		v3 = 0i64;
		if ((*(_BYTE*)(a1 + 88) & 2) == 0)
			v3 = *(_QWORD*)(a1 + 80);
		LOBYTE(v2) = (*(unsigned int(__fastcall**)(_QWORD, __int64))(*(_QWORD*)v1 + 1024i64))(*(_QWORD*)(a1 + 6616), v3) == -2005530520;
		return v2;
	}
	else
	{
		v5 = *(_QWORD*)(a1 + 6608);
		return v5 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5) == -2005530520;
	}
}

