//----- (00000001403104B0) ----------------------------------------------------
__int64 __fastcall sub_1403104B0(__int64 a1, __m128i* a2, __int64* a3, int a4)
{
	__int64 v9; // rcx
	int v10; // esi
	__int64(__fastcall * v11)(__int64); // rbx
	int* v12; // rax
	__int64 v13; // rdi
	int v14; // [rsp+20h] [rbp-28h]
	__int64(__fastcall * v15)(__int64); // [rsp+60h] [rbp+18h] BYREF

	if (!a3)
		return 2147942487i64;
	v9 = *(_QWORD*)(a1 + 16);
	v15 = 0i64;
	v10 = sub_1402EC620(v9, a2, &v15);
	if (v10 < 0
		&& ((a4 & 2) != 0
			|| (a4 |= 4u, v10 = sub_1402EC800(*(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 16) + 112i64, &v15), v10 < 0)))
	{
		v11 = v15;
	}
	else
	{
		v12 = sub_14018B280(1840i64, 0);
		if (v12)
			v13 = sub_1402F22E0((__int64)v12);
		else
			v13 = 0i64;
		v14 = a4;
		v11 = v15;
		v10 = sub_1402F3780(v13, a2->m128i_i32, a1, (void(__fastcall***)(_QWORD))v15, v14);
		if (v10 >= 0)
		{
			*a3 = v13;
			v10 = 0;
		}
		else if (v13)
		{
			sub_1402F27B0(v13);
			sub_14018B900(v13, 0);
		}
	}
	if (v11)
		(*(void(__fastcall**)(__int64(__fastcall*)(__int64)))(*(_QWORD*)v11 + 8i64))(v11);
	return (unsigned int)v10;
}

