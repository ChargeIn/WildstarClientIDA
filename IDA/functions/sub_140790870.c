//----- (0000000140790870) ----------------------------------------------------
unsigned __int64 __fastcall sub_140790870(unsigned __int64 a1, unsigned __int64 a2, char* a3, unsigned __int64 a4)
{
	unsigned __int64 v5; // rdi
	unsigned __int64 v7; // rbp
	__int64 v8; // rsi
	__int64 v9; // rax
	__int64 v10; // rbx
	unsigned __int64 v11; // rdi
	bool v12; // zf

	v5 = a1;
	if (!a4)
		return a1;
	if (a4 > a2)
		return 0i64;
	v7 = a4 - 1;
	v8 = a2 - (a4 - 1);
	if (v8)
	{
		do
		{
			v9 = sub_140901008(v5, *a3, v8);
			if (!v9)
				break;
			v10 = v9 + 1;
			if (!(unsigned int)sub_1407E6AF0((unsigned __int64*)(v9 + 1), (__int64)(a3 + 1), v7))
				return v10 - 1;
			v11 = v5 - v10;
			v12 = v11 + v8 == 0;
			v8 += v11;
			v5 = v10;
		} while (!v12);
	}
	return 0i64;
}

