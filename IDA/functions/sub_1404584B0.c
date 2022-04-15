//----- (00000001404584B0) ----------------------------------------------------
__int64 __fastcall sub_1404584B0(__int64 a1, int a2, int* a3, unsigned int a4)
{
	__int64 v5; // r15
	unsigned int v7; // ebx
	unsigned __int32* v8; // rsi
	__int64 v9; // r14
	unsigned __int32 v10; // xmm6_4
	__int64 v11; // rax
	__int64 v12; // rbx

	v5 = a4;
	v7 = 0;
	v8 = (unsigned __int32*)(a1 + 1476);
	v9 = sub_1404835C0(qword_140C65918, a2);
	do
	{
		v10 = 0;
		if (v9 && *(_DWORD*)(a1 + 128) != 24)
		{
			v10 = sub_1404585C0(a1, v9, v7).m128_u32[0];
			goto LABEL_12;
		}
		if (qword_140C63840)
		{
			v11 = qword_140C63840(off_140A6DEE0, v7, qword_140C63858);
		}
		else
		{
			if (dword_140C64070 || (int)sub_140247760() < 0)
				goto LABEL_12;
			v11 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64930 + 24i64))(qword_140C64930, v7);
		}
		if (v11)
			v10 = *(_DWORD*)(v11 + 24);
	LABEL_12:
		++v7;
		*(v8 - 1) = v10;
		*v8 = v10;
		v8 += 2;
	} while (v7 < 0xC5);
	if ((_DWORD)v5)
	{
		v12 = v5;
		do
		{
			sub_140466A90(a1, a3);
			a3 += 3;
			--v12;
		} while (v12);
	}
	return 0i64;
}
// 140A6DEE0: using guessed type wchar_t *off_140A6DEE0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64070: using guessed type int dword_140C64070;
// 140C64930: using guessed type __int64 qword_140C64930;
// 140C65918: using guessed type __int64 qword_140C65918;

