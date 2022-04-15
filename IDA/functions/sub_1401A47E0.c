//----- (00000001401A47E0) ----------------------------------------------------
__int64 __fastcall sub_1401A47E0(__int64 a1)
{
	float v1; // xmm0_4
	__int64 v3; // rcx
	__int64 v4; // rax
	int v6; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+28h] [rbp-20h]
	void(__fastcall * v8)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v9; // [rsp+38h] [rbp-10h]

	v1 = *(float*)&dword_140C1E45C;
	v3 = a1 + 24;
	*(_QWORD*)(v3 - 24) = &off_140B5EA08;
	v4 = qword_140C63728;
	*(_QWORD*)(v3 + 16) = 0i64;
	*(_QWORD*)(v3 + 24) = 0i64;
	*(_QWORD*)(v3 + 40) = 0i64;
	*(_QWORD*)(v3 + 48) = 0i64;
	*(_DWORD*)v3 = 1414420037;
	*(_DWORD*)(v3 + 68) = 0;
	*(_QWORD*)(a1 + 8) = v4 + 4848;
	*(_QWORD*)(a1 + 16) = 0i64;
	if (v1 >= 0.0)
	{
		v6 = 0;
		v9 = 0i64;
		v8 = sub_1401A4870;
		v7 = a1;
		sub_140195960(v3, 60000, (__int64)&v6, 4);
	}
	return a1;
}
// 140B5EA08: using guessed type __int64 (__fastcall *off_140B5EA08)();
// 140C1E45C: using guessed type int dword_140C1E45C;
// 140C63728: using guessed type __int64 qword_140C63728;

