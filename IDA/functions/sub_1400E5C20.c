//----- (00000001400E5C20) ----------------------------------------------------
__int64 __fastcall sub_1400E5C20(_QWORD* a1)
{
	unsigned __int64 i; // rdi
	void(__fastcall * **v3)(_QWORD, __int64); // rcx
	_QWORD** v4; // rax
	_QWORD* v5; // rdi
	__int64 v6; // rcx
	__int64 result; // rax

	sub_14014E2B0((__int64)(a1 + 331));
	sub_1400E1580((__int64)(a1 + 421));
	for (i = 0i64; i < a1[401]; *(_QWORD*)(a1[400] + 8 * i - 8) = 0i64)
	{
		sub_140156C20(*(_QWORD**)(a1[400] + 8 * i));
		v3 = *(void(__fastcall****)(_QWORD, __int64))(a1[400] + 8 * i);
		if (v3)
			(**v3)(v3, 1i64);
		++i;
	}
	a1[401] = 0i64;
	v4 = (_QWORD**)a1[404];
	v5 = *v4;
	if (*v4 != v4)
	{
		do
		{
			v6 = (__int64)v5;
			v5 = (_QWORD*)*v5;
			sub_14018B900(v6, 0);
		} while (v5 != (_QWORD*)a1[404]);
	}
	*(_QWORD*)a1[404] = a1[404];
	result = a1[404];
	*(_QWORD*)(result + 8) = result;
	return result;
}

