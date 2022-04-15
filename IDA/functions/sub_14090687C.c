//----- (000000014090687C) ----------------------------------------------------
__int64 __fastcall sub_14090687C(int a1, int a2, __int16** a3, _QWORD* a4, int a5)
{
	int v5; // ebx
	__int16* v7; // r10
	__int16* v8; // rdx
	__int16* v9; // r10
	__int64 result; // rax
	__int16 v11; // cx
	int v12; // edx
	int v13; // r10d
	__int64 v14; // rdi

	v5 = 0;
	if (a5)
	{
		v7 = *a3;
		do
		{
			if (*a4 <= 1ui64)
				break;
			*v7 = a1 % 10 + 48;
			--* a4;
			++v7;
			a1 /= 10;
		} while (a1 > 0);
		v8 = *a3;
		*a3 = v7;
		v9 = v7 - 1;
		do
		{
			result = (unsigned __int16)*v8;
			v11 = *v9;
			*v9 = result;
			*v8++ = v11;
			--v9;
		} while (v8 < v9);
	}
	else
	{
		result = a2;
		if ((unsigned __int64)a2 >= *a4)
		{
			*a4 = 0i64;
		}
		else
		{
			v12 = a2 - 1;
			v13 = v12 + 1;
			if (v12 != -1)
			{
				v14 = v12;
				do
				{
					++v5;
					(*a3)[v14] = a1 % 10 + 48;
					a1 /= 10;
					--v14;
					--v13;
				} while (v13);
			}
			result = 2i64 * v5;
			*a3 = (__int16*)((char*)*a3 + result);
			*a4 -= v5;
		}
	}
	return result;
}

