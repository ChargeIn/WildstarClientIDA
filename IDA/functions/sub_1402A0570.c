//----- (00000001402A0570) ----------------------------------------------------
__int64 __fastcall sub_1402A0570(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
	__int64 v10; // rdx
	__int64 result; // rax
	__int64 v12; // rax
	__int64* v13; // rcx
	__int64 v14; // rax

	*(_DWORD*)(a1 + 48) = a5;
	*(_DWORD*)(a1 + 28) = a2;
	v10 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 52) = a6;
	*(_DWORD*)(a1 + 56) = a7;
	*(_DWORD*)(a1 + 24) = 0;
	*(_DWORD*)(a1 + 60) = a8;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_DWORD*)(a1 + 32) = a3;
	*(_DWORD*)(a1 + 64) = a9;
	*(_QWORD*)(a1 + 36) = 1i64;
	*(_DWORD*)(a1 + 44) = a4;
	result = sub_140263970((int*)(a1 + 24), v10 + 136);
	if ((int)result >= 0)
	{
		*(_DWORD*)(a1 + 216) = sub_140263E70((_DWORD*)(a1 + 24));
		if (((*(_DWORD*)(a1 + 52) - 3) & 0xFFFFFFFD) == 0)
		{
			v12 = 4i64 * *(unsigned int*)(a1 + 44);
			if (!is_mul_ok(*(unsigned int*)(a1 + 44), 4ui64))
				v12 = -1i64;
			*(_QWORD*)(a1 + 224) = sub_14018B280(v12, 0);
		}
		result = sub_1402A0970(a1, 2);
		if ((int)result >= 0)
		{
			v13 = (__int64*)(*(_QWORD*)(a1 + 16) + 6856i64);
			if (!*(_QWORD*)(a1 + 288))
			{
				*(_QWORD*)(a1 + 288) = v13;
				*(_QWORD*)(a1 + 296) = *v13;
				*v13 = a1;
				v14 = *(_QWORD*)(a1 + 296);
				if (v14)
					*(_QWORD*)(v14 + 288) = a1 + 296;
			}
			return 0i64;
		}
	}
	return result;
}

