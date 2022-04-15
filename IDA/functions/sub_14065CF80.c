//----- (000000014065CF80) ----------------------------------------------------
__int64 __fastcall sub_14065CF80(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rcx
	int v4; // edx
	__int64 v5; // rcx
	__int64 result; // rax
	__int64 v7; // rcx
	_QWORD* v8; // rax
	__int64 v9; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = 0;
		if (v3 != *(_QWORD*)(qword_140C65898 + 120))
		{
			v5 = *(_QWORD*)(a1 + 16);
			result = 1i64;
			*(_QWORD*)v5 = 0i64;
			*(_DWORD*)(v5 + 8) = 3;
			*(_QWORD*)(a1 + 16) += 16i64;
			return result;
		}
		v7 = *(unsigned int*)(qword_140C65898 + 196);
		if ((_DWORD)v7)
		{
			v8 = *(_QWORD**)(qword_140C65898 + 200);
			do
			{
				if (*v8)
					++v4;
				++v8;
				--v7;
			} while (v7);
		}
		v9 = *(_QWORD*)(a1 + 16);
		*(double*)v9 = (double)v4;
	}
	else
	{
		v9 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v9 = 0i64;
	}
	*(_DWORD*)(v9 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

