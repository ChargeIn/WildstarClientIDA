//----- (000000014075D640) ----------------------------------------------------
__int64 __fastcall sub_14075D640(_QWORD* a1)
{
	int* v2; // rax
	void(__fastcall * **v3)(_QWORD); // rbx
	unsigned int v4; // edi
	_QWORD v6[3]; // [rsp+40h] [rbp-18h] BYREF

	if (qword_140C7DE48)
	{
		v2 = sub_14018B280(104i64, 0);
		v3 = 0i64;
		if (v2)
		{
			LODWORD(v6[0]) = 0;
			v6[1] = 0i64;
			v3 = (void(__fastcall***)(_QWORD))sub_14073E140(
				(__int64)v2,
				*((int**)&xmmword_140C7DE30 + 1),
				(int*)qword_140C7DE40,
				0,
				6,
				qword_140C7DE48,
				v6);
		}
		v4 = sub_14073EB30(a1, v3);
		if (v3)
			(*v3)[1](v3);
		return v4;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C7DE30: using guessed type __int128 xmmword_140C7DE30;
// 140C7DE40: using guessed type __int64 qword_140C7DE40;
// 140C7DE48: using guessed type __int64 qword_140C7DE48;

