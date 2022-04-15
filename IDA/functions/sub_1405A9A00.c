//----- (00000001405A9A00) ----------------------------------------------------
__int64 __fastcall sub_1405A9A00(__int64 a1, unsigned int a2, int a3)
{
	__int64 v3; // r14
	__int64 result; // rax
	__int64 v7; // rdi
	__int64 v8; // rdx
	__int64 v9; // r8
	__int64* v10; // r9
	__int64 v11; // rsi
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rcx
	__int128* v15; // rax
	unsigned __int64 v16; // rcx
	unsigned __int64 v17; // rdx
	int v18; // eax
	__int64 v19; // rcx
	__int64 v20; // r8
	__int64 v21; // rcx
	__int64 v22; // rcx
	int v23; // [rsp+30h] [rbp-29h] BYREF
	int v24; // [rsp+34h] [rbp-25h]
	int v25; // [rsp+38h] [rbp-21h]
	__int64 v26; // [rsp+3Ch] [rbp-1Dh]
	__int64 v27; // [rsp+44h] [rbp-15h]
	int v28; // [rsp+4Ch] [rbp-Dh]
	__int128 v29[6]; // [rsp+50h] [rbp-9h] BYREF
	__int64 v30; // [rsp+C0h] [rbp+67h] BYREF
	__int64 v31; // [rsp+D8h] [rbp+7Fh] BYREF

	v3 = a2;
	result = sub_1405B15C0((__int64)&qword_140C7DFB0, *(_DWORD*)(a1 + 4));
	v7 = result;
	if (result)
	{
		result = sub_140206C60(*(_DWORD*)(a1 + 12));
		if (result)
		{
			result = sub_140206820(*(_DWORD*)(result + 124));
			v11 = result;
			if (result)
			{
				if (a3)
				{
					v22 = *(_QWORD*)(a1 + 88);
					if (v22)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 152i64))(v22);
					result = *(unsigned int*)(a1 + 8);
					if (*(_DWORD*)(v7 + 184) == (_DWORD)result)
					{
						*(_DWORD*)(a1 + 184) = 4;
						return sub_1405ABF80(v7);
					}
					else
					{
						*(_DWORD*)(a1 + 184) = 5;
					}
				}
				else
				{
					v12 = *(_QWORD*)(a1 + 104);
					*(_DWORD*)(a1 + 184) = 3;
					if (v12 && (v10 = (__int64*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 336i64))(v12)) != 0i64)
					{
						result = *(unsigned int*)(v11 + 4 * v3 + 68);
						if ((_DWORD)result)
						{
							v23 = *(_DWORD*)(v11 + 4 * v3 + 68);
							v13 = *v10;
							v25 = 1065353216;
							v24 = 0;
							v26 = 0i64;
							v27 = 0i64;
							v28 = 0;
							return (*(__int64(__fastcall**)(__int64*, _QWORD, int*))(v13 + 584))(v10, 0i64, &v23);
						}
					}
					else
					{
						v14 = *(_QWORD*)(a1 + 88);
						if (v14 && *(_DWORD*)(v11 + 4 * v3 + 68))
						{
							(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)v14 + 152i64))(v14, v8, v9, v10);
							v15 = (__int128*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 56i64))(*(_QWORD*)(a1 + 88));
							v16 = *(_QWORD*)(v11 + 16);
							v29[0] = *v15;
							v29[1] = v15[1];
							v29[2] = v15[2];
							v29[3] = v15[3];
							if (v16)
							{
								if (v16 <= qword_140C3FE70)
									v17 = v16 + qword_140C3FE68;
								else
									v17 = 0i64;
							}
							else
							{
								v17 = 0i64;
							}
							if ((*(int(__fastcall**)(_QWORD, unsigned __int64, __int64, _QWORD))(**(_QWORD**)(qword_140C65898
								+ 29264)
								+ 40i64))(
									*(_QWORD*)(qword_140C65898 + 29264),
									v17,
									a1 + 96,
									0i64) >= 0)
							{
								v18 = *(_DWORD*)(v11 + 4 * v3 + 68);
								v19 = *(_QWORD*)(a1 + 96);
								v24 = 0;
								v26 = 0i64;
								v27 = 0i64;
								v25 = 1065353216;
								v23 = v18;
								v28 = 0;
								(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v19 + 584i64))(v19, 0i64, &v23);
								v20 = *(_QWORD*)(a1 + 96);
								v21 = *(_QWORD*)(qword_140C65898 + 29256);
								v30 = 0i64;
								if ((*(int(__fastcall**)(__int64, __int128*, __int64, __int64*, __int64*, _QWORD))(*(_QWORD*)v21 + 200i64))(
									v21,
									v29,
									v20,
									&v30,
									&v31,
									0i64) >= 0)
									*(_QWORD*)(a1 + 104) = v31;
							}
						}
						return sub_1400EA3E0(
							*(_QWORD*)(qword_140C65898 + 29504),
							"HousingBuildStarted",
							byte_1409F3264,
							(unsigned int)(*(_DWORD*)a1 + 1));
					}
				}
			}
		}
	}
	return result;
}
// 1405A9AF5: variable 'v8' is possibly undefined
// 1405A9AF5: variable 'v9' is possibly undefined
// 1405A9AF5: variable 'v10' is possibly undefined
// 1409F3264: using guessed type _BYTE byte_1409F3264[24];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

