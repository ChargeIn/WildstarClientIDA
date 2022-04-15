//----- (00000001401B41F0) ----------------------------------------------------
signed int __fastcall sub_1401B41F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
	__int64 v7; // rbx
	int v8; // ebx
	signed int result; // eax
	_QWORD* v10; // rdi
	__int64 v11; // rcx
	__int64 v12; // r8
	__int64 v13; // rcx
	__int64 v14; // r8
	DWORD TempPathW; // eax
	__int64 v16; // rcx
	__int64 v17; // r8
	__int64 v18; // rdx
	int* v19; // rax
	__int64 v20; // r8
	WCHAR* v21; // rax
	bool v22; // zf
	__int64 v23; // r8
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-D0h] BYREF
	__int128 v25; // [rsp+38h] [rbp-C8h]
	__int64 v26; // [rsp+48h] [rbp-B8h] BYREF
	__int64(__fastcall * *v27)(); // [rsp+50h] [rbp-B0h] BYREF
	__int128 v28; // [rsp+58h] [rbp-A8h]
	WCHAR v29[264]; // [rsp+70h] [rbp-90h] BYREF
	WCHAR Buffer[264]; // [rsp+280h] [rbp+180h] BYREF

	v7 = *(_QWORD*)&qword_140C63788;
	if (*(_DWORD*)(*(_QWORD*)&qword_140C63788 + 4764i64))
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v25 = 0i64;
		*((_QWORD*)&v25 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v27 = TlsValue;
		v26 = 0x141D41730i64;
		v28 = v25;
		v8 = sub_1401971E0(&dword_140C8A228, 3, &v26, &v27);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v25 + 1));
		if (v8)
			DebugBreak();
		return -2147418113;
	}
	else
	{
		v10 = 0i64;
		*(_QWORD*)(v7 + 2120) = sub_1401B5400(
			a1,
			(WCHAR*)(*(_QWORD*)&qword_140C63788 + 1600i64),
			a3,
			(const WCHAR*)(*(_QWORD*)&qword_140C63788 + 16i64),
			L"..\\Data");
		*(_QWORD*)(v7 + 1592) = sub_1401B5400(v11, (WCHAR*)(v7 + 1072), v12, (const WCHAR*)(v7 + 16), 0i64);
		GetCurrentDirectoryW(0x104u, Buffer);
		*(_QWORD*)(v7 + 1064) = sub_1401B5400(v13, (WCHAR*)(v7 + 544), v14, Buffer, 0i64);
		result = SHGetFolderPathW(0i64, 32794, 0i64, 0, (LPWSTR)(v7 + 2684));
		if (result >= 0)
		{
			result = SHGetFolderPathW(0i64, 32796, 0i64, 0, (LPWSTR)(v7 + 3204));
			if (result >= 0)
			{
				result = SHGetFolderPathW(0i64, 32773, 0i64, 0, (LPWSTR)(v7 + 3724));
				if (result >= 0)
				{
					TempPathW = GetTempPathW(0x104u, (LPWSTR)(v7 + 4244));
					if (TempPathW)
					{
						if (TempPathW <= 0x104)
						{
							sub_1401B5400(v16, (WCHAR*)(v7 + 2164), v17, (const WCHAR*)(v7 + 16), L"..\\Patch");
							*(_DWORD*)(v7 + 2160) = dword_140C63734 == 0;
							if (!a7 || (result = sub_1401B4560((__int64*)v7, v18, a7), result >= 0))
							{
								v19 = sub_14018B280(232i64, 0);
								if (v19)
									v10 = (_QWORD*)sub_1401CF210((__int64)v19, v7);
								*(_QWORD*)(v7 + 4888) = v10;
								result = sub_1401CF470(v10);
								if (result >= 0)
								{
									result = sub_1401A1120((int**)(v7 + 4904), 4);
									if (result >= 0)
									{
										if ((int)sub_14001B370(v29, 260i64, L"%s%s\\%s", v7 + 4244, *(_QWORD*)(v7 + 4896), L"RemoteCache") >= 0
											&& v29[0])
										{
											v21 = v29;
											do
											{
												v22 = v21[1] == 0;
												++v21;
											} while (!v22);
										}
										if (!(unsigned int)sub_1401B5AB0(v7, v29, v20)
											|| (result = sub_1401B6FC0(v7, v29, v23), result >= 0))
										{
											*(_DWORD*)(v7 + 4764) = 1;
											return 0;
										}
									}
								}
							}
						}
						else
						{
							return -2147024774;
						}
					}
					else
					{
						result = GetLastError();
						if (result > 0)
							return (unsigned __int16)result | 0x80070000;
					}
				}
			}
		}
	}
	return result;
}
// 1401B431B: variable 'v11' is possibly undefined
// 1401B431B: variable 'v12' is possibly undefined
// 1401B434C: variable 'v13' is possibly undefined
// 1401B434C: variable 'v14' is possibly undefined
// 1401B4427: variable 'v16' is possibly undefined
// 1401B4427: variable 'v17' is possibly undefined
// 1401B444C: variable 'v18' is possibly undefined
// 1401B4503: variable 'v20' is possibly undefined
// 1401B4514: variable 'v23' is possibly undefined
// 140A47058: using guessed type wchar_t aRemotecache[12];
// 140A47138: using guessed type wchar_t aPatch[9];
// 140A47150: using guessed type wchar_t aData_0[8];
// 140A47438: using guessed type wchar_t aSSS_1[8];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63734: using guessed type int dword_140C63734;
// 140C8A228: using guessed type _DWORD dword_140C8A228;

