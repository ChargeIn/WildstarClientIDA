//----- (00000001402E1B10) ----------------------------------------------------
__int64 __fastcall sub_1402E1B10(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	int* v4; // rbx
	unsigned __int64 v5; // rdi
	unsigned __int64 i; // rbp
	__int64(__fastcall * v7)(__int64, _QWORD); // r8
	int* v8; // [rsp+48h] [rbp+10h] BYREF

	v8 = 0i64;
	result = sub_1402E1870(a2, a1, &v8);
	v4 = v8;
	if ((int)result >= 0)
	{
		result = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v8 + 16i64))(v8);
		v5 = 0i64;
		for (i = result; v5 < i; ++v5)
		{
			result = (*(__int64(__fastcall**)(int*, unsigned __int64))(*(_QWORD*)v4 + 24i64))(v4, v5);
			*(_QWORD*)(result + 48) = 0i64;
			v7 = *(__int64(__fastcall**)(__int64, _QWORD))(a2 + 144);
			if (v7)
				result = v7(result, *(_QWORD*)(a2 + 224));
		}
	}
	if (v4)
		return (*(__int64(__fastcall**)(int*))(*(_QWORD*)v4 + 8i64))(v4);
	return result;
}

