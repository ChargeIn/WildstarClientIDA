//----- (00000001402FA570) ----------------------------------------------------
int* __fastcall sub_1402FA570(int** a1, int a2, __int64(__fastcall*** a3)(_QWORD))
{
	__int64 v4; // rbx
	int* result; // rax
	int* v7; // rax
	int* v8; // rcx
	int** v9; // rsi
	__int64 v10; // rax
	int* v11; // rdx
	__int64 v12; // r8
	int* v13; // rbx
	__int64 v14; // rcx
	__int64 v15; // rcx
	int v16[6]; // [rsp+20h] [rbp-18h] BYREF

	v4 = a2;
	result = (int*)(*((__int64(__fastcall**)(int**)) * a1 + 126))(a1);
	if (!(_DWORD)result)
	{
		v7 = *a1;
		v16[0] = 0;
		result = (int*)(*((__int64(__fastcall**)(int**, int*, _QWORD))v7 + 2))(a1, v16, 0i64);
		if ((_DWORD)result)
		{
			v11 = a1[8];
			if ((unsigned int)v4 < v11[116])
			{
				result = (int*)*((_QWORD*)v11 + 59);
				v12 = *((unsigned __int16*)result + v4);
				if ((unsigned int)v12 < v11[112])
				{
					v13 = &a1[132][6 * v12];
					if (*(_QWORD*)v13)
					{
						(*(void(__fastcall**)(_QWORD))(**(_QWORD**)v13 + 8i64))(*(_QWORD*)v13);
						*(_QWORD*)v13 = 0i64;
					}
					v14 = *((_QWORD*)v13 + 1);
					*((_QWORD*)v13 + 1) = 0i64;
					if (v14)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
					if (a3)
						(*(void(__fastcall**)(__int64, __int64(__fastcall***)(_QWORD), int*))(*(_QWORD*)qword_140C65670
							+ 128i64))(
								qword_140C65670,
								a3,
								v13);
					v15 = *((_QWORD*)v13 + 2);
					if (v15)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
						*((_QWORD*)v13 + 2) = 0i64;
					}
					return (int*)sub_1402F5CA0((__int64)a1, 12);
				}
			}
		}
		else
		{
			result = sub_14018B280(48i64, 0);
			v8 = result;
			if (result)
			{
				*(_QWORD*)result = &off_140B64078;
				*((_QWORD*)result + 2) = 0i64;
				*((_QWORD*)result + 3) = 0i64;
				*((_QWORD*)result + 1) = a1;
				v9 = a1 + 9;
				if (!*((_QWORD*)result + 2))
				{
					*((_QWORD*)result + 2) = v9;
					*((_QWORD*)result + 3) = *v9;
					*v9 = result;
					v10 = *((_QWORD*)result + 3);
					if (v10)
						*(_QWORD*)(v10 + 16) = v8 + 6;
				}
				result = (int*)off_140B64018;
				v8[8] = v4;
				*((_QWORD*)v8 + 5) = a3;
				*(_QWORD*)v8 = off_140B64018;
				if (a3)
					return (int*)(**a3)(a3);
			}
		}
	}
	return result;
}
// 140B64018: using guessed type __int64 (__fastcall *off_140B64018[13])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();
// 140C65670: using guessed type __int64 qword_140C65670;
// 1402FA570: using guessed type int var_18[6];

