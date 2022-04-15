//----- (0000000140781860) ----------------------------------------------------
void __fastcall sub_140781860(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
	double v7; // xmm6_8
	unsigned int v8; // eax
	int v9; // ecx

	v7 = (double)(a3 + *(_DWORD*)(a1 + 100) - *(_DWORD*)(a1 + 8)) * 0.001 * *(float*)(a1 + 104) + *(float*)(a1 + 72);
	(*(void(__fastcall**)(_QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _DWORD, __int64, _DWORD))(**(_QWORD**)(a1 + 56) + 144i64))(
		*(_QWORD*)(a1 + 56),
		**(_QWORD**)(a1 + 56),
		a4,
		a5,
		0i64,
		0i64,
		a6,
		0i64,
		0i64,
		0i64,
		*(_DWORD*)(a1 + 96),
		a1 + 80,
		*(_DWORD*)(a1 + 68));
	v8 = *(_DWORD*)(a1 + 96);
	if (v8 <= 0xA)
	{
		v9 = 1545;
		if (_bittest(&v9, v8))
		{
			if (v7 >= 1.0)
			{
				if (*(_QWORD*)(a1 + 24))
					sub_14079AB20(*(_QWORD*)(a1 + 16), a1);
			}
		}
	}
}

