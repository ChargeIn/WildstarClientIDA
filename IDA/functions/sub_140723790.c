//----- (0000000140723790) ----------------------------------------------------
void __fastcall sub_140723790(__int64* a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rbx
	__int64 v7; // rdx
	__int64 v8; // rdx
	__int64 v9; // rdx
	__int64 v10; // r15
	int* v11; // r14
	__int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rax
	__int64 v15; // rsi
	__int64 v16; // rbx
	__int64 i; // rbp
	__int64 v18; // rcx
	char v19[8]; // [rsp+30h] [rbp-48h] BYREF
	__int64 v20; // [rsp+38h] [rbp-40h]
	int v21; // [rsp+50h] [rbp-28h]

	v3 = a1[2];
	if (v3 == a1[3])
	{
		v8 = (v3 - a1[1]) / 40;
		if (v8)
			v9 = 2 * v8;
		else
			v9 = 1i64;
		v10 = 10 * (sub_14018A3E0(40 * v9) / 0x28ui64);
		v11 = sub_14018B280(v10 * 4, 0);
		v12 = sub_140723940(a1[1], a2, (__int64)v11);
		v13 = v12;
		if (v12)
		{
			sub_14048B2A0(v12, a3);
			*(_DWORD*)(v13 + 32) = *(_DWORD*)(a3 + 32);
		}
		v14 = sub_140723940(a2, a1[2], v13 + 40);
		v15 = a1[2];
		v16 = a1[1];
		for (i = v14; v16 != v15; v16 += 40i64)
		{
			sub_140008410(v16);
			sub_14018B900(*(_QWORD*)(v16 + 8), 0);
		}
		v18 = a1[1];
		if (v18)
			sub_14018B900(v18, 0);
		a1[1] = (__int64)v11;
		a1[3] = (__int64)&v11[v10];
		a1[2] = i;
	}
	else
	{
		if (v3)
		{
			sub_14048B2A0(a1[2], v3 - 40);
			*(_DWORD*)(v3 + 32) = *(_DWORD*)(v3 - 8);
		}
		a1[2] += 40i64;
		sub_14048B2A0((__int64)v19, a3);
		v7 = a1[2];
		v21 = *(_DWORD*)(a3 + 32);
		sub_1407239C0(a2, v7 - 80, v7 - 40);
		sub_1404956E0(a2, (__int64)v19);
		*(_DWORD*)(a2 + 32) = v21;
		sub_140008410((__int64)v19);
		sub_14018B900(v20, 0);
	}
}
// 140723790: using guessed type char var_48[8];

