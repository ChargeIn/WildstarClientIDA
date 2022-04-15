//----- (0000000140825B80) ----------------------------------------------------
__int64 __fastcall sub_140825B80(const WCHAR* a1, _DWORD* a2)
{
	__int64 v3; // [rsp+60h] [rbp-198h]
	SIZE_T uBytes; // [rsp+68h] [rbp-190h] BYREF
	HLOCAL hMem; // [rsp+70h] [rbp-188h]
	__int64 v6[2]; // [rsp+78h] [rbp-180h] BYREF
	__int64 v7; // [rsp+88h] [rbp-170h] BYREF
	unsigned int v8; // [rsp+90h] [rbp-168h]
	char v9[4]; // [rsp+94h] [rbp-164h] BYREF
	char v10[8]; // [rsp+98h] [rbp-160h] BYREF
	HLOCAL v11; // [rsp+A0h] [rbp-158h] BYREF
	char v12[8]; // [rsp+B0h] [rbp-148h] BYREF
	char v13[16]; // [rsp+B8h] [rbp-140h] BYREF
	char v14[16]; // [rsp+E0h] [rbp-118h] BYREF
	char v15[4]; // [rsp+180h] [rbp-78h] BYREF
	DWORD v16; // [rsp+184h] [rbp-74h]
	DWORD v17; // [rsp+188h] [rbp-70h]
	DWORD v18; // [rsp+18Ch] [rbp-6Ch]
	DWORD v19; // [rsp+190h] [rbp-68h]
	DWORD v20; // [rsp+194h] [rbp-64h]
	DWORD v21; // [rsp+198h] [rbp-60h]
	DWORD LastError; // [rsp+19Ch] [rbp-5Ch]
	char v23[16]; // [rsp+1A0h] [rbp-58h] BYREF
	char v24[16]; // [rsp+1B0h] [rbp-48h] BYREF
	char v25[16]; // [rsp+1C0h] [rbp-38h] BYREF
	char v26[16]; // [rsp+1D0h] [rbp-28h] BYREF

	v6[1] = 0i64;
	v7 = 0i64;
	v6[0] = 0i64;
	hMem = 0i64;
	v3 = 0i64;
	v11 = 0i64;
	v8 = 0;
	SetLastError(0);
	if (sub_1408260F0(a1))
	{
		if (!qword_140C61950)
		{
			qword_140C61950 = sub_140824350(aCrypt32Dll, 0);
			if (qword_140C61950)
			{
				CryptMsgClose = (BOOL(__stdcall*)(HCRYPTMSG))GetProcAddress(qword_140C61950, aCryptmsgclose);
				CertCloseStore = (BOOL(__stdcall*)(HCERTSTORE, DWORD))GetProcAddress(qword_140C61950, aCertclosestore);
				CertFreeCertificateContext = (BOOL(__stdcall*)(PCCERT_CONTEXT))GetProcAddress(
					qword_140C61950,
					aCertfreecertif);
				CertFindCertificateInStore = (PCCERT_CONTEXT(__stdcall*)(HCERTSTORE, DWORD, DWORD, DWORD, const void*, PCCERT_CONTEXT))GetProcAddress(qword_140C61950, aCertfindcertif);
				CryptMsgGetParam = (BOOL(__stdcall*)(HCRYPTMSG, DWORD, DWORD, void*, DWORD*))GetProcAddress(
					qword_140C61950,
					aCryptmsggetpar);
				CryptQueryObject = (BOOL(__stdcall*)(DWORD, const void*, DWORD, DWORD, DWORD, DWORD*, DWORD*, DWORD*, HCERTSTORE*, HCRYPTMSG*, const void**))GetProcAddress(qword_140C61950, aCryptqueryobje);
				CertGetNameStringA = (DWORD(__stdcall*)(PCCERT_CONTEXT, DWORD, DWORD, void*, LPSTR, DWORD))GetProcAddress(qword_140C61950, aCertgetnamestr);
				CryptDecodeObject = (BOOL(__stdcall*)(DWORD, LPCSTR, const BYTE*, DWORD, DWORD, void*, DWORD*))GetProcAddress(qword_140C61950, aCryptdecodeobj);
			}
		}
		if (!CryptMsgClose
			|| !CertCloseStore
			|| !CertFreeCertificateContext
			|| !CertFindCertificateInStore
			|| !CryptMsgGetParam
			|| !CryptQueryObject
			|| !CertGetNameStringA
			|| !CryptDecodeObject)
		{
			return 0i64;
		}
		v8 = ((__int64(__fastcall*)(__int64, const WCHAR*, __int64, __int64, _DWORD, char*, char*, char*, __int64*, __int64*, _QWORD))CryptQueryObject)(
			1i64,
			a1,
			1024i64,
			2i64,
			0,
			v10,
			v15,
			v9,
			&v7,
			v6,
			0i64);
		if (v8)
		{
			v8 = ((__int64(__fastcall*)(__int64, __int64, _QWORD, _QWORD, SIZE_T*))CryptMsgGetParam)(
				v6[0],
				6i64,
				0i64,
				0i64,
				&uBytes);
			if (v8)
			{
				hMem = LocalAlloc(0x40u, (unsigned int)uBytes);
				if (hMem)
				{
					v8 = ((__int64(__fastcall*)(__int64, __int64, _QWORD, HLOCAL, SIZE_T*))CryptMsgGetParam)(
						v6[0],
						6i64,
						0i64,
						hMem,
						&uBytes);
					if (v8)
					{
						qmemcpy(v26, (char*)hMem + 8, sizeof(v26));
						qmemcpy(v14, v26, sizeof(v14));
						qmemcpy(v25, (char*)hMem + 24, sizeof(v25));
						qmemcpy(v13, v25, sizeof(v13));
						v3 = ((__int64(__fastcall*)(__int64, __int64, _QWORD, __int64, char*, _QWORD))CertFindCertificateInStore)(
							v7,
							65537i64,
							0i64,
							720896i64,
							v12,
							0i64);
						if (v3)
						{
							if (!a2 || (*a2 = sub_140826360(v3), (v21 = GetLastError()) == 0))
							{
								if ((unsigned int)sub_1408265C0((__int64)hMem, &v11))
								{
									qmemcpy(v24, (char*)v11 + 8, sizeof(v24));
									qmemcpy(v14, v24, sizeof(v14));
									qmemcpy(v23, (char*)v11 + 24, sizeof(v23));
									qmemcpy(v13, v23, sizeof(v13));
									v3 = ((__int64(__fastcall*)(__int64, __int64, _QWORD, __int64, char*, _QWORD))CertFindCertificateInStore)(
										v7,
										65537i64,
										0i64,
										720896i64,
										v12,
										0i64);
									if (v3)
										v8 = 1;
									else
										LastError = GetLastError();
								}
							}
						}
						else
						{
							v20 = GetLastError();
						}
					}
					else
					{
						v19 = GetLastError();
					}
				}
				else
				{
					v18 = GetLastError();
				}
			}
			else
			{
				v17 = GetLastError();
			}
		}
		else
		{
			v16 = GetLastError();
		}
	}
	else
	{
		SetLastError(0x7Eu);
	}
	LocalFree(hMem);
	LocalFree(v11);
	if (v3)
		((void(__fastcall*)(__int64))CertFreeCertificateContext)(v3);
	if (v7)
		((void(__fastcall*)(__int64, _QWORD))CertCloseStore)(v7, 0i64);
	if (v6[0])
		((void(__fastcall*)(__int64))CryptMsgClose)(v6[0]);
	return v8;
}
// 140C61980: invalid function type has been ignored
// 140C61978: invalid function type has been ignored
// 140C61970: invalid function type has been ignored
// 140C61960: invalid function type has been ignored
// 140C61958: invalid function type has been ignored
// 140C10BB8: using guessed type wchar_t aCrypt32Dll[12];
// 140825B80: using guessed type char var_164[4];
// 140825B80: using guessed type char var_78[4];
// 140825B80: using guessed type char var_160[8];
// 140825B80: using guessed type char var_148[8];

