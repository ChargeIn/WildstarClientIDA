//----- (000000014052E790) ----------------------------------------------------
__int64 __fastcall sub_14052E790(__int64 a1, int a2, int* a3, unsigned __int8 a4)
{
	__int64 v6; // r15
	int v8; // r10d
	int v9; // eax
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rbx
	int v14; // r14d
	__int64(__fastcall * **v15)(_QWORD); // rcx
	int v16; // ebp
	__int64 v17; // rax
	__int64 v18; // rbx
	__int64 v19; // rax
	int v21; // [rsp+60h] [rbp+8h] BYREF

	v6 = a2;
	if (*(char*)(a1 + 28) < 0)
	{
		v8 = *a3;
		*(_DWORD*)(a1 + 904) = *a3;
		*(_DWORD*)(a1 + 908) = a3[1];
		*(_DWORD*)(a1 + 8i64 * a2 + 864) = v8;
		*(_DWORD*)(a1 + 8i64 * a2 + 868) = *(_DWORD*)(a1 + 908);
		v9 = sub_14018CDF0();
		*(_DWORD*)(a1 + 932) = v9;
		*(_DWORD*)(a1 + 4 * v6 + 912) = v9;
		sub_14052AD50(a1, &v21, a3);
		if (!(_DWORD)v6)
		{
			if (*(int*)(a1 + 1264) <= 2 && (*(_BYTE*)(a1 + 664) & 2) == 0)
			{
				*(_DWORD*)(a1 + 1228) = *a3;
				*(_DWORD*)(a1 + 1232) = a3[1];
				*(_DWORD*)(a1 + 1220) = 1;
			}
			if (*(_DWORD*)(a1 + 1264) == 4)
			{
				v11 = *(_QWORD*)(a1 + 1192);
				if (v11)
				{
					if (*(int*)(a1 + 1268) < 4)
					{
						if (qword_140C658F8)
						{
							v12 = sub_140449420(v10, *(unsigned int(__fastcall****)(_QWORD))(v11 + 8), &v21);
							v13 = v12;
							if (v12)
							{
								if (v12 == *(_QWORD*)(a1 + 1152))
								{
									sub_140529B60(a1, v12);
									*(_DWORD*)(a1 + 1264) = 3;
									*(_OWORD*)(a1 + 1248) = 0i64;
									sub_1400EA3E0(
										*(_QWORD*)(qword_140C65898 + 29504),
										"ZoneMapWindowModeChange",
										"i",
										*(unsigned int*)(a1 + 1264));
								}
								else
								{
									sub_140529B60(a1, v12);
									v14 = 0;
									if (*(_DWORD*)(a1 + 1264) != 3)
									{
										v14 = 1;
										*(_DWORD*)(a1 + 1264) = 3;
									}
									v15 = *(__int64(__fastcall****)(_QWORD))(a1 + 1152);
									v16 = -1;
									if (v15)
										v16 = (**v15)(v15);
									v17 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 24i64))(v13);
									v18 = *(_QWORD*)(qword_140C65898 + 29504);
									v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
									sub_1400EA3E0(v18, "ZoneMapWindowChange", byte_1409F1A4C, v19, v16);
									if (v14)
										sub_1400EA3E0(
											*(_QWORD*)(qword_140C65898 + 29504),
											"ZoneMapWindowModeChange",
											L"i",
											*(unsigned int*)(a1 + 1264));
								}
							}
						}
					}
				}
			}
		}
	}
	return sub_1400D2120(a1, v6, a3, a4);
}
// 14052E87F: variable 'v10' is possibly undefined
// 1409F1A4C: using guessed type _BYTE byte_1409F1A4C[40];
// 1409F1AF4: using guessed type wchar_t aI_47[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F8: using guessed type __int64 qword_140C658F8;

