//----- (00000001408317B0) ----------------------------------------------------
__int64 __fastcall sub_1408317B0(__int64 a1)
{
	_QWORD* v2; // rdi
	__int64 v3; // rax
	__int64 v4; // rcx

	while (*(_QWORD*)(a1 + 8))
	{
		v2 = *(_QWORD**)(a1 + 8);
		if (v2)
		{
			v3 = v2[1];
			if (v3)
			{
				*(_QWORD*)(a1 + 8) = v3;
			}
			else
			{
				*(_QWORD*)(a1 + 8) = 0i64;
				*(_QWORD*)(a1 + 16) = 0i64;
			}
			--* (_DWORD*)a1;
		}
		(*(void(__fastcall**)(_QWORD*))(*v2 + 16i64))(v2);
		sub_140831560((__int64)v2);
	}
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_DWORD*)a1 = 0;
	v4 = *(_QWORD*)(a1 + 864);
	if (v4)
		sub_140862D70(v4 + 32);
	return sub_140862B80(a1 + 32);
}

