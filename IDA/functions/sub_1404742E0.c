//----- (00000001404742E0) ----------------------------------------------------
__int64 __fastcall sub_1404742E0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rcx
	_DWORD* v5; // rcx
	bool v6; // zf
	__int64 v7; // [rsp+20h] [rbp-48h] BYREF
	_QWORD v8[3]; // [rsp+28h] [rbp-40h]
	int v9[10]; // [rsp+40h] [rbp-28h] BYREF

	if (*(_DWORD*)(a1 + 472))
	{
		v2 = *(_QWORD*)(a1 + 5864);
		if (v2)
		{
			v9[7] = 0;
			(*(void(__fastcall**)(__int64, __int64, int*))(*(_QWORD*)v2 + 592i64))(v2, 4i64, v9);
			result = *(unsigned int*)(a1 + 472);
			if (v9[0] == (_DWORD)result)
			{
				if (*(_QWORD*)(a1 + 5864))
				{
					LODWORD(v7) = 0;
					v8[1] = sub_140470D80;
					v8[0] = a1;
					v8[2] = 0i64;
					sub_140195960(a1 + 5016, 2000, (__int64)&v7, 4);
					v4 = *(_QWORD*)(a1 + 5864);
					v7 = 0i64;
					LODWORD(v8[0]) = 1065353216;
					*(_OWORD*)((char*)v8 + 4) = 0ui64;
					HIDWORD(v8[2]) = 0;
					result = (*(__int64(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v4 + 584i64))(v4, 4i64, &v7);
					v5 = *(_DWORD**)(a1 + 5600);
					if (v5)
					{
						if (v5[105])
						{
							v6 = v5[106] == 2;
							v5[105] = 0;
							if (v6 || !v5[126] || v5[127])
								result = (*(__int64(__fastcall**)(_DWORD*, __int64))(*(_QWORD*)v5 + 80i64))(v5, 1i64);
						}
					}
				}
			}
		}
	}
	*(_DWORD*)(a1 + 472) = 0;
	return result;
}

