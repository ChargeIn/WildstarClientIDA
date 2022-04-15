//----- (0000000140952010) ----------------------------------------------------
void sub_140952010()
{
	_QWORD* v0; // rax
	_QWORD* i; // rbx
	__int64 v2; // rcx

	v0 = (_QWORD*)qword_140C7CF68;
	for (i = *(_QWORD**)qword_140C7CF68; i != (_QWORD*)qword_140C7CF68; v0 = (_QWORD*)qword_140C7CF68)
	{
		v2 = (__int64)i;
		i = (_QWORD*)*i;
		sub_14018B900(v2, 0);
	}
	*v0 = v0;
	*(_QWORD*)(qword_140C7CF68 + 8) = qword_140C7CF68;
	sub_14018B900(qword_140C7CF68, 0);
}
// 140C7CF68: using guessed type __int64 qword_140C7CF68;

