//----- (00000001406568B0) ----------------------------------------------------
__int64 __fastcall sub_1406568B0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	_DWORD* v5; // rcx
	__int64 result; // rax
	_DWORD* v7; // rax
	bool v8; // cl

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
		sub_140056570(a1, 1u, "invalid unit");
	v4 = *(_QWORD*)(v3 + 24);
	if (v4)
	{
		v7 = (_DWORD*)a1[2];
		v8 = (*(_BYTE*)(v4 + 148) & 0x10) != 0;
		v7[2] = 1;
		*v7 = v8;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v5 = (_DWORD*)a1[2];
		result = 1i64;
		*v5 = 0;
		v5[2] = 1;
		a1[2] += 16i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

