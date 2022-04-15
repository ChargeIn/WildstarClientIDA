//----- (00000001401AD4B0) ----------------------------------------------------
__int64 __fastcall sub_1401AD4B0(_QWORD* a1)
{
	__int64 v1; // rax
	void(__fastcall * v3)(_QWORD); // r8

	v1 = a1[5];
	if (!v1)
		return 4294967294i64;
	v3 = (void(__fastcall*)(_QWORD))a1[7];
	if (!v3)
		return 4294967294i64;
	if (*(_QWORD*)(v1 + 56))
		v3(a1[8]);
	((void(__fastcall*)(_QWORD, _QWORD))a1[7])(a1[8], a1[5]);
	a1[5] = 0i64;
	return 0i64;
}

