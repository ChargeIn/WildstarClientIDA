//----- (0000000140391230) ----------------------------------------------------
__int64 __fastcall sub_140391230(_QWORD* a1, int a2)
{
	__int64 result; // rax
	int* v5; // rbx
	__int64 v6; // rdi
	int* v7; // rdi
	__int64 v8; // rcx
	int* v9; // [rsp+30h] [rbp+8h] BYREF

	result = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 24i64))(a1);
	if (!(_DWORD)result)
	{
		result = a1[1];
		v5 = 0i64;
		v6 = *(_QWORD*)(result + 16);
		v9 = 0i64;
		if (!a2 || (result = sub_1403543E0(v6, a2, *(_QWORD*)(v6 + 2568), &v9), v5 = v9, (int)result < 0))
		{
			v7 = *(int**)(v6 + 2584);
			if (v5 != v7)
			{
				if (v7)
					result = (**(__int64(__fastcall***)(int*))v7)(v7);
				if (v5)
					result = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v5 + 8i64))(v5);
				v5 = v7;
			}
		}
		if ((int*)a1[3] != v5)
		{
			if (v5)
				result = (**(__int64(__fastcall***)(int*))v5)(v5);
			v8 = a1[3];
			if (v8)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
			a1[3] = v5;
		}
		if (v5)
			return (*(__int64(__fastcall**)(int*))(*(_QWORD*)v5 + 8i64))(v5);
	}
	return result;
}

