//----- (00000001400DAC40) ----------------------------------------------------
__int64 __fastcall sub_1400DAC40(_QWORD* a1)
{
	__int64* v2; // rbx
	char* v3; // rax
	_QWORD* v4; // rax
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	__int64 v9; // [rsp+28h] [rbp-20h]

	v2 = (__int64*)sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
		v4 = sub_14018F2D0(&v8, v3);
		v5 = sub_1400E58C0(v2[4], (int*)v4[1]);
		v6 = v2[86];
		v2[87] = v5;
		if (v6)
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v6 + 40i64))(v6, *(_QWORD*)(v5 + 96));
		if (v9)
			sub_14018B900(v9, 0);
	}
	return 0i64;
}

