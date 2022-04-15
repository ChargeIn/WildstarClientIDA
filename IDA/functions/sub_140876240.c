//----- (0000000140876240) ----------------------------------------------------
void __fastcall sub_140876240(__int64 a1, _QWORD** a2)
{
	_QWORD* i; // rbx
	__int64 v4; // rdi
	__int64 v5; // rcx
	__int64 v6; // rax

	if (a2)
	{
		for (i = *a2; i; i = (_QWORD*)*i)
		{
			v4 = sub_140830EE0(qword_140C61BA8, (__int64)(i + 1));
			if (v4)
			{
				v5 = *(_QWORD*)(a1 + 64);
				v6 = *(_QWORD*)(a1 + 72);
				if (v5 == v6)
				{
				LABEL_8:
					sub_140854240(v4, *(_DWORD*)(a1 + 92), 0i64);
				}
				else
				{
					while (*(_DWORD*)(v4 + 24) != *(_DWORD*)v5 || ((*(_BYTE*)(v4 + 91) & 2) != 0) != *(_BYTE*)(v5 + 4))
					{
						v5 += 8i64;
						if (v5 == v6)
							goto LABEL_8;
					}
				}
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
			}
		}
	}
}

