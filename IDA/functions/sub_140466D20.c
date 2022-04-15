//----- (0000000140466D20) ----------------------------------------------------
__int64 __fastcall sub_140466D20(__int64 a1, int a2)
{
	__int64 v3; // rcx
	__int64 v6; // rdi
	__int64 v7; // rcx
	int v8; // eax
	__int64 v9; // rcx
	int v10[3]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v11; // [rsp+3Ch] [rbp-1Ch]
	__int64 v12; // [rsp+44h] [rbp-14h]
	int v13; // [rsp+4Ch] [rbp-Ch]

	v3 = *(_QWORD*)(a1 + 3264);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 80i64))(v3);
		*(_DWORD*)(a1 + 244) = 1;
		switch (a2)
		{
		case 20:
			sub_1404718E0(a1, 0, 0, 1, 1);
			sub_140472D80(a1);
			return 0i64;
		case 1:
			sub_140472E10(a1);
			return 0i64;
		case 56:
			v6 = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 3264) + 112i64))(
				*(_QWORD*)(a1 + 3264),
				56i64,
				0i64);
			if (v6)
			{
				v7 = *(_QWORD*)(a1 + 272);
				if (v7 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v7 + 24i64))(v7) == 167)
				{
					v8 = sub_1401AE6F0(0, -1);
					v10[0] = 1118;
				}
				else
				{
					v9 = *(_QWORD*)(a1 + 272);
					if (!v9 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 24i64))(v9) != 166)
						return 0i64;
					v8 = sub_1401AE6F0(0, -1);
					v10[0] = 1120;
				}
				v10[1] = v8;
				v11 = 0i64;
				v12 = 0i64;
				v13 = 0;
				v10[2] = 1065353216;
				(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v6 + 584i64))(v6, 0i64, v10);
			}
			break;
		}
	}
	return 0i64;
}

