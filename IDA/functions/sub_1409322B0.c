//----- (00000001409322B0) ----------------------------------------------------
__int64 __fastcall sub_1409322B0(unsigned int* a1, int a2, int a3, __int64 a4)
{
	__int64 result; // rax
	__int64 v5; // rbp
	int v6; // esi
	_QWORD* v9; // rax
	char* v10; // rax
	_QWORD* v11; // rax
	_QWORD* v12; // rcx
	_BYTE* v13; // rax
	char* v14; // rax
	char v15; // cl

	result = *a1;
	v5 = a4;
	v6 = a3;
	if (!(_DWORD)result)
	{
		if (a3 == 267)
			v5 = a4 + 48;
		if (a1[27])
		{
			if (a2 <= 22)
			{
				v9 = sub_14092D610((__int64)a1, 7i64);
				if (v9)
				{
					*(_BYTE*)v9 = 6;
					*((_QWORD*)a1 + 11) += 6i64;
					*(_DWORD*)((char*)v9 + 1) = 1686980765;
					*(_WORD*)((char*)v9 + 5) = -2012;
					a1[27] = 0;
				}
				else
				{
					result = *a1;
					if ((_DWORD)result)
						return result;
				}
			}
			a1[27] = 0;
		}
		if (a2 < 25)
			goto LABEL_18;
		if (v6 == 3)
		{
			v6 = 12;
			v10 = sub_14092D140((__int64)a1, 1, 3, 0i64, 12, 0i64);
			if (v10)
			{
				*v10 = -119;
			}
			else
			{
				result = *a1;
				if ((_DWORD)result)
					return result;
			}
		}
		if (!(unsigned int)sub_14091B870(a1, a2))
		{
		LABEL_18:
			if (v6 == 512)
			{
				v11 = sub_14092D590((__int64)a1, 32i64);
				if (!v11)
					goto LABEL_24;
				*v11 = 0i64;
				v11[2] = 2i64;
				v12 = (_QWORD*)*((_QWORD*)a1 + 5);
				if (v12)
					*v12 = v11;
				else
					*((_QWORD*)a1 + 2) = v11;
				*((_QWORD*)a1 + 5) = v11;
				v11[3] = v5;
				*((_QWORD*)a1 + 11) += 13i64;
				v13 = sub_14092D610((__int64)a1, 2i64);
				if (!v13)
				{
				LABEL_24:
					*a1 = 2;
					return 2i64;
				}
				*v13 = 0;
				v13[1] = a2 + 4;
				return 0i64;
			}
			a1[26] = 1;
			v14 = sub_14092D140((__int64)a1, 1, 0, 0i64, v6, v5);
			if (v14)
			{
				v15 = 32;
				if (a2 >= 23)
					v15 = 16;
				*v14 = -1;
				v14[1] |= v15;
				return 0i64;
			}
		}
		return *a1;
	}
	return result;
}

