//----- (00000001402C7E30) ----------------------------------------------------
__int64 __fastcall sub_1402C7E30(__int64 a1)
{
	__int64 result; // rax
	unsigned int v3; // ebx
	__int64* v4; // rcx
	__int64 v5; // rax
	int v6; // [rsp+50h] [rbp-28h] BYREF
	__int64 v7; // [rsp+58h] [rbp-20h]
	_DWORD* (__fastcall * v8)(__int64); // [rsp+60h] [rbp-18h]
	__int64 v9; // [rsp+68h] [rbp-10h]

	*(_DWORD*)(a1 + 1336) = 1145044992;
	*(_DWORD*)(a1 + 1340) = 1157627904;
	*(_DWORD*)(a1 + 1344) = 3;
	*(_DWORD*)(a1 + 1348) = 1;
	*(_DWORD*)(a1 + 1352) = 1115684864;
	*(_DWORD*)(a1 + 1356) = 1056964608;
	result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
		qword_140C65670,
		L"Shaders\\SimplePS.sho",
		a1 + 16);
	if ((int)result >= 0)
	{
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 144i64))(
			qword_140C65670,
			L"Shaders\\SimpleVS.sho",
			a1 + 8);
		if ((int)result >= 0)
		{
			result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
				qword_140C65670,
				L"Shaders\\InteriorPS.sho",
				a1 + 32);
			if ((int)result >= 0)
			{
				result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 144i64))(
					qword_140C65670,
					L"Shaders\\InteriorVS.sho",
					a1 + 24);
				if ((int)result >= 0)
				{
					result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, _DWORD, int, _DWORD, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
						qword_140C65670,
						1i64,
						1i64,
						0i64,
						0,
						1,
						0,
						21,
						0,
						a1 + 1264);
					if ((int)result >= 0)
					{
						result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, _DWORD, int, _DWORD, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
							qword_140C65670,
							1i64,
							1i64,
							0i64,
							0,
							1,
							0,
							21,
							0,
							a1 + 1272);
						if ((int)result >= 0)
						{
							result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, _DWORD, int, _DWORD, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
								qword_140C65670,
								1i64,
								1i64,
								0i64,
								0,
								1,
								0,
								21,
								0,
								a1 + 1280);
							if ((int)result >= 0)
							{
								result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, _DWORD, int, int, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
									qword_140C65670,
									2i64,
									2i64,
									0i64,
									0,
									1,
									1,
									21,
									0,
									a1 + 1288);
								if ((int)result >= 0)
								{
									result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, _DWORD, int, int, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
										qword_140C65670,
										1i64,
										1i64,
										0i64,
										0,
										1,
										1,
										21,
										0,
										a1 + 1296);
									if ((int)result >= 0)
									{
										v3 = 0;
										while (1)
										{
											result = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD, int, _DWORD, int, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
												qword_140C65670,
												1i64,
												1i64,
												1i64,
												0,
												1,
												0,
												21,
												0,
												a1 + 8 * (v3 + 163i64));
											if ((int)result < 0)
												break;
											if (++v3 >= 2)
											{
												result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 192i64))(
													qword_140C65670,
													a1 + 1320);
												if ((int)result >= 0)
												{
													v4 = *(__int64**)(a1 + 1320);
													v8 = sub_1402C8170;
													v5 = *v4;
													v6 = 0;
													v7 = a1;
													v9 = 0i64;
													(*(void(__fastcall**)(__int64*, _QWORD, int*))(v5 + 24))(v4, 0i64, &v6);
													sub_1402C8170(a1);
													*(_DWORD*)(a1 + 1368) = 0;
													*(_DWORD*)(a1 + 1384) = 0;
													*(_DWORD*)a1 = 0;
													return 0i64;
												}
												return result;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return result;
}
// 140AF04E0: using guessed type wchar_t aShadersSimplep_5[21];
// 140AF0510: using guessed type wchar_t aShadersSimplev_0[21];
// 140AF0540: using guessed type wchar_t aShadersInterio[23];
// 140AF0570: using guessed type wchar_t aShadersInterio_0[23];
// 140C65670: using guessed type __int64 qword_140C65670;

