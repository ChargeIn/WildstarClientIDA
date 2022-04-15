//----- (00000001406646C0) ----------------------------------------------------
__int64 __fastcall sub_1406646C0(_QWORD* a1)
{
	int v1; // edi
	__int64 v3; // r14
	_DWORD* v4; // rcx
	__int64 v5; // rbx
	int v6; // eax
	int v7; // esi
	int* v8; // rdx
	__int64 v9; // rdi
	__int64 v10; // rbp

	v1 = 1;
	v3 = sub_140056AB0(a1, 1u);
	if (v3)
	{
		v4 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v4 = (_DWORD*)(a1[3] + 16i64);
		v5 = 0i64;
		v6 = v4[2];
		if (!v6 || v6 == 1 && !*v4)
			v1 = 0;
		v7 = dword_140C65C38;
		if (v1)
		{
			v8 = (int*)&unk_1409F491C;
			if (*(_QWORD*)(qword_140C65898 + 136))
				v8 = *(int**)(qword_140C65898 + 136);
			if (*(_WORD*)v8)
			{
				do
					++v5;
				while (*((_WORD*)v8 + v5));
			}
			sub_14001C480((__int64)&unk_140C7E820, v8, (int*)((char*)v8 + 2 * v5));
			LODWORD(v5) = **(_DWORD**)(*(_QWORD*)v3 + 8i64);
		}
		else
		{
			if (!sub_14002C740((__int64)&unk_140C7E820, *(_WORD**)(qword_140C65898 + 136))
				|| v7 != **(_DWORD**)(*(_QWORD*)v3 + 8i64))
			{
				return 0i64;
			}
			v9 = qword_140C7E830;
			v10 = qword_140C7E828;
			if (qword_140C7E828 != qword_140C7E830)
			{
				sub_1407DB590((int*)qword_140C7E828, (int*)qword_140C7E830, 2ui64);
				qword_140C7E830 -= 2 * ((v9 - v10) >> 1);
			}
		}
		dword_140C65C38 = v5;
		if (v7 != (_DWORD)v5)
		{
			sub_140426190(*(_QWORD*)(qword_140C65898 + 29504), v5);
			sub_140426190(*(_QWORD*)(qword_140C65898 + 29504), v7);
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65C38: using guessed type int dword_140C65C38;
// 140C7E828: using guessed type __int64 qword_140C7E828;
// 140C7E830: using guessed type __int64 qword_140C7E830;

