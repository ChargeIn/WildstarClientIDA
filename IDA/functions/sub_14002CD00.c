//----- (000000014002CD00) ----------------------------------------------------
void __fastcall sub_14002CD00(__int64* a1)
{
	__int64 v2; // rcx
	_QWORD* v3; // rax
	_QWORD* v4; // rbx
	__int64 v5; // rsi
	_QWORD** v6; // rax
	_QWORD* v7; // rbx
	__int64 v8; // rcx

	v2 = *a1;
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*a1 = 0i64;
	}
	v3 = (_QWORD*)a1[2];
	v4 = (_QWORD*)*v3;
	if ((_QWORD*)*v3 != v3)
	{
		do
		{
			v5 = v4[2];
			if (v5)
			{
				sub_14002CBC0(v4[2]);
				sub_14018B900(v5, 0);
			}
			v4 = (_QWORD*)*v4;
		} while (v4 != (_QWORD*)a1[2]);
	}
	v6 = (_QWORD**)a1[2];
	v7 = *v6;
	if (*v6 != v6)
	{
		do
		{
			v8 = (__int64)v7;
			v7 = (_QWORD*)*v7;
			sub_14018B900(v8, 0);
		} while (v7 != (_QWORD*)a1[2]);
	}
	*(_QWORD*)a1[2] = a1[2];
	*(_QWORD*)(a1[2] + 8) = a1[2];
	sub_14018B900(a1[2], 0);
}

