//----- (00000001408978D0) ----------------------------------------------------
__int64 __fastcall sub_1408978D0(__int64 a1)
{
	_QWORD* v1; // rbx
	__int64 v3; // rbp
	__int64 v4; // rsi
	__int64 result; // rax

	v1 = *(_QWORD**)(a1 + 48);
	if (v1 == *(_QWORD**)(a1 + 56))
	{
		*(_QWORD*)(a1 + 56) = v1;
	}
	else
	{
		do
		{
			v3 = *v1;
			v4 = v1[1];
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(*v1 + 64i64) + 8i64))(*(_QWORD*)(*v1 + 64i64));
			v1 += 2;
			*(_QWORD*)(v3 + 64) = v4;
		} while (v1 != *(_QWORD**)(a1 + 56));
		result = *(_QWORD*)(a1 + 48);
		*(_QWORD*)(a1 + 56) = result;
	}
	return result;
}

