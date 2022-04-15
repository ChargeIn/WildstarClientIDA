//----- (00000001406566E0) ----------------------------------------------------
__int64 __fastcall sub_1406566E0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // r10
	__int64 v4; // r9
	unsigned __int64 v5; // rdx
	unsigned int v6; // ecx
	__int64 v7; // r8
	__int64 v8; // rax
	__int64 v9; // rax
	char* v10; // rdx

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
		sub_140056570(a1, 1u, "invalid unit");
	v4 = 0i64;
	v5 = *(_QWORD*)(qword_140C63650 + 768);
	v6 = 0;
	if (v5)
	{
		v7 = *(_QWORD*)(qword_140C63650 + 760);
		v8 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v7 + 8 * v8) + 400i64) != a1)
		{
			v8 = ++v6;
			if (v6 >= v5)
				goto LABEL_9;
		}
		v4 = *(_QWORD*)(v7 + 8i64 * v6);
	}
LABEL_9:
	v9 = *(_QWORD*)(v3 + 24);
	if (!v9 || (v10 = "Simple", (*(_BYTE*)(v9 + 148) & 0xF) != 15))
		v10 = "Normal";
	sub_140058710(*(_QWORD*)(v4 + 400), (unsigned __int64*)v10, 6ui64);
	return 1i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

