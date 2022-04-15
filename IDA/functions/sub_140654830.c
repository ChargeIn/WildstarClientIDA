//----- (0000000140654830) ----------------------------------------------------
__int64 __fastcall sub_140654830(__int64 a1)
{
	int v1; // ebp
	int* v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rsi
	int* v6; // rax
	int v7; // edx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 result; // rax

	v1 = 3;
	v3 = (int*)sub_1406622C0(a1, 1);
	v4 = 0i64;
	if (v3)
		v5 = sub_1403D90D0(qword_140C65898, *v3);
	else
		v5 = 0i64;
	v6 = (int*)sub_1406622C0(a1, 2);
	if (v6)
		v4 = sub_1403D90D0(qword_140C65898, *v6);
	if (v5 && v4)
	{
		if (v4 == *(_QWORD*)(qword_140C65898 + 120))
		{
			v7 = *(_DWORD*)(v5 + 8);
			v8 = v4;
		}
		else
		{
			v7 = *(_DWORD*)(v4 + 8);
			v8 = v5;
		}
		v1 = sub_14045A950(v8, v7);
	}
	v9 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v9 + 8) = 3;
	result = 1i64;
	*(double*)v9 = (double)v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

