//----- (0000000140023E00) ----------------------------------------------------
__int64 sub_140023E00()
{
	int* v0; // rax
	void(__fastcall * **v1)(_QWORD); // rbx

	v0 = sub_14018B280(264i64, 0);
	if (v0)
		v1 = (void(__fastcall***)(_QWORD))sub_1400367F0((__int64)v0);
	else
		v1 = 0i64;
	if ((int)sub_140036BF0((__int64)v1) < 0 || (int)sub_14003E380(qword_140C66DA8, v1) < 0)
	{
		sub_1400232F0(qword_140C66DA8, 501419);
	}
	else
	{
		*(_DWORD*)(qword_140C66DA8 + 144) = 0;
		*(_DWORD*)(qword_140C66DA8 + 368) = 5;
	}
	if (v1)
		(*v1)[1](v1);
	return 0i64;
}
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

