//----- (00000001401A6B00) ----------------------------------------------------
void __fastcall sub_1401A6B00(_QWORD* a1)
{
	bool v1; // zf
	__int64 v3; // rax
	__int64 v4; // rsi
	__int64 v5; // rbp
	__int64 v6; // rdi

	v1 = a1[12] == 0i64;
	*a1 = off_140B5EBA0;
	if (!v1)
	{
		do
		{
			v3 = a1[12];
			v4 = v3;
			v5 = *(_QWORD*)(v3 + 56);
			if (v3)
			{
				v6 = *(_QWORD*)(v3 + 64);
				(**(void(__fastcall***)(__int64, _QWORD))v3)(v3, 0i64);
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 24i64))(v6, v4);
			}
			a1[12] = v5;
		} while (v5);
	}
	sub_1401A5900((__int64)a1);
}
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();

