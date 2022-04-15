//----- (0000000140156C20) ----------------------------------------------------
__int64 __fastcall sub_140156C20(_QWORD* a1)
{
	_QWORD* v1; // rax
	_QWORD* v2; // rbx
	__int64 v4; // rdi
	__int64 v5; // rcx
	_QWORD* v6; // rax
	_QWORD* v7; // rbx
	__int64* v8; // rdi
	__int64 v9; // rax
	_QWORD* v10; // rax
	_QWORD* v11; // rbx
	__int64* v12; // rcx
	__int64 v13; // rax
	_QWORD** v14; // rax
	_QWORD* v15; // rbx
	__int64 v16; // rcx
	_QWORD** v17; // rax
	_QWORD* v18; // rbx
	__int64 v19; // rcx
	_QWORD** v20; // rax
	_QWORD* v21; // rbx
	__int64 v22; // rcx
	_QWORD** v23; // rax
	_QWORD* v24; // rbx
	__int64 v25; // rcx
	__int64 result; // rax

	v1 = (_QWORD*)a1[7];
	v2 = (_QWORD*)*v1;
	if ((_QWORD*)*v1 != v1)
	{
		do
		{
			v4 = v2[2];
			sub_1400C6B20(v4);
			*(_QWORD*)(v4 + 32) = 0i64;
			v5 = v2[2];
			if (v5)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
				v2[2] = 0i64;
			}
			v2 = (_QWORD*)*v2;
		} while (v2 != (_QWORD*)a1[7]);
	}
	v6 = (_QWORD*)a1[11];
	v7 = (_QWORD*)*v6;
	if ((_QWORD*)*v6 != v6)
	{
		do
		{
			v8 = (__int64*)v7[2];
			sub_1400C6B20((__int64)v8);
			v9 = *v8;
			v8[4] = 0i64;
			(*(void(__fastcall**)(__int64*))(v9 + 8))(v8);
			v7 = (_QWORD*)*v7;
		} while (v7 != (_QWORD*)a1[11]);
	}
	v10 = (_QWORD*)a1[9];
	v11 = (_QWORD*)*v10;
	if ((_QWORD*)*v10 != v10)
	{
		do
		{
			v12 = (__int64*)v11[2];
			v13 = *v12;
			v12[4] = 0i64;
			(*(void (**)(void))(v13 + 8))();
			v11 = (_QWORD*)*v11;
		} while (v11 != (_QWORD*)a1[9]);
	}
	v14 = (_QWORD**)a1[7];
	v15 = *v14;
	if (*v14 != v14)
	{
		do
		{
			v16 = (__int64)v15;
			v15 = (_QWORD*)*v15;
			sub_14018B900(v16, 0);
		} while (v15 != (_QWORD*)a1[7]);
	}
	*(_QWORD*)a1[7] = a1[7];
	*(_QWORD*)(a1[7] + 8i64) = a1[7];
	v17 = (_QWORD**)a1[9];
	v18 = *v17;
	if (*v17 != v17)
	{
		do
		{
			v19 = (__int64)v18;
			v18 = (_QWORD*)*v18;
			sub_14018B900(v19, 0);
		} while (v18 != (_QWORD*)a1[9]);
	}
	*(_QWORD*)a1[9] = a1[9];
	*(_QWORD*)(a1[9] + 8i64) = a1[9];
	v20 = (_QWORD**)a1[11];
	v21 = *v20;
	if (*v20 != v20)
	{
		do
		{
			v22 = (__int64)v21;
			v21 = (_QWORD*)*v21;
			sub_14018B900(v22, 0);
		} while (v21 != (_QWORD*)a1[11]);
	}
	*(_QWORD*)a1[11] = a1[11];
	*(_QWORD*)(a1[11] + 8i64) = a1[11];
	v23 = (_QWORD**)a1[13];
	v24 = *v23;
	if (*v23 != v23)
	{
		do
		{
			v25 = (__int64)v24;
			v24 = (_QWORD*)*v24;
			sub_14018B900(v25, 0);
		} while (v24 != (_QWORD*)a1[13]);
	}
	*(_QWORD*)a1[13] = a1[13];
	result = a1[13];
	*(_QWORD*)(result + 8) = result;
	return result;
}

