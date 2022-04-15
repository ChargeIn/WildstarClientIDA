//----- (0000000140658400) ----------------------------------------------------
__int64 __fastcall sub_140658400(__int64 a1)
{
	int* v2; // rax
	int v3; // ebx
	int* v4; // rdx
	BOOL v5; // r8d
	__int64 v6; // rcx
	_DWORD* v7; // rcx
	__int64 result; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	v3 = 0;
	if (v2)
		v4 = (int*)sub_1403D90D0(qword_140C65898, *v2);
	else
		v4 = 0i64;
	v5 = 0;
	v6 = *(_QWORD*)(qword_140C65898 + 120);
	if (v6 && v4 && v4[32] == 17 && (~((unsigned int)v4[10] >> 3) & 1) != 0)
		v5 = sub_14045A950(v6, v4[2]) != 0;
	v7 = *(_DWORD**)(a1 + 16);
	result = 1i64;
	LOBYTE(v3) = v5;
	v7[2] = 1;
	*v7 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

