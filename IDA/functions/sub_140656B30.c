//----- (0000000140656B30) ----------------------------------------------------
__int64 __fastcall sub_140656B30(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	float v5; // xmm0_4
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 result; // rax

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
		sub_140056570(a1, 1u, "invalid unit");
	v4 = *(_QWORD*)(v3 + 256);
	if (v4)
	{
		v5 = *(float*)(v4 + 12);
	}
	else
	{
		v6 = *(_QWORD*)(v3 + 24);
		if (v6)
			v5 = *(float*)(v6 + 48);
		else
			v5 = 0.0;
	}
	v7 = a1[2];
	result = 1i64;
	*(_DWORD*)(v7 + 8) = 3;
	*(double*)v7 = v5;
	a1[2] += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

