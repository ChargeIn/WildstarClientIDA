//----- (00000001405A95C0) ----------------------------------------------------
void __fastcall sub_1405A95C0(__int64* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	_QWORD** v4; // rax
	_QWORD* v5; // rbx
	__int64 v6; // rcx

	v2 = a1[17];
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	v3 = a1[15];
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	sub_140008410((__int64)(a1 + 11));
	sub_14018B900(a1[12], 0);
	v4 = (_QWORD**)a1[10];
	v5 = *v4;
	if (*v4 != v4)
	{
		do
		{
			v6 = (__int64)v5;
			v5 = (_QWORD*)*v5;
			sub_14018B900(v6, 0);
		} while (v5 != (_QWORD*)a1[10]);
	}
	*(_QWORD*)a1[10] = a1[10];
	*(_QWORD*)(a1[10] + 8) = a1[10];
	sub_14018B900(a1[10], 0);
}

