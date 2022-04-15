//----- (00000001401A5AE0) ----------------------------------------------------
__int64 __fastcall sub_1401A5AE0(__int64 a1, _WORD* a2)
{
	__int64 v2; // rbx
	__int64 v4; // rax
	__int64 v5; // rdi
	_WORD* v6; // rax
	_WORD* v7; // rdx
	int v8; // ecx
	bool v9; // zf

	v2 = *(_QWORD*)(a1 + 48);
	if (!v2)
		return 0i64;
	while (1)
	{
		v4 = (**(__int64(__fastcall***)(__int64))v2)(v2);
		v5 = v4;
		if (v4)
		{
			if (!a2)
				return v5;
			v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 48i64))(v4) ? 0i64 : (_WORD*)sub_1401A4F40(v5 + 24);
			v7 = a2;
			if (v6 == a2)
				return v5;
			v8 = 0;
			if (*v6)
			{
				do
				{
					if (!*v7 || *v6 != *v7)
						break;
					v9 = v8 == 0x7FFFFFFF;
					if (v8 == 0x7FFFFFFF)
						goto LABEL_14;
					++v6;
					++v7;
					++v8;
				} while (*v6);
				v9 = v8 == 0x7FFFFFFF;
			LABEL_14:
				if (v9)
					return v5;
			}
			if (!*v6 && !*v7)
				return v5;
		}
		v2 = *(_QWORD*)(v2 + 72);
		if (!v2)
			return 0i64;
	}
}

