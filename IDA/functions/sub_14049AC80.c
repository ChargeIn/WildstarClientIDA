//----- (000000014049AC80) ----------------------------------------------------
__int16* __fastcall sub_14049AC80(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rbx
	__int16* result; // rax
	__int64 v6; // rax
	__int64 v7; // rcx
	int* v8; // rdi
	int* v9; // rax
	__int64 v10; // rbx
	__int64 v11; // [rsp+30h] [rbp+8h] BYREF

	v11 = a1;
	v3 = qword_140C65998;
	sub_1401529E0(qword_140C65998 + 200, &v11, a3);
	if (v11 == *(_QWORD*)(v3 + 208))
		return 0i64;
	v6 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 64) + 40i64))(*(_QWORD*)(v11 + 64));
	result = sub_14034BDD0(v7, *(_DWORD*)(v6 + 124));
	v8 = (int*)result;
	if (result)
	{
		v9 = sub_14018B280(864i64, 0);
		if (v9)
			v10 = sub_14013FEB0((__int64)v9, a2);
		else
			v10 = 0i64;
		sub_140141600(v10, v8, 0i64, 0i64);
		return (__int16*)v10;
	}
	return result;
}
// 14049ACD7: variable 'v7' is possibly undefined
// 140C65998: using guessed type __int64 qword_140C65998;

