//----- (0000000140737CE0) ----------------------------------------------------
__int64 __fastcall sub_140737CE0(_QWORD* a1)
{
	__int64 v1; // rsi
	_QWORD* v3; // rbx
	int* v4; // rax
	void(__fastcall * **v5)(_QWORD); // rbx
	unsigned int v6; // edi

	v1 = qword_140C659F0;
	v3 = (_QWORD*)(qword_140C659F0 + 344);
	if (*(_DWORD*)(qword_140C659F0 + 344) && *(_QWORD*)(qword_140C659F0 + 352))
	{
		v4 = sub_14018B280(104i64, 0);
		if (v4)
			v5 = (void(__fastcall***)(_QWORD))sub_14073E140((__int64)v4, *(int**)(v1 + 360), 0i64, 0, 10, 0i64, v3);
		else
			v5 = 0i64;
		v6 = sub_14073EB30(a1, v5);
		if (v5)
			(*v5)[1](v5);
		return v6;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C659F0: using guessed type __int64 qword_140C659F0;

