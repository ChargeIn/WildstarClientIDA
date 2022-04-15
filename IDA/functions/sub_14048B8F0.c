//----- (000000014048B8F0) ----------------------------------------------------
__int64 sub_14048B8F0()
{
	int* v1; // rax
	__int64 v2; // rcx
	int v3; // ebx
	__int64 v4; // rdi

	if (qword_140C65B80)
		return 0i64;
	v1 = sub_14018B280(152i64, 0);
	if (v1)
		qword_140C65B80 = (__int64)sub_1405A7910(v1);
	else
		qword_140C65B80 = 0i64;
	v3 = sub_1405A7C90(v2);
	if (v3 < 0)
	{
		v4 = qword_140C65B80;
		if (qword_140C65B80)
		{
			sub_1405A7A30(qword_140C65B80);
			sub_14018B900(v4, 0);
		}
	}
	return (unsigned int)v3;
}
// 14048B937: variable 'v2' is possibly undefined
// 140C65B80: using guessed type __int64 qword_140C65B80;

