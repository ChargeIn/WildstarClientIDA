//----- (0000000140931CE0) ----------------------------------------------------
__int64 __fastcall sub_140931CE0(unsigned int* a1, int a2, int a3, int a4, int a5)
{
	__int64 result; // rax
	int v10; // ebp
	int v11; // ecx
	int v12; // r14d
	_QWORD* v13; // rax
	_BYTE* v14; // rcx
	int v15; // edi
	_QWORD* v16; // rax
	char* v17; // rax
	_QWORD* v18; // rax
	_QWORD* v19; // rax
	_QWORD* v20; // rcx
	_QWORD* v21; // rax
	_QWORD* v22; // rax
	_QWORD* v23; // rax
	_QWORD* v24; // rax

	result = *a1;
	if (!(_DWORD)result)
	{
		a1[18] = a3;
		a1[19] = a4;
		a1[27] = 0;
		v10 = 8 * a4 + 8;
		v11 = a4;
		if (a4 >= 4)
			v11 = 2 * a4 - 3;
		if (a3 >= 5)
		{
			v11 += 2;
			v10 = 8 * a4 + 16;
		}
		v12 = v11 + a2 + 2 * a2;
		if (v12 > 0)
		{
			v13 = sub_14092D610((__int64)a1, v12 + 1);
			if (!v13)
				return *a1;
			*(_BYTE*)v13 = v12;
			v14 = (char*)v13 + 1;
			*((_QWORD*)a1 + 11) += v12;
			if (a4 >= 5)
			{
				*(_WORD*)v14 = 22337;
				v14 = (char*)v13 + 3;
			}
			if (a4 >= 4)
			{
				*(_WORD*)v14 = 22081;
				v14 += 2;
			}
			if (a4 >= 3)
				*v14++ = 87;
			if (a4 >= 2)
				*v14++ = 86;
			if (a4 >= 1)
				*v14++ = 83;
			if (a3 >= 5)
			{
				*(_WORD*)v14 = 21825;
				v14 += 2;
			}
			if (a2 > 0)
			{
				*(_WORD*)v14 = -29880;
				v14[2] = -39;
				v14 += 3;
			}
			if (a2 > 1)
			{
				*(_WORD*)v14 = -29880;
				v14[2] = -14;
				v14 += 3;
			}
			if (a2 > 2)
			{
				*(_WORD*)v14 = -29879;
				v14[2] = -8;
			}
		}
		v15 = ((v10 + a5 + 63) & 0xFFFFFFF0) - v10;
		a1[20] = v15;
		if (v15 > 1024)
		{
			v16 = sub_14092D610((__int64)a1, 12i64);
			if (!v16)
				return *a1;
			*(_BYTE*)v16 = 11;
			*((_QWORD*)a1 + 11) += 11i64;
			*(_WORD*)((char*)v16 + 1) = -31928;
			*((_BYTE*)v16 + 3) = -20;
			if ((v10 & 8) != 0)
			{
				*((_BYTE*)v16 + 4) = 40;
				v17 = (char*)v16 + 5;
				v15 -= 40;
			}
			else
			{
				*((_BYTE*)v16 + 4) = 32;
				v17 = (char*)v16 + 5;
				v15 -= 32;
			}
			*(_WORD*)v17 = -14520;
			v17[2] = -64;
			*(_DWORD*)(v17 + 3) = v15;
			if (*a1)
				return *a1;
			if (a1[27])
				a1[27] = 0;
			v18 = sub_14092D610((__int64)a1, 4i64);
			if (v18)
			{
				*(_BYTE*)v18 = 3;
				*((_QWORD*)a1 + 11) += 3i64;
				*(_WORD*)((char*)v18 + 1) = -29880;
				*((_BYTE*)v18 + 3) = -56;
			}
			else
			{
				result = *a1;
				if ((_DWORD)result)
					return result;
			}
			v19 = sub_14092D590((__int64)a1, 32i64);
			if (!v19)
				goto LABEL_43;
			*v19 = 0i64;
			v19[2] = 2i64;
			v20 = (_QWORD*)*((_QWORD*)a1 + 5);
			if (v20)
				*v20 = v19;
			else
				*((_QWORD*)a1 + 2) = v19;
			*((_QWORD*)a1 + 5) = v19;
			v19[3] = sub_140933950;
			*((_QWORD*)a1 + 11) += 13i64;
			v21 = sub_14092D610((__int64)a1, 2i64);
			if (!v21)
			{
			LABEL_43:
				*a1 = 2;
				return *a1;
			}
			*(_WORD*)v21 = 7424;
		}
		if (v15 > 127)
		{
			v23 = sub_14092D610((__int64)a1, 8i64);
			if (!v23)
				return *a1;
			*(_BYTE*)v23 = 7;
			*((_QWORD*)a1 + 11) += 7i64;
			*(_WORD*)((char*)v23 + 1) = -32440;
			*((_BYTE*)v23 + 3) = -20;
			*((_DWORD*)v23 + 1) = v15;
		}
		else
		{
			v22 = sub_14092D610((__int64)a1, 5i64);
			if (!v22)
				return *a1;
			*(_BYTE*)v22 = 4;
			*((_QWORD*)a1 + 11) += 4i64;
			*(_WORD*)((char*)v22 + 1) = -31928;
			*((_BYTE*)v22 + 3) = -20;
			*((_BYTE*)v22 + 4) = v15;
		}
		v24 = sub_14092D610((__int64)a1, 6i64);
		if (v24)
		{
			*(_BYTE*)v24 = 5;
			*((_QWORD*)a1 + 11) += 5i64;
			*((_BYTE*)v24 + 1) = 15;
			*(_DWORD*)((char*)v24 + 2) = 539259945;
			return 0i64;
		}
		return *a1;
	}
	return result;
}

