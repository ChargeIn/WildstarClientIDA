//----- (000000014017EBE0) ----------------------------------------------------
__int64 __fastcall sub_14017EBE0(__int64 a1, __m128i* a2)
{
	__int64 v4; // rax
	__int64 v5; // rdx
	__int64 result; // rax
	_QWORD* v7; // rdi

	if (!a2 || !a2->m128i_i16[0])
	{
		v7 = *(_QWORD**)(a1 + 2064);
		if (v7 && *v7)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v7 + 8i64))(*v7);
			*v7 = 0i64;
		}
	LABEL_14:
		*(_DWORD*)(a1 + 2076) = 1;
		*(_QWORD*)(a1 + 1024) = 1i64;
		return 0i64;
	}
	if (!*(_QWORD*)(a1 + 2064))
	{
		v4 = (__int64)sub_14018B280(48i64, 0);
		if (v4)
			v4 = sub_1401095E0(v4);
		*(_QWORD*)(a1 + 2064) = v4;
	}
	v5 = *(_QWORD*)(a1 + 32);
	if (!v5)
		return 2147500037i64;
	result = sub_140109710(*(__int64**)(a1 + 2064), v5 + 240, a2, 1);
	if ((int)result >= 0)
		goto LABEL_14;
	return result;
}

