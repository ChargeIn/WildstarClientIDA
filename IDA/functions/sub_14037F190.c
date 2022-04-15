//----- (000000014037F190) ----------------------------------------------------
__int64 __fastcall sub_14037F190(__int64* a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	unsigned __int64 v4; // rbx
	int** v5; // rsi
	__int64 v6; // r14
	int v7; // edx
	int* v8; // rdi
	__int64 v9; // [rsp+40h] [rbp+8h] BYREF
	int* v10; // [rsp+48h] [rbp+10h] BYREF

	v2 = a1[2];
	v9 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v2 + 72i64))(v2, 28i64, &v9);
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 24i64))(v9);
	v4 = 0i64;
	v5 = (int**)(a1 + 156);
	v6 = result;
	do
	{
		v7 = *(_DWORD*)(v6 + 4 * v4);
		if (v7 && (result = sub_140354530(*a1, v7, &v10), (int)result >= 0))
		{
			v8 = v10;
		}
		else
		{
			v8 = 0i64;
			v10 = 0i64;
		}
		if (*v5)
			result = (*(__int64(__fastcall**)(int*))(*(_QWORD*)*v5 + 8i64))(*v5);
		++v4;
		*v5++ = v8;
	} while (v4 < 4);
	if (v9)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
	return result;
}

