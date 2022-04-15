//----- (0000000140444EB0) ----------------------------------------------------
__int64 sub_140444EB0()
{
	int* v1; // rax
	int* v2; // rbx
	int v3; // edx
	int v4; // edi

	if (qword_140C658F0)
		return 0i64;
	v1 = sub_14018B280(448i64, 0);
	v2 = v1;
	if (v1)
	{
		sub_1400B5470((__int64)v1);
		*(_QWORD*)v2 = off_140B66FA0;
	}
	else
	{
		v2 = 0i64;
	}
	v4 = sub_140444240((__int64)v2);
	if (v4 >= 0)
		v4 = sub_1404422F0((__int64)v2, v3);
	if (v4 >= 0)
	{
		qword_140C658F0 = (__int64)v2;
		return 0i64;
	}
	else
	{
		if (v2)
			(**(void(__fastcall***)(int*, __int64))v2)(v2, 1i64);
		return (unsigned int)v4;
	}
}
// 140444F0A: variable 'v3' is possibly undefined
// 140B66FA0: using guessed type __int64 (__fastcall *off_140B66FA0[39])();
// 140C658F0: using guessed type __int64 qword_140C658F0;

