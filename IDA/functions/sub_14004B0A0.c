//----- (000000014004B0A0) ----------------------------------------------------
__int64 __fastcall sub_14004B0A0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rcx
	int v6; // esi
	__int64 v7; // rcx
	bool v8; // zf
	int v9; // eax
	_DWORD* v10; // rcx
	__int64 result; // rax
	int v12[4]; // [rsp+20h] [rbp-28h] BYREF
	int v13[6]; // [rsp+30h] [rbp-18h] BYREF

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
	{
		v3 = sub_140056AB0(a1, 1u);
		if (v3)
		{
			v4 = *(_QWORD*)(*(_QWORD*)v3 + 16i64);
			if (v4)
			{
				v5 = *(_QWORD*)(v4 + 16);
				v6 = 0;
				v12[0] = 0;
				if (v5)
				{
					if (!(*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v5 + 248i64))(v5, v12))
						goto LABEL_15;
					sub_1400493B0(v4);
				}
				if ((*(unsigned int(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v4 + 24) + 40i64))(*(_QWORD*)(v4 + 24), v12))
				{
					v7 = *(_QWORD*)(v4 + 16);
					v13[0] = 0;
					if (!v7)
					{
					LABEL_13:
						if ((*(unsigned int(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v4 + 24) + 32i64))(
							*(_QWORD*)(v4 + 24),
							v13))
						{
							v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v4 + 24) + 328i64))(*(_QWORD*)(v4 + 24)) == 0;
							v9 = 1;
							if (!v8)
								goto LABEL_16;
						}
						goto LABEL_15;
					}
					if ((*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v7 + 240i64))(v7, v13))
					{
						sub_1400493B0(v4);
						goto LABEL_13;
					}
				}
			LABEL_15:
				v9 = 0;
			LABEL_16:
				v10 = (_DWORD*)a1[2];
				v8 = v9 == 0;
				result = 1i64;
				LOBYTE(v6) = !v8;
				v10[2] = 1;
				*v10 = v6;
				a1[2] += 16i64;
				return result;
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

