//----- (00000001404DE080) ----------------------------------------------------
__int64 __fastcall sub_1404DE080(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax
	__int64 v5; // rcx
	int* v6; // rax
	__int64 v7; // rdx
	_QWORD* v9; // rax
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]

	if (!sub_140444550(qword_140C658F0, a2))
		return 0i64;
	v4 = sub_1402096E0(a2);
	if (!v4)
		return 0i64;
	v6 = (int*)sub_14034BDD0(v5, *(_DWORD*)(v4 + 176));
	if (v6)
	{
		v7 = 0i64;
		if (*(_WORD*)v6)
		{
			do
				++v7;
			while (*((_WORD*)v6 + v7));
		}
		sub_14001C480(a1 + 120, v6, (int*)((char*)v6 + 2 * v7));
		return *(_QWORD*)(a1 + 128);
	}
	else
	{
		v9 = sub_14018EFA0(&v10, (__int64)L"##-- Item %d not found -##", a2);
		if (v9 != (_QWORD*)(a1 + 120))
			sub_14001C480(a1 + 120, (int*)v9[1], (int*)v9[2]);
		if (v11)
			sub_14018B900(v11, 0);
		return *(_QWORD*)(a1 + 128);
	}
}
// 1404DE0B9: variable 'v5' is possibly undefined
// 140B0AD18: using guessed type wchar_t aItemDNotFound[27];
// 140C658F0: using guessed type __int64 qword_140C658F0;

