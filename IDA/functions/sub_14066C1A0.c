//----- (000000014066C1A0) ----------------------------------------------------
__int64 __fastcall sub_14066C1A0(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rcx
	unsigned int v3; // eax
	__int64 v4; // rax
	_DWORD* v5; // rbx
	int v6; // eax
	int v7; // eax
	int v9; // [rsp+38h] [rbp+10h] BYREF

	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v1 = sub_140056AB0(a1, 1u);
		if (v1)
		{
			v2 = *(_QWORD*)(v1 + 8);
			if (v2)
			{
				v3 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 8) + 48i64))(*(_QWORD*)(v2 + 8));
				v4 = sub_14048D310(qword_140C65990, v3);
				v5 = (_DWORD*)v4;
				if (v4)
				{
					if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 72i64))(v4))
					{
						v6 = v5[4];
						if ((v6 & 0x40000000) == 0 || v5[5] != v6)
						{
							v7 = v6 | 0x40000000;
							v5[5] |= v7;
							v5[4] = v7;
							v9 = 0;
							v9 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v5 + 16i64))(v5);
							sub_1403F4900(qword_140C65898, 0x105u, (__int64)&v9);
						}
					}
				}
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65990: using guessed type __int64 qword_140C65990;

