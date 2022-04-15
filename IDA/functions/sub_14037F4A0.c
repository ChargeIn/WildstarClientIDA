//----- (000000014037F4A0) ----------------------------------------------------
__int64 __fastcall sub_14037F4A0(__int64** a1)
{
	__int64 result; // rax
	__int64 v3; // rax
	unsigned __int64 v4; // rsi
	unsigned __int64 v5; // r15
	__int64 v6; // rax
	int* v7; // r12
	__int64* v8; // rbp
	unsigned __int64 i; // rdi
	__int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rcx
	int v14; // edx
	_DWORD* v15; // rbx
	__int64 v17; // rcx
	__int64 v18; // [rsp+50h] [rbp+8h] BYREF
	__int64 v19; // [rsp+58h] [rbp+10h] BYREF

	result = (*(__int64(__fastcall**)(__int64*, __int64*))(*a1[2] + 144))(a1[2], &v18);
	if ((int)result >= 0)
	{
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v18 + 16i64))(v18);
		v4 = 0i64;
		v5 = v3;
		if (v3)
		{
			v6 = 8 * v3;
			if (!is_mul_ok(v5, 8ui64))
				v6 = -1i64;
			v7 = sub_14018B280(v6, 0);
		}
		else
		{
			v7 = 0i64;
		}
		sub_1407E4830(v7, 0i64, 8 * v5);
		v8 = 0i64;
		for (i = 0i64; i < v5; ++i)
		{
			v10 = (*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v18 + 24i64))(v18, i);
			if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 40i64))(v10) != 4)
			{
				v11 = **a1;
				v12 = (*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v18 + 24i64))(v18, i);
				if ((*(int(__fastcall**)(__int64*, __int64, __int64*))(v11 + 304))(*a1, v12, &v19) >= 0)
				{
					v13 = v19;
					v8 = (__int64*)((char*)v8 + 1);
					*(_QWORD*)&v7[2 * (_QWORD)v8 - 2] = v19;
					v14 = *(_DWORD*)(v13 + 1052);
					*(_DWORD*)(v13 + 1052) = v14 + 1;
					if (!v14)
						sub_140377FE0(v13);
				}
			}
		}
		if (a1[111])
		{
			do
			{
				v15 = (_DWORD*)a1[112][v4];
				if (v15[263]-- == 1)
					sub_140377FE0((__int64)v15);
				(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v15 + 8i64))(v15);
				++v4;
			} while (v4 < (unsigned __int64)a1[111]);
		}
		sub_14018B900((__int64)a1[112], 0);
		v17 = v18;
		a1[112] = (__int64*)v7;
		a1[111] = v8;
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
	}
	return result;
}

