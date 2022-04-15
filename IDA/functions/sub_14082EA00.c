//----- (000000014082EA00) ----------------------------------------------------
void __fastcall sub_14082EA00(__int64 a1, __int64 a2, __int64* a3, __int64 a4, int a5)
{
	_QWORD* i; // rbx
	__int64 v9; // rax
	__int64 v10; // rdi

	for (i = *(_QWORD**)(a1 + 96); i; i = (_QWORD*)*i)
	{
		v9 = i[2];
		v10 = *(_QWORD*)(v9 + 8);
		if ((!a2 || a2 == *(_QWORD*)(v9 + 72))
			&& (!a5 || a5 == *(_DWORD*)(v9 + 56))
			&& !sub_14082BFE0(a1, *(_QWORD*)(v9 + 8), a3)
			&& *(_WORD*)(v10 + 60) == 1283)
		{
			sub_1408570F0(v10);
		}
	}
}

