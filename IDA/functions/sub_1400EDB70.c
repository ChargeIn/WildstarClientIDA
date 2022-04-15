//----- (00000001400EDB70) ----------------------------------------------------
int* __fastcall sub_1400EDB70(__int64 a1, __int64 a2)
{
	__int64 v2; // rbp
	int* v4; // rdi
	int* v6; // rbx
	unsigned __int16* v7; // rsi
	__int64 v8; // r8
	int* v9; // rdx
	__int64 v11; // [rsp+20h] [rbp-58h] BYREF
	__int64 v12; // [rsp+28h] [rbp-50h]
	__int64 v13; // [rsp+30h] [rbp-48h]
	__int64 v14; // [rsp+38h] [rbp-40h]
	__int64 v15; // [rsp+40h] [rbp-38h]
	__int64 v16; // [rsp+48h] [rbp-30h]
	int* v17; // [rsp+80h] [rbp+8h] BYREF
	int* v18; // [rsp+90h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *(int**)(v2 + 8);
	v6 = (int*)v2;
	if (v4)
	{
		v7 = *(unsigned __int16**)(a2 + 8);
		do
		{
			if ((int)sub_14018E2C0(*((_QWORD*)v4 + 5), v7) < 0)
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
	if (v6 == (int*)v2 || (int)sub_14018E2C0(*(_QWORD*)(a2 + 8), *((unsigned __int16**)v6 + 5)) < 0)
	{
		v8 = *(_QWORD*)(a2 + 16);
		v9 = *(int**)(a2 + 8);
		v12 = 0i64;
		v13 = 0i64;
		v14 = 0i64;
		sub_14001C1B0(&v11, v9, v8);
		v15 = 0i64;
		v16 = 0i64;
		v17 = v6;
		sub_1400EE900(a1, &v18, (__int64*)&v17, (__int64)&v11);
		v6 = v18;
		if (v12)
			sub_14018B900(v12, 0);
	}
	return v6 + 16;
}

