//----- (000000014019C3A0) ----------------------------------------------------
void __fastcall sub_14019C3A0(__int64* a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	void(__fastcall * **v4)(_QWORD, __int64); // rcx
	_QWORD** v5; // rax
	_QWORD* v6; // rbx
	__int64 v7; // rcx
	_QWORD** v8; // rax
	_QWORD* v9; // rbx
	__int64 v10; // rsi
	__int64 v11; // rcx
	_QWORD** v12; // rax
	_QWORD* v13; // rbx
	__int64 v14; // rsi
	__int64 v15; // rcx
	_QWORD** v16; // rax
	_QWORD* v17; // rbx
	__int64 v18; // rcx

	sub_140008410((__int64)(a1 + 1));
	v2 = (_QWORD*)a1[6];
	v3 = (_QWORD*)*v2;
	if ((_QWORD*)*v2 != v2)
	{
		do
		{
			v4 = (void(__fastcall***)(_QWORD, __int64))v3[2];
			if (v4)
				(**v4)(v4, 1i64);
			v3 = (_QWORD*)*v3;
		} while (v3 != (_QWORD*)a1[6]);
	}
	v5 = (_QWORD**)a1[6];
	v6 = *v5;
	if (*v5 != v5)
	{
		do
		{
			v7 = (__int64)v6;
			v6 = (_QWORD*)*v6;
			sub_14018B900(v7, 0);
		} while (v6 != (_QWORD*)a1[6]);
	}
	*(_QWORD*)a1[6] = a1[6];
	*(_QWORD*)(a1[6] + 8) = a1[6];
	v8 = (_QWORD**)a1[8];
	v9 = *v8;
	if (*v8 != v8)
	{
		do
		{
			v10 = (__int64)v9;
			v9 = (_QWORD*)*v9;
			v11 = *(_QWORD*)(v10 + 24);
			if (v11)
				sub_14018B900(v11, 0);
			sub_14018B900(v10, 0);
		} while (v9 != (_QWORD*)a1[8]);
	}
	*(_QWORD*)a1[8] = a1[8];
	*(_QWORD*)(a1[8] + 8) = a1[8];
	v12 = (_QWORD**)a1[8];
	v13 = *v12;
	if (*v12 != v12)
	{
		do
		{
			v14 = (__int64)v13;
			v13 = (_QWORD*)*v13;
			v15 = *(_QWORD*)(v14 + 24);
			if (v15)
				sub_14018B900(v15, 0);
			sub_14018B900(v14, 0);
		} while (v13 != (_QWORD*)a1[8]);
	}
	*(_QWORD*)a1[8] = a1[8];
	*(_QWORD*)(a1[8] + 8) = a1[8];
	sub_14018B900(a1[8], 0);
	v16 = (_QWORD**)a1[6];
	v17 = *v16;
	if (*v16 != v16)
	{
		do
		{
			v18 = (__int64)v17;
			v17 = (_QWORD*)*v17;
			sub_14018B900(v18, 0);
		} while (v17 != (_QWORD*)a1[6]);
	}
	*(_QWORD*)a1[6] = a1[6];
	*(_QWORD*)(a1[6] + 8) = a1[6];
	sub_14018B900(a1[6], 0);
	sub_140008410((__int64)(a1 + 1));
	sub_14018B900(a1[2], 0);
}

