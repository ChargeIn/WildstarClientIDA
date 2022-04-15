//----- (0000000140554F80) ----------------------------------------------------
_BYTE* __fastcall sub_140554F80(_QWORD* a1)
{
	__int64 v1; // rsi
	__int64 v3; // r14
	__int64 v4; // rdi
	_QWORD* v5; // rax
	_QWORD* v6; // rbx
	_QWORD** v7; // rax
	_QWORD* v8; // rbx
	__int64 v9; // rcx
	_BYTE* result; // rax

	v1 = 0i64;
	v3 = 11i64;
	do
	{
		v4 = v1 + a1[14];
		v5 = *(_QWORD**)(v4 + 8);
		v6 = (_QWORD*)*v5;
		if ((_QWORD*)*v5 != v5)
		{
			do
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v6[2] + 8i64))(v6[2]);
				v6 = (_QWORD*)*v6;
			} while (v6 != *(_QWORD**)(v4 + 8));
		}
		v7 = *(_QWORD***)(v4 + 8);
		v8 = *v7;
		if (*v7 != v7)
		{
			do
			{
				v9 = (__int64)v8;
				v8 = (_QWORD*)*v8;
				sub_14018B900(v9, 0);
			} while (v8 != *(_QWORD**)(v4 + 8));
		}
		v1 += 16i64;
		**(_QWORD**)(v4 + 8) = *(_QWORD*)(v4 + 8);
		*(_QWORD*)(*(_QWORD*)(v4 + 8) + 8i64) = *(_QWORD*)(v4 + 8);
		--v3;
	} while (v3);
	result = (_BYTE*)a1[10];
	if (result != (_BYTE*)a1[11])
	{
		*result = 0;
		result = (_BYTE*)a1[10];
		a1[11] = result;
	}
	return result;
}

