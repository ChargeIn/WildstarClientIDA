//----- (00000001401C0280) ----------------------------------------------------
__int64 __fastcall sub_1401C0280(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rax
	_QWORD* v5; // rcx
	__int64 v6; // rsi
	unsigned __int64 v7; // rdi
	_QWORD* v8; // rbx
	unsigned int* v10; // rbx

	if (!*(_QWORD*)(a1 + 80))
	{
		v4 = sub_14018B280(40i64, 0);
		if (v4)
			v4 = sub_1401C0380(v4);
		v5 = *(_QWORD**)(a1 + 72);
		*(_QWORD*)(a1 + 80) = v4;
		sub_1401BEF20(v5, a1);
	}
	v6 = *(_QWORD*)(a1 + 80);
	v7 = (*(__int64(__fastcall**)(__int64))(v6 + 24))(a2);
	v8 = *(_QWORD**)(*(_QWORD*)(v6 + 16) + 8 * (v7 % *(_QWORD*)(v6 + 8)));
	if (!v8)
		return 0i64;
	while (v7 != *v8 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v6 + 32))(a2, v8 + 2))
	{
		v8 = (_QWORD*)v8[1];
		if (!v8)
			return 0i64;
	}
	v10 = (unsigned int*)v8 + 9;
	if (v10)
		return *v10;
	else
		return 0i64;
}

