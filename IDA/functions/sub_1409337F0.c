//----- (00000001409337F0) ----------------------------------------------------
__int64 __fastcall sub_1409337F0(unsigned int* a1, int a2, __int64 a3, __int64 a4)
{
	__int64 result; // rax
	__int64 v5; // r14
	__int64 v8; // rsi
	char* v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rax
	_QWORD* v12; // rax
	_QWORD* v13; // rax

	result = *a1;
	v5 = a3;
	if ((_DWORD)result)
		return result;
	if (a2 == 267)
		v5 = a3 + 48;
	v8 = a4 + 48;
	a1[26] = 0;
	if ((unsigned __int64)(a4 + 2147483696i64) > 0xFFFFFFFF)
	{
		v10 = *((_QWORD*)a1 + 7);
		v11 = *(_QWORD*)(v10 + 8);
		if ((unsigned __int64)(v11 + 11) > 0xFF0)
		{
			v13 = (_QWORD*)off_140C1B1E0(4096i64);
			if (!v13)
			{
				*a1 = 2;
				goto LABEL_18;
			}
			*v13 = *((_QWORD*)a1 + 7);
			*((_QWORD*)a1 + 7) = v13;
			v13[1] = 11i64;
			v12 = v13 + 2;
		}
		else
		{
			*(_QWORD*)(v10 + 8) = v11 + 11;
			v12 = (_QWORD*)(v10 + v11 + 16);
		}
		if (v12)
		{
			*(_BYTE*)v12 = 10;
			*((_QWORD*)a1 + 11) += 10i64;
			*(_WORD*)((char*)v12 + 1) = -17847;
			*(_QWORD*)((char*)v12 + 3) = v8;
			return sub_14092A7D0(a1, a2, v5, 11, 0i64, 12, 0i64);
		}
	LABEL_18:
		result = *a1;
		if ((_DWORD)result)
			return result;
		return sub_14092A7D0(a1, a2, v5, 11, 0i64, 12, 0i64);
	}
	if (a4 != -48)
		return sub_14092A7D0(a1, a2, v5, 11, 0i64, 512, v8);
	if (a2)
	{
		v9 = sub_14092D140((__int64)a1, 1, 11, 0i64, a2, v5);
		if (!v9)
			return *a1;
		*v9 = -119;
	}
	return 0i64;
}
// 140C1B1E0: using guessed type __int64 (__fastcall *off_140C1B1E0)(_QWORD);

