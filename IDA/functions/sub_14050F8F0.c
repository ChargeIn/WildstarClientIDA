//----- (000000014050F8F0) ----------------------------------------------------
__int16* __fastcall sub_14050F8F0(_QWORD* a1)
{
	__int16* result; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	int* v5; // rsi
	void(__fastcall * **v6)(_QWORD); // rbx
	__int64 v7; // r14
	int v8; // eax
	__int64 v9; // rcx
	__int64 v10; // r8
	int* v11; // rax
	int* v12; // rdi
	__int64 v13; // rsi
	int v14; // eax
	unsigned int v15; // esi
	int v16; // [rsp+30h] [rbp-28h] BYREF
	int* v17; // [rsp+38h] [rbp-20h]

	result = sub_14034BDD0((__int64)a1, qword_140C7DC98);
	if (result)
	{
		v3 = sub_1403D90D0(qword_140C65898, SHIDWORD(qword_140C7DC60));
		v4 = v3;
		if (v3)
			v5 = *(int**)(v3 + 24);
		else
			v5 = (int*)sub_1404835C0(qword_140C65918, dword_140C7DC68);
		v6 = 0i64;
		v7 = 0i64;
		v8 = sub_140056D60(a1, 1u);
		if (v8)
			v7 = sub_1405A8A40(v9, v8);
		sub_14054F9E0(&v16, qword_140C7DC98, v10, v4, v5, v7);
		v11 = sub_14018B280(32i64, 0);
		v12 = v17;
		v13 = (__int64)v11;
		if (v11)
		{
			v14 = sub_1406132E0(HIDWORD(qword_140C7DC98));
			v6 = (void(__fastcall***)(_QWORD))sub_140741F10(v13, v12, v14);
		}
		v15 = sub_1407421D0(a1, v6);
		if (v6)
			(*v6)[1](v6);
		if (v12)
			sub_14018B900((__int64)v12, 0);
		return (__int16*)v15;
	}
	return result;
}
// 14050F96C: variable 'v9' is possibly undefined
// 14050F98C: variable 'v10' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;
// 140C7DC68: using guessed type int dword_140C7DC68;
// 140C7DC98: using guessed type __int64 qword_140C7DC98;

