//----- (0000000140441B60) ----------------------------------------------------
__int64 __fastcall sub_140441B60(_QWORD*** a1, _QWORD*** a2, __int64 a3)
{
	_QWORD*** v5; // rdi
	int* v6; // rax
	_QWORD** v7; // r9
	_QWORD* v8; // r8
	__int64 v9; // rcx
	__int64 v11; // [rsp+40h] [rbp+8h] BYREF

	if (a1 != a2)
	{
		v5 = a1 + 1;
		do
		{
			if (a3)
			{
				v6 = sub_14018B280(32i64, 0);
				*(_QWORD*)(a3 + 8) = v6;
				*(_QWORD*)v6 = v6;
				*(_QWORD*)(*(_QWORD*)(a3 + 8) + 8i64) = *(_QWORD*)(a3 + 8);
				v7 = *v5;
				v8 = **v5;
				v11 = **(_QWORD**)(a3 + 8);
				sub_140441830(v9, &v11, v8, v7);
				sub_140440C40(a3 + 16, (__int64)(v5 + 1));
				sub_1403D2AA0(a3 + 48, (__int64)(v5 + 5));
			}
			v5 += 10;
			a3 += 80i64;
		} while (v5 - 1 != a2);
	}
	return a3;
}
// 140441BB8: variable 'v9' is possibly undefined

