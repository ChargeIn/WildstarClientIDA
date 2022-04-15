//----- (00000001402CC5E0) ----------------------------------------------------
int* __fastcall sub_1402CC5E0(__int64* a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
	__int64 v4; // rax
	unsigned __int64 v5; // rdi
	int* result; // rax
	__int64 v11; // rcx
	__int64 v12; // rsi
	int v13[6]; // [rsp+20h] [rbp-18h] BYREF

	v4 = *a1;
	v5 = 0i64;
	v13[0] = 0;
	result = (int*)(*(__int64(__fastcall**)(__int64*, int*, __int64))(v4 + 64))(a1, v13, 5i64);
	if ((_DWORD)result)
	{
		if (a4 == -1i64)
		{
			if (a1[32])
			{
				v12 = 0i64;
				do
				{
					result = (int*)(*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)(v12 + a1[31]) + 56i64))(
						v12 + a1[31],
						a2,
						a3);
					++v5;
					v12 += 416i64;
				} while (v5 < a1[32]);
			}
		}
		else if (a4 < a1[32])
		{
			return (int*)(*(__int64(__fastcall**)(unsigned __int64, __int64, __int64))(*(_QWORD*)(416 * a4 + a1[31])
				+ 56i64))(
					416 * a4 + a1[31],
					a2,
					a3);
		}
	}
	else
	{
		result = sub_14018B280(56i64, 0);
		if (result)
		{
			*((_QWORD*)result + 1) = a1;
			*((_QWORD*)result + 2) = a4;
			*(_QWORD*)result = &off_140B62CA0;
			*((_QWORD*)result + 4) = 0i64;
			*((_QWORD*)result + 3) = a1 + 62;
			*((_QWORD*)result + 4) = a1[62];
			a1[62] = (__int64)result;
			v11 = *((_QWORD*)result + 4);
			if (v11)
				*(_QWORD*)(v11 + 24) = result + 8;
			*((_QWORD*)result + 5) = a2;
			*((_QWORD*)result + 6) = a3;
			*(_QWORD*)result = off_140B62C50;
		}
	}
	return result;
}
// 140B62C50: using guessed type __int64 (__fastcall *off_140B62C50[11])();
// 140B62CA0: using guessed type __int64 (__fastcall *off_140B62CA0)();
// 1402CC5E0: using guessed type int var_18[6];

