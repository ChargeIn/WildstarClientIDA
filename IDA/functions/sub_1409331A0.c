//----- (00000001409331A0) ----------------------------------------------------
__int64 __fastcall sub_1409331A0(unsigned int* a1, int a2, int a3, __int64 a4)
{
	__int64 result; // rax
	_QWORD* v6; // rax
	_QWORD* v7; // rax
	_QWORD* v8; // rax
	int v9; // eax
	int v10; // edi
	_QWORD* v11; // rax
	_BYTE* v12; // rcx

	result = *a1;
	if ((_DWORD)result)
		return result;
	a1[27] = 0;
	if (a2 && (a3 != 1 || a2 != 6 && a2 != 13) && (unsigned int)sub_140932690(a1, a2, 1, 0i64, a3, a4))
		return *a1;
	v6 = sub_14092D610((__int64)a1, 6i64);
	if (!v6)
		return *a1;
	*(_BYTE*)v6 = 5;
	*((_QWORD*)a1 + 11) += 5i64;
	*((_BYTE*)v6 + 1) = 15;
	*(_DWORD*)((char*)v6 + 2) = 539259944;
	if ((int)a1[20] > 127)
	{
		v8 = sub_14092D610((__int64)a1, 8i64);
		if (v8)
		{
			*(_BYTE*)v8 = 7;
			*((_QWORD*)a1 + 11) += 7i64;
			*(_WORD*)((char*)v8 + 1) = -32440;
			*((_BYTE*)v8 + 3) = -60;
			*((_DWORD*)v8 + 1) = a1[20];
			goto LABEL_14;
		}
		return *a1;
	}
	v7 = sub_14092D610((__int64)a1, 5i64);
	if (!v7)
		return *a1;
	*(_BYTE*)v7 = 4;
	*((_QWORD*)a1 + 11) += 4i64;
	*(_WORD*)((char*)v7 + 1) = -31928;
	*((_BYTE*)v7 + 3) = -60;
	*((_BYTE*)v7 + 4) = *((_BYTE*)a1 + 80);
LABEL_14:
	v9 = a1[19];
	v10 = v9 + 1;
	if (v9 >= 4)
		v10 = v9 + v9 - 2;
	if ((int)a1[18] >= 5)
		v10 += 2;
	v11 = sub_14092D610((__int64)a1, v10 + 1);
	if (!v11)
		return *a1;
	*(_BYTE*)v11 = v10;
	v12 = (char*)v11 + 1;
	*((_QWORD*)a1 + 11) += v10;
	if ((int)a1[18] >= 5)
	{
		*(_WORD*)v12 = 23873;
		v12 = (char*)v11 + 3;
	}
	if ((int)a1[19] >= 1)
		*v12++ = 91;
	if ((int)a1[19] >= 2)
		*v12++ = 94;
	if ((int)a1[19] >= 3)
		*v12++ = 95;
	if ((int)a1[19] >= 4)
	{
		*(_WORD*)v12 = 24129;
		v12 += 2;
	}
	if ((int)a1[19] >= 5)
	{
		*(_WORD*)v12 = 24385;
		v12 += 2;
	}
	*v12 = -61;
	return 0i64;
}

