//----- (00000001400476A0) ----------------------------------------------------
__int64 sub_1400476A0()
{
	void(__fastcall * **v0)(_QWORD); // rbx
	int* v1; // rax

	v0 = 0i64;
	*(_QWORD*)(qword_140C635F0 + 5712) = 0i64;
	v1 = sub_14018B280(264i64, 0);
	if (v1)
		v0 = (void(__fastcall***)(_QWORD))sub_1400367F0((__int64)v1);
	if ((int)sub_140036BF0((__int64)v0) < 0 || (int)sub_14003E380(qword_140C66E40, v0) < 0)
		sub_140046640(qword_140C66E40, 501419);
	else
		*(_DWORD*)(qword_140C66E40 + 168) = 3;
	if (v0)
		(*v0)[1](v0);
	return 0i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C66E40: using guessed type __int64 qword_140C66E40;

