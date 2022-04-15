//----- (00000001400C4170) ----------------------------------------------------
void __fastcall sub_1400C4170(__int64 a1)
{
	__int64 v2; // rcx
	_QWORD* v3; // rbx
	int i; // edi
	__int64 v5; // rcx
	__int64 v6; // rcx

	v2 = *(_QWORD*)(a1 + 312);
	if (v2)
		sub_14018B900(v2, 0);
	v3 = (_QWORD*)(a1 + 288);
	for (i = 5; i >= 0; --i)
	{
		v5 = *(v3 - 6);
		v3 -= 6;
		if (v5)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			*v3 = 0i64;
		}
		v6 = v3[3];
		if (v6)
			sub_14018B900(v6, 0);
	}
}

