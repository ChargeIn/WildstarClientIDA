//----- (0000000140134E60) ----------------------------------------------------
void** __fastcall sub_140134E60(LARGE_INTEGER* a1)
{
	void** result; // rax
	LONGLONG QuadPart; // rcx
	unsigned int v4; // r14d
	__int64 v5; // r8
	const __m128i* v6; // rcx
	_QWORD* v7; // rax
	__int64 v8; // r8
	const __m128i* v9; // rdx
	__int64 v10; // rdx
	__int64 v11; // rdx
	const __m128i* v12; // rbx
	signed __int32 v13; // ecx
	signed __int32 v14; // ecx
	__int64 v15; // rdi
	int v16; // ebx
	__int64 v17; // rdx
	__int64 v18; // [rsp+30h] [rbp-D8h]
	__int64 v19; // [rsp+38h] [rbp-D0h]
	__int64 v20; // [rsp+48h] [rbp-C0h] BYREF
	const __m128i* v21; // [rsp+50h] [rbp-B8h]
	__int64 v22; // [rsp+58h] [rbp-B0h]
	__int64 v23; // [rsp+60h] [rbp-A8h]
	int v24; // [rsp+68h] [rbp-A0h] BYREF
	__int64 v25; // [rsp+78h] [rbp-90h] BYREF
	__int64 v26; // [rsp+80h] [rbp-88h]
	char v27[16]; // [rsp+98h] [rbp-70h] BYREF
	char v28[744]; // [rsp+A8h] [rbp-60h] BYREF
	signed __int32 v29; // [rsp+390h] [rbp+288h] BYREF
	__int64 v30; // [rsp+398h] [rbp+290h]
	void* retaddr; // [rsp+420h] [rbp+318h] BYREF

	result = &retaddr;
	QuadPart = a1->QuadPart;
	if (QuadPart)
	{
		v4 = 0;
		result = (void**)(*(__int64(__fastcall**)(LONGLONG))(*(_QWORD*)QuadPart + 16i64))(QuadPart);
		if ((int)result > 0)
		{
			do
			{
				(*(void(__fastcall**)(LONGLONG, __int64*, _QWORD, LARGE_INTEGER, _DWORD))(*(_QWORD*)a1->QuadPart + 24i64))(
					a1->QuadPart,
					&v20,
					v4,
					a1[4],
					0);
				v6 = v21;
				if (((v22 - (_QWORD)v21) & 0xFFFFFFFFFFFFFFFEui64) != 0 && a1[14].QuadPart != a1[13].QuadPart)
				{
					if ((unsigned int)sub_1401B58D0((__int64)v21, v21, v5))
						goto LABEL_10;
					v7 = (_QWORD*)(*(__int64(__fastcall**)(LONGLONG, __int64*, _QWORD, LARGE_INTEGER, int))(*(_QWORD*)a1->QuadPart + 24i64))(
						a1->QuadPart,
						&v25,
						v4,
						a1[4],
						1);
					v9 = v21;
					v21 = (const __m128i*)v7[1];
					v7[1] = v9;
					v10 = v22;
					v22 = v7[2];
					v7[2] = v10;
					v11 = v23;
					v23 = v7[3];
					v7[3] = v11;
					if (v26)
						sub_14018B900(v26, 0);
					v6 = v21;
					if (((v22 - (_QWORD)v21) & 0xFFFFFFFFFFFFFFFEui64) == 0)
						goto LABEL_27;
					if ((unsigned int)sub_1401B58D0((__int64)v21, v21, v8))
					{
					LABEL_10:
						sub_140129AF0((__int64)v27, 0i64);
						v12 = v21;
						v24 = -1;
						if (v30)
						{
							v13 = v29;
							if (v29)
							{
								while (v13 != _InterlockedCompareExchange(&v29, v13 + 1, v13))
								{
									v13 = v29;
									if (!v29)
										goto LABEL_23;
								}
								if (v30)
								{
									(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v30 + 32i64))(v30, &v24);
									v14 = v29;
									if (v29)
									{
										while (v14 != _InterlockedCompareExchange(&v29, v14 - 1, v14))
										{
											v14 = v29;
											if (!v29)
												goto LABEL_23;
										}
										if (v14 == 1 && v30)
										{
											(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 8i64))(v30);
											v30 = 0i64;
										}
									}
								}
							}
						}
					LABEL_23:
						if ((int)sub_1401A7BD0((__int64)v28, v12) >= 0)
						{
							v15 = *(_QWORD*)(a1->QuadPart + 400);
							sub_14012EFE0((__int64)v27, v15);
							LODWORD(v19) = sub_1400578C0(v15);
							LODWORD(v18) = v4 + 1;
							v16 = v19;
							sub_1400F3010(a1->QuadPart + 384, a1[1], a1[7].LowPart, a1[13].QuadPart, byte_1409D8E74, v18, v19);
							sub_1400579E0(v15, v17, v16);
						}
						sub_140129C40((__int64)v27);
					}
					v6 = v21;
				}
			LABEL_27:
				if (v6)
					sub_14018B900((__int64)v6, 0);
				++v4;
				result = (void**)(*(__int64(__fastcall**)(LONGLONG))(*(_QWORD*)a1->QuadPart + 16i64))(a1->QuadPart);
			} while ((int)v4 < (int)result);
		}
	}
	return result;
}
// 140134F04: variable 'v5' is possibly undefined
// 140134F91: variable 'v8' is possibly undefined
// 1401350A1: variable 'v18' is possibly undefined
// 1401350A1: variable 'v19' is possibly undefined
// 1401350AC: variable 'v17' is possibly undefined
// 1409D8E74: using guessed type _BYTE byte_1409D8E74[24];
// 140134E60: using guessed type char var_370[744];

