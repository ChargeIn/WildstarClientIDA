//----- (0000000140506520) ----------------------------------------------------
__m128 __fastcall sub_140506520(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, char a5)
{
	__int128 v5; // xmm6
	char v7; // r14
	__int64 v8; // rsi
	__int64 v9; // rdi
	__int64 v10; // rbx
	__int64 v11; // rbp
	__int128 v12; // xmm0
	__int64* v13; // rbx
	__int64 v14; // rcx
	__int128 v16; // [rsp+40h] [rbp-98h] BYREF
	__int64 v17; // [rsp+50h] [rbp-88h] BYREF
	__int64 v18; // [rsp+58h] [rbp-80h]
	__int64 v19; // [rsp+60h] [rbp-78h]
	__int64 v20; // [rsp+68h] [rbp-70h]
	__int64 v21; // [rsp+70h] [rbp-68h] BYREF
	__int64 v22; // [rsp+78h] [rbp-60h]

	v5 = 0x40000000u;
	v18 = 0i64;
	v19 = 0i64;
	v20 = 0i64;
	v7 = 0;
	sub_140505590(a2, (__int64)&v17, a4);
	v8 = v19;
	v9 = v18;
	if (v19 != v18)
	{
		v10 = v19 - 88;
		do
		{
			if (!a5 || *(_QWORD*)v10 || *(_DWORD*)(v10 + 48) == 1 && !v7)
			{
				v7 = 1;
				sub_14018EFA0(&v21, (__int64)L"%llu", *(_QWORD*)v10);
				v16 = xmmword_140B7B240;
				v11 = v22;
				v17 = 0i64;
				v19 = 0x447A0000447A0000i64;
				(*(void(__fastcall**)(__int64, __int64, __int64, __int64, __int64*, int, __int128*, int))(*(_QWORD*)qword_140C65680 + 264i64))(
					qword_140C65680,
					a3,
					v22,
					-1i64,
					&v17,
					1024,
					&v16,
					1);
				v12 = (unsigned int)v19;
				*(float*)&v12 = (float)((float)(*(float*)&v19 - *(float*)&v17) + 1.0) + *(float*)&v5;
				v5 = v12;
				*(float*)&v5 = (float)(*(float*)&v12 + 4.0) + (float)(int)qword_140C46108;
				if (v11)
					sub_14018B900(v11, 0);
			}
			v10 -= 88i64;
		} while (v10 + 88 != v9);
	}
	if (v9 != v8)
	{
		v13 = (__int64*)(v9 + 24);
		do
		{
			v14 = v13[5];
			if (v14)
				sub_14018B900(v14, 0);
			if (*v13)
				sub_14018B900(*v13, 0);
			v13 += 11;
		} while (v13 - 3 != (__int64*)v8);
	}
	if (v9)
		sub_14018B900(v9, 0);
	return (__m128)v5;
}
// 140B102F8: using guessed type wchar_t aLlu_3[5];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C46108: using guessed type __int64 qword_140C46108;
// 140C65680: using guessed type __int64 qword_140C65680;

