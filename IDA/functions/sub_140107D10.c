//----- (0000000140107D10) ----------------------------------------------------
void __fastcall sub_140107D10(_QWORD* a1)
{
	int v1; // edi
	_QWORD* v3; // rbx
	int i; // esi
	__int64 v5; // rcx
	int v6; // esi
	_QWORD* v7; // rbx
	__int64 v8; // rcx
	_QWORD* v9; // rbx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx

	v1 = 5;
	v3 = a1 + 84;
	for (i = 5; i >= 0; --i)
	{
		v5 = *(v3 - 4);
		v3 -= 4;
		if (v5)
			sub_14018B900(v5, 0);
	}
	v6 = 5;
	v7 = a1 + 60;
	do
	{
		v8 = *(v7 - 4);
		v7 -= 4;
		if (v8)
			sub_14018B900(v8, 0);
		--v6;
	} while (v6 >= 0);
	v9 = a1 + 36;
	do
	{
		v10 = *(v9 - 4);
		v9 -= 4;
		if (v10)
			sub_14018B900(v10, 0);
		--v1;
	} while (v1 >= 0);
	v11 = a1[8];
	if (v11)
		sub_14018B900(v11, 0);
	*a1 = off_140B56BD0;
	sub_140104BC0((__int64)a1);
	v12 = a1[4];
	if (v12)
		sub_14018B900(v12, 0);
}
// 140B56BD0: using guessed type __int64 (__fastcall *off_140B56BD0[25])();

