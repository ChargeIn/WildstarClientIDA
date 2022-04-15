//----- (00000001402CE1D0) ----------------------------------------------------
int* __fastcall sub_1402CE1D0(__int64* a1, unsigned int a2, unsigned __int64 a3)
{
	__int64 v3; // rax
	unsigned __int64 v4; // rdi
	int* result; // rax
	__int64 v9; // rcx
	__int64 v10; // rsi
	int v11[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v4 = 0i64;
	v11[0] = 0;
	result = (int*)(*(__int64(__fastcall**)(__int64*, int*, __int64))(v3 + 64))(a1, v11, 5i64);
	if ((_DWORD)result)
	{
		if (a3 == -1i64)
		{
			if (a1[32])
			{
				v10 = 0i64;
				do
				{
					result = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)(v10 + a1[31]) + 208i64))(
						v10 + a1[31],
						a2);
					++v4;
					v10 += 416i64;
				} while (v4 < a1[32]);
			}
		}
		else if (a3 < a1[32])
		{
			return (int*)(*(__int64(__fastcall**)(unsigned __int64, _QWORD))(*(_QWORD*)(416 * a3 + a1[31]) + 208i64))(
				416 * a3 + a1[31],
				a2);
		}
	}
	else
	{
		result = sub_14018B280(48i64, 0);
		if (result)
		{
			*((_QWORD*)result + 1) = a1;
			*((_QWORD*)result + 2) = a3;
			*(_QWORD*)result = &off_140B62CA0;
			*((_QWORD*)result + 4) = 0i64;
			*((_QWORD*)result + 3) = a1 + 62;
			*((_QWORD*)result + 4) = a1[62];
			a1[62] = (__int64)result;
			v9 = *((_QWORD*)result + 4);
			if (v9)
				*(_QWORD*)(v9 + 24) = result + 8;
			result[10] = a2;
			*(_QWORD*)result = off_140B62C60;
		}
	}
	return result;
}
// 140B62C60: using guessed type __int64 (__fastcall *off_140B62C60[9])();
// 140B62CA0: using guessed type __int64 (__fastcall *off_140B62CA0)();
// 1402CE1D0: using guessed type int var_18[6];

