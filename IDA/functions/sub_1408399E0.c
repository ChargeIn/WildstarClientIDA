//----- (00000001408399E0) ----------------------------------------------------
__int64 __fastcall sub_1408399E0(__int64 a1, int a2, int a3)
{
	unsigned int v6; // edx
	__int64* v7; // rax
	__int64* v8; // rdi
	unsigned int v9; // edx
	__int64* v10; // rax
	__int64* v11; // rdi

	if (*(_DWORD*)(a1 + 96))
	{
		if (++ * (_DWORD*)(a1 + 200) == 1)
		{
			sub_14082C7E0((__int64)qword_140C61B68, *(_DWORD*)(a1 + 136));
			v6 = *(_DWORD*)(a1 + 152);
			if (v6)
			{
				v7 = (__int64*)sub_140830F00(qword_140C61BA8, v6, 0);
				v8 = v7;
				if (v7)
				{
					sub_1408539F0(v7, *(_QWORD*)(a1 + 104), *(_DWORD*)(a1 + 136), a2, a3);
					(*(void(__fastcall**)(__int64*))(*v8 + 16))(v8);
				}
			}
			v9 = *(_DWORD*)(a1 + 176);
			if (v9)
			{
				v10 = (__int64*)sub_140830F00(qword_140C61BA8, v9, 0);
				v11 = v10;
				if (v10)
				{
					sub_1408539F0(v10, *(_QWORD*)(a1 + 104), *(_DWORD*)(a1 + 136), a2, a3);
					(*(void(__fastcall**)(__int64*))(*v11 + 16))(v11);
				}
			}
		}
	}
	return 1i64;
}

