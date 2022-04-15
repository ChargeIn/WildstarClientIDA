//----- (00000001405A4280) ----------------------------------------------------
signed __int64 __fastcall sub_1405A4280(
	__int64* a1,
	__int64 a2,
	unsigned __int64 a3,
	__int64 a4,
	unsigned __int8(__fastcall* a5)(__int64, __int64))
{
	__int64* v8; // rbx
	__int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF

	sub_1405A44A0((__int64)a1, a2, a5);
	v8 = (__int64*)a2;
	if (a2 < a3)
	{
		do
		{
			if (a5((__int64)v8, (__int64)a1))
			{
				v10[0] = *v8;
				v10[1] = v8[1];
				*v8 = *a1;
				v8[1] = a1[1];
				sub_1405A4650(
					(__int64)a1,
					0i64,
					(a2 - (__int64)a1) >> 4,
					v10,
					(unsigned __int8(__fastcall*)(_QWORD*, _QWORD*))a5);
			}
			v8 += 2;
		} while ((unsigned __int64)v8 < a3);
	}
	return sub_1405A4400(a1, a2, (unsigned __int8(__fastcall*)(_QWORD*, _QWORD*))a5);
}

