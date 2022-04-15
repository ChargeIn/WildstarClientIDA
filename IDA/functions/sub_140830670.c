//----- (0000000140830670) ----------------------------------------------------
__int64 __fastcall sub_140830670(int* a1)
{
	_QWORD** v2; // rdi
	__int64 v3; // rbp
	_QWORD* v4; // rdx
	_QWORD* v5; // rbx
	__int64 result; // rax

	v2 = (_QWORD**)(a1 + 2);
	v3 = 193i64;
	do
	{
		v4 = *v2;
		if (*v2)
		{
			do
			{
				v5 = (_QWORD*)*v4;
				result = sub_140881720(*a1, (__int64)v4);
				v4 = v5;
			} while (v5);
		}
		*v2++ = 0i64;
		--v3;
	} while (v3);
	a1[388] = 0;
	return result;
}

