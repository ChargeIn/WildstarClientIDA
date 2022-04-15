//----- (0000000140340210) ----------------------------------------------------
__int64 __fastcall sub_140340210(__int64 a1, __int64* a2, unsigned int a3, float a4)
{
	__int64 result; // rax
	__int64 v8; // rcx
	__int64 v9; // rcx
	int* v10; // rax
	int v11; // edi
	__int64 v12; // rbx
	void(__fastcall * **v13)(_QWORD); // rsi
	__int64 v14; // rcx
	__int64* v15; // rdx
	__int64 v16; // rax
	void(__fastcall * **v17)(_QWORD); // [rsp+20h] [rbp-278h] BYREF
	__int64 v18; // [rsp+28h] [rbp-270h] BYREF
	int v19; // [rsp+30h] [rbp-268h]
	int v20[128]; // [rsp+40h] [rbp-258h] BYREF

	if (!a2)
		return 2147942487i64;
	sub_1407E4830(v20, 0i64, 0x200ui64);
	v8 = *(_QWORD*)(a1 + 16);
	v18 = 0i64;
	v19 = 0;
	result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*, int*))(a1 + 8))(v8, a3, &v18, v20);
	if ((int)result >= 0)
	{
		if (a4 == 0.0 || *((float*)&v18 + 1) == 0.0 || *((float*)&v18 + 1) >= a4)
		{
			v9 = qword_140C7A230[(unsigned __int8)v18];
			if (v9)
			{
				while (*(_DWORD*)(v9 + 8) != (_DWORD)v18)
				{
					v9 = *(_QWORD*)(v9 + 168);
					if (!v9)
						goto LABEL_11;
				}
			}
			else
			{
			LABEL_11:
				v9 = 0i64;
			}
			*a2 = v9;
			if (v9)
			{
				(**(void(__fastcall***)(__int64))v9)(v9);
				return 0i64;
			}
			else
			{
				result = (*(__int64(__fastcall**)(__int64, void(__fastcall****)(_QWORD), int*))(*(_QWORD*)a1 + 424i64))(
					a1,
					&v17,
					v20);
				if ((int)result >= 0)
				{
					v10 = sub_14018B280(176i64, 0);
					v11 = -2147024809;
					v12 = (__int64)v10;
					if (v10)
					{
						*((_QWORD*)v10 + 3) = 0i64;
						*(_QWORD*)v10 = off_140B64FC0;
						*((_QWORD*)v10 + 6) = 0i64;
						*((_QWORD*)v10 + 7) = 0i64;
						v10[24] = -2147024809;
						*((_QWORD*)v10 + 13) = 0i64;
						*((_QWORD*)v10 + 11) = off_140B65328;
						*((_QWORD*)v10 + 14) = 0i64;
						*((_QWORD*)v10 + 15) = 1i64;
						*((_QWORD*)v10 + 16) = 0i64;
						*((_QWORD*)v10 + 17) = 0i64;
						*((_QWORD*)v10 + 18) = 0i64;
						*((_QWORD*)v10 + 20) = 0i64;
						*((_QWORD*)v10 + 21) = 0i64;
						*((_QWORD*)v10 + 8) = sub_140344410;
						v10[2] = 0;
						*(_QWORD*)(v10 + 3) = 1106247680i64;
						v10[20] = 0;
						v10[38] = 0;
						*((_QWORD*)v10 + 9) = v10;
						*((_QWORD*)v10 + 5) = v10;
						*((_QWORD*)v10 + 4) = sub_1403443C0;
					}
					else
					{
						v12 = 0i64;
					}
					v13 = v17;
					if (!v17 || !a3)
						goto LABEL_26;
					*(_DWORD*)(v12 + 80) = a3;
					v14 = *(_QWORD*)(v12 + 24);
					if (v14)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
						*(_QWORD*)(v12 + 24) = 0i64;
					}
					*(_QWORD*)(v12 + 24) = v13;
					(**v13)(v13);
					*(_QWORD*)(v12 + 8) = v18;
					*(_DWORD*)(v12 + 16) = v19;
					v15 = &qword_140C7A230[(unsigned __int8)v18];
					if (!*(_QWORD*)(v12 + 160))
					{
						*(_QWORD*)(v12 + 160) = v15;
						*(_QWORD*)(v12 + 168) = *v15;
						*v15 = v12;
						v16 = *(_QWORD*)(v12 + 168);
						if (v16)
							*(_QWORD*)(v16 + 160) = v12 + 168;
					}
					v11 = sub_140344310(v12);
					if (v11 < 0)
					{
					LABEL_26:
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
						v12 = 0i64;
					}
					(*v17)[1](v17);
					*a2 = v12;
					return (unsigned int)v11;
				}
			}
		}
		else
		{
			return 2147500036i64;
		}
	}
	return result;
}
// 140B64FC0: using guessed type __int64 (__fastcall *off_140B64FC0[22])();
// 140B65328: using guessed type __int64 (__fastcall *off_140B65328[13])();
// 140C7A230: using guessed type _QWORD qword_140C7A230[256];
// 140340210: using guessed type int var_258[128];

