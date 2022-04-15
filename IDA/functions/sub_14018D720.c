//----- (000000014018D720) ----------------------------------------------------
__int64 __fastcall sub_14018D720(int* a1, int a2, __int64 a3, __int64* a4, _QWORD* a5)
{
	int* v9; // rax
	__int64 v10; // rbx
	int v11; // esi

	if (!a1 || !a4)
		return 2147942487i64;
	v9 = sub_14018B280(672i64, 0);
	if (v9)
		v10 = sub_1401B7900((__int64)v9);
	else
		v10 = 0i64;
	v11 = sub_1401B7A40(v10, a1, a2, a3, a5);
	if (v11 >= 0)
	{
		*a4 = v10;
		return 0i64;
	}
	else
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		return (unsigned int)v11;
	}
}

