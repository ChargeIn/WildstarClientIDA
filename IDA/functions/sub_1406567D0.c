//----- (00000001406567D0) ----------------------------------------------------
__int64 __fastcall sub_1406567D0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	char v5; // si
	_DWORD* v6; // rcx
	int* v8; // rax
	int v9; // eax
	_DWORD* v10; // rax

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
		sub_140056570(a1, 1u, "invalid unit");
	v4 = *(_QWORD*)(v3 + 24);
	v5 = 0;
	if (v4)
	{
		v8 = (int*)sub_1401F60A0(*(_DWORD*)(v4 + 16));
		if (v8)
			v9 = *v8;
		else
			v9 = 32;
		if ((*(_BYTE*)(v4 + 148) & 0x40) != 0 || v9 == 12 || v9 == 31)
			v5 = 1;
		v10 = (_DWORD*)a1[2];
		v10[2] = 1;
		*v10 = v5 != 0;
	}
	else
	{
		v6 = (_DWORD*)a1[2];
		*v6 = 0;
		v6[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

