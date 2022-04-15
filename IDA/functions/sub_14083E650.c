//----- (000000014083E650) ----------------------------------------------------
_QWORD* __fastcall sub_14083E650(int* a1, int a2, __int64 a3)
{
	_QWORD* result; // rax
	_QWORD* v7; // r9
	__int64 v8; // rax

	result = (_QWORD*)sub_1408819F0(*a1, 64i64);
	v7 = result;
	if (result)
	{
		v8 = *(_QWORD*)&a1[2 * a3 + 2];
		*((_DWORD*)v7 + 2) = a2;
		*v7 = v8;
		result = v7 + 2;
		if (v7 != (_QWORD*)-16i64)
		{
			v7[4] = 0i64;
			v7[5] = 0i64;
			*((_DWORD*)v7 + 12) = 0;
			*((_DWORD*)v7 + 14) = 1;
			*result = 0i64;
			*((_DWORD*)v7 + 6) = 0;
		}
		*(_QWORD*)&a1[2 * a3 + 2] = v7;
		++a1[388];
	}
	return result;
}

