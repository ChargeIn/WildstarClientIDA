//----- (00000001402EC590) ----------------------------------------------------
__int64 __fastcall sub_1402EC590(__int64 a1, __int64* a2)
{
	__int64 v2; // rdi
	int* v4; // rax
	__int64 v5; // rbx
	int v6; // edi

	v2 = qword_140C65800;
	v4 = sub_14018B280(1616i64, 0);
	if (v4)
		v5 = sub_14030FE50((__int64)v4);
	else
		v5 = 0i64;
	v6 = sub_1403102B0(v5, v2);
	if (v6 >= 0)
	{
		*a2 = v5;
		return 0i64;
	}
	else
	{
		if (v5)
		{
			sub_14030FFF0(v5);
			sub_14018B900(v5, 0);
		}
		return (unsigned int)v6;
	}
}
// 140C65800: using guessed type __int64 qword_140C65800;

