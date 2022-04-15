//----- (0000000140606D90) ----------------------------------------------------
int* __fastcall sub_140606D90(_QWORD* a1, _QWORD* a2)
{
	int* result; // rax
	unsigned int v5; // ebx
	__int64 v6; // rax
	int v7; // edx
	int* v8; // rcx
	bool v9; // zf
	__int64 v10; // rbp
	__int64 i; // r14
	__int64 v12; // rbx
	_WORD* j; // rcx
	unsigned __int64 v14; // rbx
	__int64 v15; // rax
	_WORD* v16; // rax
	unsigned __int64 v17; // rdx
	__int64 v18; // r8
	__int16 v19; // cx

	sub_1406070A0((__int64)a1);
	*a1 = *a2;
	a1[1] = a2[1];
	a1[2] = a2[2];
	a1[3] = a2[3];
	result = (int*)*((unsigned int*)a1 + 4);
	if (!(_DWORD)result)
	{
		a1[3] = 0i64;
		return result;
	}
	v5 = *((_DWORD*)a1 + 4);
	v6 = 168i64 * v5;
	if (!is_mul_ok(v5, 0xA8ui64))
		v6 = -1i64;
	result = sub_14018B280(v6, 0);
	if (result)
	{
		v7 = v5 - 1;
		if ((int)(v5 - 1) >= 0)
		{
			v8 = result + 30;
			do
			{
				--v7;
				*(v8 - 14) = 0;
				*((_QWORD*)v8 - 6) = 0i64;
				*(_QWORD*)v8 = 0i64;
				v8[2] = 0;
				*((_QWORD*)v8 - 1) = off_140B6F2D0;
				v8[4] = 0;
				v8 += 42;
			} while (v7 >= 0);
		}
	}
	else
	{
		result = 0i64;
	}
	v9 = *((_DWORD*)a1 + 4) == 0;
	a1[3] = result;
	v10 = 0i64;
	if (!v9)
	{
		for (i = 0i64; ; i += 168i64)
		{
			sub_140606F60(i + a1[3], i + a2[3]);
			v12 = 0i64;
			for (j = *(_WORD**)(i + a1[3]); *j; ++v12)
				++j;
			v14 = v12 + 1;
			v15 = 2 * v14;
			if (!is_mul_ok(v14, 2ui64))
				v15 = -1i64;
			*(_QWORD*)(i + a1[3]) = sub_14018B280(v15, 0);
			v16 = *(_WORD**)(i + a1[3]);
			if (v14 - 1 <= 0x7FFFFFFE)
				break;
			if (v14)
				goto LABEL_26;
		LABEL_27:
			result = (int*)*((unsigned int*)a1 + 4);
			if (++v10 >= (unsigned __int64)result)
				return result;
		}
		v17 = 2147483646 - v14;
		v18 = *(_QWORD*)(i + a2[3]) - (_QWORD)v16;
		while (v17 + v14)
		{
			v19 = *(_WORD*)((char*)v16 + v18);
			if (!v19)
				break;
			*v16++ = v19;
			if (!--v14)
			{
				--v16;
				goto LABEL_26;
			}
		}
		if (!v14)
			--v16;
	LABEL_26:
		*v16 = 0;
		goto LABEL_27;
	}
	return result;
}
// 140B6F2D0: using guessed type __int64 (__fastcall *off_140B6F2D0[275])();

