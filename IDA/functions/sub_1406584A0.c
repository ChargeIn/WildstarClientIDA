//----- (00000001406584A0) ----------------------------------------------------
__int64 __fastcall sub_1406584A0(__int64 a1)
{
	int* v2; // rax
	int* v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rdx
	int v6; // ecx

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2)
		v3 = (int*)sub_1403D90D0(qword_140C65898, *v2);
	else
		v3 = 0i64;
	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (v4 && v3 && v3[32] == 17 && (~((unsigned int)v3[10] >> 3) & 1) != 0 && (unsigned int)sub_14045A950(v4, v3[2]))
	{
		v5 = *(_QWORD*)(a1 + 16);
		v6 = v3[1387] + 1;
		*(_DWORD*)(v5 + 8) = 3;
		*(double*)v5 = (double)v6;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

