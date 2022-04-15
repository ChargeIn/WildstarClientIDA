//----- (00000001403105C0) ----------------------------------------------------
__int64 __fastcall sub_1403105C0(__int64 a1, __int64 a2, __int64* a3, int a4)
{
	__int64 v8; // rcx
	int v9; // esi
	void(__fastcall * **v10)(_QWORD); // rbx
	int* v11; // rax
	__int64 v12; // rdi
	int v13; // [rsp+20h] [rbp-28h]
	void(__fastcall * **v14)(_QWORD); // [rsp+60h] [rbp+18h] BYREF

	if (!a3)
		return 2147942487i64;
	v8 = *(_QWORD*)(a1 + 16);
	v14 = 0i64;
	v9 = sub_1402EC800(v8, a2, &v14);
	if (v9 < 0
		&& ((a4 & 2) != 0
			|| (a4 |= 4u, v9 = sub_1402EC800(*(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 16) + 112i64, &v14), v9 < 0)))
	{
		v10 = v14;
	}
	else
	{
		v11 = sub_14018B280(1840i64, 0);
		if (v11)
			v12 = sub_1402F22E0((__int64)v11);
		else
			v12 = 0i64;
		v13 = a4;
		v10 = v14;
		v9 = sub_1402F3780(v12, (int*)L"Unknown", a1, v14, v13);
		if (v9 >= 0)
		{
			*a3 = v12;
			v9 = 0;
		}
		else if (v12)
		{
			sub_1402F27B0(v12);
			sub_14018B900(v12, 0);
		}
	}
	if (v10)
		(*v10)[1](v10);
	return (unsigned int)v9;
}
// 140AF1480: using guessed type wchar_t aUnknown_9[8];

