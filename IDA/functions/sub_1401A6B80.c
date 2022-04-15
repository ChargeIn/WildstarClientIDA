//----- (00000001401A6B80) ----------------------------------------------------
__int64 __fastcall sub_1401A6B80(__int64 a1, _WORD* a2)
{
	__int64 v2; // rdi
	_WORD* v4; // rbx
	_WORD* v5; // rax
	int v6; // ecx
	bool v7; // zf

	v2 = *(_QWORD*)(a1 + 96);
	if (!v2)
		return 0i64;
	while (1)
	{
		v4 = a2;
		v5 = (_WORD*)sub_1401A4F40(v2 + 8);
		if (v5 == a2)
			return v2;
		v6 = 0;
		if (*v5)
		{
			do
			{
				if (!*v4 || *v5 != *v4)
					break;
				v7 = v6 == 0x7FFFFFFF;
				if (v6 == 0x7FFFFFFF)
					goto LABEL_9;
				++v5;
				++v4;
				++v6;
			} while (*v5);
			v7 = v6 == 0x7FFFFFFF;
		LABEL_9:
			if (v7)
				return v2;
		}
		if (!*v5 && !*v4)
			return v2;
		v2 = *(_QWORD*)(v2 + 56);
		if (!v2)
			return 0i64;
	}
}

