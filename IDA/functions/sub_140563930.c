//----- (0000000140563930) ----------------------------------------------------
void __fastcall sub_140563930(__int64 a1, int a2, _QWORD* a3)
{
	__int64 v3; // rbx
	int* v6; // rax
	__int64 v7; // rdx
	__int64* v8; // rcx
	__int64 v9; // rax
	int v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]
	void(__fastcall * v12)(__int64, __int64); // [rsp+30h] [rbp-18h]
	__int64 v13; // [rsp+38h] [rbp-10h]

	v3 = qword_140C65B70;
	v6 = sub_14018B280(192i64, 0);
	if (v6)
		v7 = sub_140567380((__int64)v6, a3);
	else
		v7 = 0i64;
	v8 = (__int64*)(v3 + 2000);
	if (!*(_QWORD*)(v7 + 104))
	{
		*(_QWORD*)(v7 + 104) = v8;
		*(_QWORD*)(v7 + 112) = *v8;
		*v8 = v7;
		v9 = *(_QWORD*)(v7 + 112);
		if (v9)
			*(_QWORD*)(v9 + 104) = v7 + 112;
	}
	if (a2)
	{
		v13 = v7;
		v12 = sub_140563AD0;
		v10 = 1;
		v11 = v3;
		sub_140195960(v7 + 120, a2, (__int64)&v10, 4);
	}
	else
	{
		sub_140563AD0(v3, v7);
	}
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

