//----- (0000000140659070) ----------------------------------------------------
__int64 __fastcall sub_140659070(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rsi
	__int64 v4; // r10
	unsigned __int64 v5; // r8
	unsigned int v6; // ecx
	__int64 v7; // r9
	__int64 v8; // rdx
	__int64 v9; // rbx
	int v10; // edi
	int v11; // ecx
	int v12; // eax
	__int64 v14; // [rsp+20h] [rbp-18h] BYREF
	int v15; // [rsp+28h] [rbp-10h]

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
	v9 = v4 + 384;
	v10 = sub_1400F26A0(v4 + 384, 2);
	v11 = sub_1400F26A0(v9, 3);
	if (v10 != 64)
	{
		v14 = 0i64;
		v15 = 0;
		v12 = *(_DWORD*)(v3 + 8);
		v15 = v11;
		BYTE4(v14) = v10;
		LODWORD(v14) = v12;
		sub_1403F4900(qword_140C65898, 0x15Au, (__int64)&v14);
	}
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

