//----- (0000000140044CA0) ----------------------------------------------------
void __fastcall sub_140044CA0(__int64 a1, _QWORD* a2)
{
	_QWORD* v2; // rbx
	__int64 v4; // rcx
	_QWORD* v5; // rdi

	if (a2)
	{
		v2 = a2;
		do
		{
			sub_140044CA0(a1, v2[3]);
			v4 = v2[5];
			v5 = (_QWORD*)v2[2];
			if (v4)
				sub_14018B900(v4, 0);
			sub_14018B900((__int64)v2, 0);
			v2 = v5;
		} while (v5);
	}
}

