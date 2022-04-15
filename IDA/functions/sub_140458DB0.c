//----- (0000000140458DB0) ----------------------------------------------------
__int64 __fastcall sub_140458DB0(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v4; // rbp
	unsigned int* v5; // rdi
	unsigned int v6; // esi
	__int64 v7; // rax

	if (a3)
	{
		v4 = a3;
		v5 = (unsigned int*)(a2 + 8);
		do
		{
			v6 = *v5;
			if (qword_140C63840)
			{
				v7 = qword_140C63840(off_140A6AD70, v6, qword_140C63858);
			}
			else if (dword_140C63DA4)
			{
				v7 = 0i64;
			}
			else if ((int)sub_14020B680() >= 0)
			{
				v7 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64BA8 + 24i64))(qword_140C64BA8, v6);
			}
			else
			{
				v7 = 0i64;
			}
			sub_1401DC0D0(v7);
			sub_140466D20(a1, *(v5 - 2));
			v5 += 4;
			--v4;
		} while (v4);
	}
	return 0i64;
}
// 140A6AD70: using guessed type wchar_t *off_140A6AD70[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63DA4: using guessed type int dword_140C63DA4;
// 140C64BA8: using guessed type __int64 qword_140C64BA8;

