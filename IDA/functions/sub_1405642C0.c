//----- (00000001405642C0) ----------------------------------------------------
void __fastcall sub_1405642C0(__int64 a1, int a2, _QWORD* a3)
{
	__int64 v3; // rsi
	int* v6; // rax
	__int64 v7; // rbx
	__int64* v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rax
	int v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]
	void(__fastcall * v13)(__int64, int*); // [rsp+30h] [rbp-18h]
	__int64 v14; // [rsp+38h] [rbp-10h]

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
		v11 = 1;
		v13 = sub_1405643C0;
		v12 = v3;
		v14 = v7;
		sub_140195960(v7 + 120, a2, (__int64)&v11, 4);
	}
	else
	{
		v10 = sub_1403D90D0(qword_140C65898, *(_DWORD*)v7);
		if (v10)
			sub_14045E9E0(v10, *(_DWORD*)(v7 + 16), *(_DWORD*)(v7 + 4));
		sub_140569980(v7);
		sub_14018B900(v7, 0);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

