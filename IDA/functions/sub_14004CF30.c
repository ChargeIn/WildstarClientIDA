//----- (000000014004CF30) ----------------------------------------------------
void __fastcall sub_14004CF30(__int64 a1)
{
	int v2; // ebp
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rax
	unsigned __int64 v6; // rcx
	const __m128i* v7; // rbx
	const __m128i* v8; // rax
	__int64 v9; // r15
	__int64 v10; // rdi
	int v11; // eax
	__m128i* v12; // rbx
	void(__fastcall * **v13)(_QWORD); // r14
	int* v14; // rax
	__int64 v15; // r14
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18[6]; // [rsp+30h] [rbp-68h] BYREF
	int v19; // [rsp+60h] [rbp-38h]
	__m128i* v20; // [rsp+A0h] [rbp+8h] BYREF

	sub_14004CE60(a1);
	v2 = -2147467259;
	*(_DWORD*)(a1 + 372) = 0;
	*(_DWORD*)(a1 + 376) = -2147467259;
	v3 = *(_QWORD*)(a1 + 392);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_QWORD*)(a1 + 392) = 0i64;
	}
	v4 = *(_QWORD*)(a1 + 400);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 400) = 0i64;
	}
	v5 = sub_14024ACC0(*(_DWORD*)(a1 + 368));
	if (v5)
	{
		v6 = *(_QWORD*)(v5 + 8);
		if (v6)
		{
			if (v6 <= qword_140C3FE70)
				v7 = (const __m128i*)(v6 + qword_140C3FE68);
			else
				v7 = 0i64;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = sub_1407DD8D8(v7, 0x5Cu);
		v9 = (__int64)v8;
		if (v8)
			v9 = (__int64)v8->m128i_i64 + 2;
		v20 = 0i64;
		v10 = 0i64;
		v11 = sub_1402D9AB0((__int64)v7, v9, (const __m128i**) & v20);
		v12 = v20;
		*(_DWORD*)(a1 + 376) = v11;
		if (v11 >= 0)
		{
			v13 = (void(__fastcall***)(_QWORD))qword_140C65878;
			v18[1] = qword_140C3B488;
			v18[2] = qword_140C3B458;
			v18[0] = 137477857i64;
			v18[3] = qword_140C3B460;
			v18[4] = qword_140C3B468;
			v18[5] = qword_140C3B4E0;
			v19 = dword_140C3B520;
			if (qword_140C65878)
			{
				if (v12)
				{
					v14 = sub_14018B280(6240i64, 0);
					if (v14)
						v15 = sub_140351A20((__int64)v14, v13);
					else
						v15 = 0i64;
					v2 = sub_140353720(v15, v12, 0i64, (__int64)v18, (__int64)v18);
					if (v2 >= 0)
					{
						v10 = v15;
						v2 = 0;
					}
					else if (v15)
					{
						sub_1403522C0(v15);
						sub_14018B900(v15, 0);
					}
				}
				else
				{
					v2 = -2147024809;
				}
			}
			*(_DWORD*)(a1 + 376) = v2;
			if (v2 >= 0)
			{
				if (*(_QWORD*)(a1 + 392) != v10)
				{
					if (v10)
						(**(void(__fastcall***)(__int64))v10)(v10);
					v16 = *(_QWORD*)(a1 + 392);
					if (v16)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
					*(_QWORD*)(a1 + 392) = v10;
				}
				if (*(__m128i**)(a1 + 400) != v12)
				{
					if (v12)
						(*(void(__fastcall**)(__m128i*))v12->m128i_i64[0])(v12);
					v17 = *(_QWORD*)(a1 + 400);
					if (v17)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
					*(_QWORD*)(a1 + 400) = v12;
				}
			}
			else
			{
				sub_1400035B0();
			}
			if (v10)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		}
		else
		{
			sub_1400035B0();
		}
		if (v12)
			(*(void(__fastcall**)(__m128i*))(v12->m128i_i64[0] + 8))(v12);
	}
}
// 140C3B458: using guessed type __int64 qword_140C3B458;
// 140C3B460: using guessed type __int64 qword_140C3B460;
// 140C3B468: using guessed type __int64 qword_140C3B468;
// 140C3B488: using guessed type __int64 qword_140C3B488;
// 140C3B4E0: using guessed type __int64 qword_140C3B4E0;
// 140C3B520: using guessed type int dword_140C3B520;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65878: using guessed type __int64 qword_140C65878;

