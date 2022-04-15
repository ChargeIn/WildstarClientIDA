//----- (000000014091C090) ----------------------------------------------------
_QWORD* __fastcall sub_14091C090(__int64 a1, int a2, _QWORD* a3, int a4)
{
	unsigned int* v4; // rbx
	_QWORD* v8; // r14
	_QWORD* v9; // rax
	__int64 v10; // rcx
	_QWORD* result; // rax
	__int16 v12; // si
	_QWORD* v13; // rsi

	v4 = *(unsigned int**)a1;
	if (a2 == 1)
	{
		v8 = sub_140932450(*(_QWORD*)a1, 23);
		if (!*v4)
		{
			v9 = sub_14092D590((__int64)v4, 16i64);
			if (v9)
			{
				v10 = *(_QWORD*)(a1 + 272);
				*v9 = v8;
				v9[1] = v10;
				*(_QWORD*)(a1 + 272) = v9;
			}
		}
		result = sub_140932450((__int64)v4, a4 != 0);
	}
	else
	{
		HIBYTE(v12) = 0;
		if (a2 == 2)
		{
			sub_140932A90(v4, 539, 0, 0i64, 1, 0i64, 512, 13i64);
			sub_140932FC0(v4, 6, 3, 0i64, 0, 0, 0);
			sub_140932A90(v4, 539, 0, 0i64, 1, 0i64, 512, 10i64);
			sub_140932FC0(v4, 543, 3, 0i64, 3, 0, 0);
			LOBYTE(v12) = a4 != 0;
			result = sub_140932450((__int64)v4, v12);
		}
		else
		{
			LOBYTE(v12) = a4 == 0;
			result = sub_140931B80(*(unsigned int**)a1, v12, 1, 0i64, 512, *(int*)(a1 + 88));
		}
	}
	v13 = result;
	if (!*v4)
	{
		result = sub_14092D590((__int64)v4, 16i64);
		if (result)
		{
			result[1] = *a3;
			*result = v13;
			*a3 = result;
		}
	}
	return result;
}

