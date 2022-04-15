//----- (00000001408398B0) ----------------------------------------------------
__int64 __fastcall sub_1408398B0(__int64 a1)
{
	int v2; // edx
	unsigned int v3; // edx
	__int64 v4; // rax
	__int64 v5; // rdi

	*(_DWORD*)(a1 + 204) = 0;
	if (*(_DWORD*)(a1 + 96))
	{
		v2 = *(_DWORD*)(a1 + 136);
		*(_DWORD*)(a1 + 96) = 0;
		*(_DWORD*)(a1 + 200) = 0;
		sub_14082B920((__int64)qword_140C61B68, v2);
		v3 = *(_DWORD*)(a1 + 152);
		if (v3)
		{
			v4 = sub_140830F00(qword_140C61BA8, v3, 0);
			v5 = v4;
			if (v4)
			{
				(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD*)v4 + 152i64))(
					v4,
					*(_QWORD*)(a1 + 104),
					v4,
					*(unsigned int*)(a1 + 136));
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 16i64))(v5);
			}
		}
	}
	return 1i64;
}

