//----- (00000001403ABAB0) ----------------------------------------------------
_QWORD* __fastcall sub_1403ABAB0(__int64 a1, __int64* a2)
{
	int* v4; // rax
	int* v5; // rbx
	_QWORD* result; // rax
	_QWORD* v7; // rbx
	__int64 v8; // rax

	a2[1] = 0i64;
	v4 = sub_14018DBC0(*a2, *(_QWORD*)(a1 + 16), 8i64);
	v5 = v4;
	if ((int*)*a2 != v4)
	{
		sub_1407DB590(v4, (int*)*a2, 8 * a2[1]);
		if (*a2)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a2 - 16) + 8i64))(*a2 - 16);
		*a2 = (__int64)v5;
	}
	result = *(_QWORD**)(a1 + 8);
	v7 = (_QWORD*)result[2];
	if (v7 != result)
	{
		do
		{
			sub_140033260(a2, v7 + 4);
			v8 = v7[3];
			if (v8)
			{
				v7 = (_QWORD*)v7[3];
				for (result = *(_QWORD**)(v8 + 16); result; result = (_QWORD*)result[2])
					v7 = result;
			}
			else
			{
				for (result = (_QWORD*)v7[1]; v7 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v7 = result;
				if ((_QWORD*)v7[3] != result)
					v7 = result;
			}
		} while (v7 != *(_QWORD**)(a1 + 8));
	}
	return result;
}

