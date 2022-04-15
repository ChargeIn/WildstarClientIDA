//----- (00000001400DE970) ----------------------------------------------------
__int64 __fastcall sub_1400DE970(_QWORD* a1)
{
	_QWORD* v2; // rdi
	__int64 v3; // rax
	__int64 v4; // rbx
	void(__fastcall * ***v5)(_QWORD); // rax
	void(__fastcall * **v6)(_QWORD); // rdx
	__int64 v7; // rax

	v2 = (_QWORD*)sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v3 = sub_1400D66A0(a1, 2u);
		v4 = v3;
		if (v3)
		{
			v5 = *(void(__fastcall*****)(_QWORD))(v3 + 792);
			if (v5)
				v6 = *v5;
			else
				v6 = 0i64;
			sub_1400D2DF0((__int64)v2, v6);
			v7 = (*(__int64(__fastcall**)(_QWORD*, const wchar_t*))(*v2 + 448i64))(v2, L"Picture");
			v2[82] = v7 & *(_QWORD*)(v4 + 656) | v2[82] & ~v7;
		}
	}
	return 0i64;
}
// 140A166C8: using guessed type wchar_t aPicture[8];

