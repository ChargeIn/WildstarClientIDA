//----- (000000014017FB70) ----------------------------------------------------
__int64 __fastcall sub_14017FB70(_QWORD* a1)
{
	__int64 v2; // rdi
	unsigned int v3; // eax
	__int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // r8
	unsigned __int64 v7; // rax
	unsigned __int64* v8; // rbx
	_WORD* v9; // rdx
	_WORD* v10; // rcx
	__int64 v11; // rax
	unsigned __int64 v12; // rax

	v2 = sub_14017F690(a1);
	if (v2)
	{
		v3 = sub_140056D60(a1, 2u);
		v4 = sub_140203DA0(v3);
		v5 = v4;
		if (v4)
		{
			v6 = sub_140203520(*(_DWORD*)(v4 + 20));
			if (v6)
			{
				v7 = *(_QWORD*)(v5 + 48);
				v8 = (unsigned __int64*)(v5 + 48);
				v9 = 0i64;
				v10 = 0i64;
				if (v7 && v7 <= qword_140C3FE70)
					v10 = (_WORD*)(qword_140C3FE68 + v7);
				v11 = 0i64;
				if (!*v10)
					goto LABEL_10;
				do
					++v11;
				while (v10[v11]);
				if (!v11)
					LABEL_10:
				v8 = (unsigned __int64*)(v6 + 8);
				v12 = *v8;
				if (*v8 && v12 <= qword_140C3FE70)
					v9 = (_WORD*)(qword_140C3FE68 + v12);
				sub_14017E490(v2, v9);
			}
		}
	}
	return 0i64;
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

