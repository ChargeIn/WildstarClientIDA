//----- (00000001403F4250) ----------------------------------------------------
__int64 __fastcall sub_1403F4250(__int64 a1, int a2)
{
	__int64 v2; // rsi
	unsigned __int64 v3; // rdi
	_QWORD* v4; // rbx
	unsigned int* v6; // rbx
	int v7; // [rsp+38h] [rbp+10h] BYREF

	v7 = a2;
	v2 = qword_140C65898;
	v3 = (*(__int64(__fastcall**)(int*))(qword_140C65898 + 32584))(&v7);
	v4 = *(_QWORD**)(*(_QWORD*)(v2 + 32576) + 8 * (v3 % *(_QWORD*)(v2 + 32568)));
	if (!v4)
		return 0i64;
	while (v3 != *v4 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v2 + 32592))(&v7, v4 + 2))
	{
		v4 = (_QWORD*)v4[1];
		if (!v4)
			return 0i64;
	}
	v6 = (unsigned int*)v4 + 5;
	if (v6)
		return *v6;
	else
		return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

