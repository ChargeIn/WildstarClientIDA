//----- (000000014068FFF0) ----------------------------------------------------
__int64 __fastcall sub_14068FFF0(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax

	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v1 = sub_140056AB0(a1, 1u);
		if (v1)
		{
			v2 = *(_QWORD*)(v1 + 8);
			if (v2)
			{
				v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
					qword_140C65980,
					**(unsigned int**)(*(_QWORD*)(v2 + 8) + 8i64),
					0i64);
				v4 = v3;
				if (v3)
				{
					if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 40i64))(v3))
					{
						if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 104i64))(v4))
						{
							v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 40i64))(v4);
							if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 104i64))(v5))
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 504i64))(v4);
						}
					}
				}
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

