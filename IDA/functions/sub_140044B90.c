//----- (0000000140044B90) ----------------------------------------------------
int* __fastcall sub_140044B90(__int64 a1, __int64 a2)
{
	__int64 v2; // rbp
	int* v4; // rdi
	int* v6; // rbx
	__int64 v7; // r14
	unsigned __int16* v8; // r15
	__int64 v9; // r8
	int* v10; // rdx
	__int64 v12; // [rsp+20h] [rbp-58h] BYREF
	__int64 v13; // [rsp+28h] [rbp-50h]
	__int64 v14; // [rsp+30h] [rbp-48h]
	__int64 v15; // [rsp+38h] [rbp-40h]
	int v16; // [rsp+40h] [rbp-38h]
	int* v17; // [rsp+80h] [rbp+8h] BYREF
	int* v18; // [rsp+90h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *(int**)(v2 + 8);
	v6 = (int*)v2;
	if (v4)
	{
		v7 = *(_QWORD*)(a2 + 16);
		v8 = *(unsigned __int16**)(a2 + 8);
		do
		{
			if ((int)sub_1400454D0(*((_QWORD*)v4 + 5), *((_QWORD*)v4 + 6), v8, v7) < 0)
			{
				v4 = (int*)*((_QWORD*)v4 + 3);
			}
			else
			{
				v6 = v4;
				v4 = (int*)*((_QWORD*)v4 + 2);
			}
		} while (v4);
	}
	if (v6 == (int*)v2
		|| (int)sub_1400454D0(
			*(_QWORD*)(a2 + 8),
			*(_QWORD*)(a2 + 16),
			*((unsigned __int16**)v6 + 5),
			*((_QWORD*)v6 + 6)) < 0)
	{
		v9 = *(_QWORD*)(a2 + 16);
		v10 = *(int**)(a2 + 8);
		v13 = 0i64;
		v14 = 0i64;
		v15 = 0i64;
		sub_14001C1B0(&v12, v10, v9);
		v16 = 0;
		v17 = v6;
		sub_140044E50(a1, &v18, (__int64*)&v17, (__int64)&v12);
		v6 = v18;
		if (v13)
			sub_14018B900(v13, 0);
	}
	return v6 + 16;
}

